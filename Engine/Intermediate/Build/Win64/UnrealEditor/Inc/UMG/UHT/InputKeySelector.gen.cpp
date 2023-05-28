// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InputKeySelector.h"
#include "Framework/Commands/InputChord.h"
#include "InputCoreTypes.h"
#include "Layout/Margin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeySelector() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics
	{
		struct InputKeySelector_eventOnKeySelected_Parms
		{
			FInputChord SelectedKey;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventOnKeySelected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnKeySelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::InputKeySelector_eventOnKeySelected_Parms), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UInputKeySelector::FOnKeySelected_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelected, FInputChord SelectedKey)
{
	struct InputKeySelector_eventOnKeySelected_Parms
	{
		FInputChord SelectedKey;
	};
	InputKeySelector_eventOnKeySelected_Parms Parms;
	Parms.SelectedKey=SelectedKey;
	OnKeySelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnIsSelectingKeyChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UInputKeySelector::FOnIsSelectingKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsSelectingKeyChanged)
{
	OnIsSelectingKeyChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UInputKeySelector::execSetEscapeKeys)
	{
		P_GET_TARRAY_REF(FKey,Z_Param_Out_InKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeKeys(Z_Param_Out_InKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetTextBlockVisibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextBlockVisibility(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execGetIsSelectingKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSelectingKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetAllowGamepadKeys)
	{
		P_GET_UBOOL(Z_Param_bInAllowGamepadKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowGamepadKeys(Z_Param_bInAllowGamepadKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetAllowModifierKeys)
	{
		P_GET_UBOOL(Z_Param_bInAllowModifierKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowModifierKeys(Z_Param_bInAllowModifierKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetNoKeySpecifiedText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InNoKeySpecifiedText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoKeySpecifiedText(Z_Param_InNoKeySpecifiedText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetKeySelectionText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InKeySelectionText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeySelectionText(Z_Param_InKeySelectionText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputKeySelector::execSetSelectedKey)
	{
		P_GET_STRUCT_REF(FInputChord,Z_Param_Out_InSelectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedKey(Z_Param_Out_InSelectedKey);
		P_NATIVE_END;
	}
	void UInputKeySelector::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FButtonStyle& Result = *(FButtonStyle*)OutValue;
		Result = (FButtonStyle)Obj->GetButtonStyle();
	}
	void UInputKeySelector::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FButtonStyle& Value = *(FButtonStyle*)InValue;
		Obj->SetButtonStyle(Value);
	}
	void UInputKeySelector::GetTextStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FTextBlockStyle& Result = *(FTextBlockStyle*)OutValue;
		Result = (FTextBlockStyle)Obj->GetTextStyle();
	}
	void UInputKeySelector::SetTextStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FTextBlockStyle& Value = *(FTextBlockStyle*)InValue;
		Obj->SetTextStyle(Value);
	}
	void UInputKeySelector::GetSelectedKey_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FInputChord& Result = *(FInputChord*)OutValue;
		Result = (FInputChord)Obj->GetSelectedKey();
	}
	void UInputKeySelector::SetSelectedKey_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FInputChord& Value = *(FInputChord*)InValue;
		Obj->SetSelectedKey(Value);
	}
	void UInputKeySelector::GetMargin_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetMargin();
	}
	void UInputKeySelector::SetMargin_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetMargin(Value);
	}
	void UInputKeySelector::GetKeySelectionText_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FText& Result = *(FText*)OutValue;
		Result = (FText)Obj->GetKeySelectionText();
	}
	void UInputKeySelector::SetKeySelectionText_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FText& Value = *(FText*)InValue;
		Obj->SetKeySelectionText(Value);
	}
	void UInputKeySelector::GetNoKeySpecifiedText_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		FText& Result = *(FText*)OutValue;
		Result = (FText)Obj->GetNoKeySpecifiedText();
	}
	void UInputKeySelector::SetNoKeySpecifiedText_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		FText& Value = *(FText*)InValue;
		Obj->SetNoKeySpecifiedText(Value);
	}
	void UInputKeySelector::GetbAllowModifierKeys_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->AllowModifierKeys();
	}
	void UInputKeySelector::SetbAllowModifierKeys_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetAllowModifierKeys(Value);
	}
	void UInputKeySelector::GetbAllowGamepadKeys_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->AllowGamepadKeys();
	}
	void UInputKeySelector::SetbAllowGamepadKeys_WrapperImpl(void* Object, const void* InValue)
	{
		UInputKeySelector* Obj = (UInputKeySelector*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetAllowGamepadKeys(Value);
	}
	void UInputKeySelector::StaticRegisterNativesUInputKeySelector()
	{
		UClass* Class = UInputKeySelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSelectingKey", &UInputKeySelector::execGetIsSelectingKey },
			{ "SetAllowGamepadKeys", &UInputKeySelector::execSetAllowGamepadKeys },
			{ "SetAllowModifierKeys", &UInputKeySelector::execSetAllowModifierKeys },
			{ "SetEscapeKeys", &UInputKeySelector::execSetEscapeKeys },
			{ "SetKeySelectionText", &UInputKeySelector::execSetKeySelectionText },
			{ "SetNoKeySpecifiedText", &UInputKeySelector::execSetNoKeySpecifiedText },
			{ "SetSelectedKey", &UInputKeySelector::execSetSelectedKey },
			{ "SetTextBlockVisibility", &UInputKeySelector::execSetTextBlockVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics
	{
		struct InputKeySelector_eventGetIsSelectingKey_Parms
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
	void Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputKeySelector_eventGetIsSelectingKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the widget is currently selecting a key, otherwise returns false. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Returns true if the widget is currently selecting a key, otherwise returns false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "GetIsSelectingKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::InputKeySelector_eventGetIsSelectingKey_Parms), Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics
	{
		struct InputKeySelector_eventSetAllowGamepadKeys_Parms
		{
			bool bInAllowGamepadKeys;
		};
		static void NewProp_bInAllowGamepadKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowGamepadKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit(void* Obj)
	{
		((InputKeySelector_eventSetAllowGamepadKeys_Parms*)Obj)->bInAllowGamepadKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys = { "bInAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets whether or not gamepad keys are allowed in the selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not gamepad keys are allowed in the selected key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowGamepadKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::InputKeySelector_eventSetAllowGamepadKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics
	{
		struct InputKeySelector_eventSetAllowModifierKeys_Parms
		{
			bool bInAllowModifierKeys;
		};
		static void NewProp_bInAllowModifierKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowModifierKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit(void* Obj)
	{
		((InputKeySelector_eventSetAllowModifierKeys_Parms*)Obj)->bInAllowModifierKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys = { "bInAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets whether or not modifier keys are allowed in the selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not modifier keys are allowed in the selected key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowModifierKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::InputKeySelector_eventSetAllowModifierKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics
	{
		struct InputKeySelector_eventSetEscapeKeys_Parms
		{
			TArray<FKey> InKeys;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetEscapeKeys_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets escape keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets escape keys." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetEscapeKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::InputKeySelector_eventSetEscapeKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics
	{
		struct InputKeySelector_eventSetKeySelectionText_Parms
		{
			FText InKeySelectionText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InKeySelectionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText = { "InKeySelectionText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetKeySelectionText_Parms, InKeySelectionText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the text which is displayed while selecting keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetKeySelectionText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::InputKeySelector_eventSetKeySelectionText_Parms), Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics
	{
		struct InputKeySelector_eventSetNoKeySpecifiedText_Parms
		{
			FText InNoKeySpecifiedText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InNoKeySpecifiedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText = { "InNoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetNoKeySpecifiedText_Parms, InNoKeySpecifiedText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the text to display when no key text is available or not selecting a key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetNoKeySpecifiedText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::InputKeySelector_eventSetNoKeySpecifiedText_Parms), Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics
	{
		struct InputKeySelector_eventSetSelectedKey_Parms
		{
			FInputChord InSelectedKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectedKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectedKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey = { "InSelectedKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetSelectedKey_Parms, InSelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData)) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the currently selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the currently selected key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetSelectedKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::InputKeySelector_eventSetSelectedKey_Parms), Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics
	{
		struct InputKeySelector_eventSetTextBlockVisibility_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetTextBlockVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData)) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the visibility of the text block. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the visibility of the text block." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetTextBlockVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::InputKeySelector_eventSetTextBlockVisibility_Parms), Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputKeySelector);
	UClass* Z_Construct_UClass_UInputKeySelector_NoRegister()
	{
		return UInputKeySelector::StaticClass();
	}
	struct Z_Construct_UClass_UInputKeySelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySelectionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KeySelectionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoKeySpecifiedText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NoKeySpecifiedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModifierKeys_MetaData[];
#endif
		static void NewProp_bAllowModifierKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModifierKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGamepadKeys_MetaData[];
#endif
		static void NewProp_bAllowGamepadKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGamepadKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EscapeKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnKeySelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIsSelectingKeyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsSelectingKeyChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputKeySelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputKeySelector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey, "GetIsSelectingKey" }, // 1605779500
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, "OnIsSelectingKeyChanged__DelegateSignature" }, // 905270652
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, "OnKeySelected__DelegateSignature" }, // 3447044415
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys, "SetAllowGamepadKeys" }, // 3696771429
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys, "SetAllowModifierKeys" }, // 27107608
		{ &Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys, "SetEscapeKeys" }, // 2226071353
		{ &Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText, "SetKeySelectionText" }, // 2892389558
		{ &Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText, "SetNoKeySpecifiedText" }, // 3667633110
		{ &Z_Construct_UFunction_UInputKeySelector_SetSelectedKey, "SetSelectedKey" }, // 288458548
		{ &Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility, "SetTextBlockVisibility" }, // 3742344850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A widget for selecting a single key or a single key with a modifier. */" },
		{ "IncludePath", "Components/InputKeySelector.h" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "A widget for selecting a single key or a single key with a modifier." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetWidgetStyle_WrapperImpl, &UInputKeySelector::GetWidgetStyle_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetTextStyle_WrapperImpl, &UInputKeySelector::GetTextStyle_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData[] = {
		{ "BlueprintSetter", "SetSelectedKey" },
		{ "Category", "Key Selection" },
		{ "Comment", "/** The currently selected key chord. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The currently selected key chord." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetSelectedKey_WrapperImpl, &UInputKeySelector::GetSelectedKey_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount of blank space around the text used to display the currently selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The amount of blank space around the text used to display the currently selected key." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetMargin_WrapperImpl, &UInputKeySelector::GetMargin_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData[] = {
		{ "BlueprintSetter", "SetKeySelectionText" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the text which is displayed while selecting keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText = { "KeySelectionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetKeySelectionText_WrapperImpl, &UInputKeySelector::GetKeySelectionText_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, KeySelectionText), METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData[] = {
		{ "BlueprintSetter", "SetNoKeySpecifiedText" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the text to display when no key text is available or not selecting a key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText = { "NoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetNoKeySpecifiedText_WrapperImpl, &UInputKeySelector::GetNoKeySpecifiedText_WrapperImpl, STRUCT_OFFSET(UInputKeySelector, NoKeySpecifiedText), METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData[] = {
		{ "BlueprintSetter", "SetAllowModifierKeys" },
		{ "Category", "Key Selection" },
		{ "Comment", "/**\n\x09 * When true modifier keys such as control and alt are allowed in the\n\x09 * input chord representing the selected key, if false modifier keys are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true modifier keys such as control and alt are allowed in the\ninput chord representing the selected key, if false modifier keys are ignored." },
	};
#endif
	void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit(void* Obj)
	{
		((UInputKeySelector*)Obj)->bAllowModifierKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys = { "bAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetbAllowModifierKeys_WrapperImpl, &UInputKeySelector::GetbAllowModifierKeys_WrapperImpl, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData[] = {
		{ "BlueprintSetter", "SetAllowGamepadKeys" },
		{ "Category", "Key Selection" },
		{ "Comment", "/** When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
#endif
	void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit(void* Obj)
	{
		((UInputKeySelector*)Obj)->bAllowGamepadKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys = { "bAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInputKeySelector::SetbAllowGamepadKeys_WrapperImpl, &UInputKeySelector::GetbAllowGamepadKeys_WrapperImpl, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner = { "EscapeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "Comment", "/** When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys = { "EscapeKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputKeySelector, EscapeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever a new key is selected by the user. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever a new key is selected by the user." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected = { "OnKeySelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputKeySelector, OnKeySelected), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData)) }; // 3447044415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the key selection mode starts or stops. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever the key selection mode starts or stops." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged = { "OnIsSelectingKeyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputKeySelector, OnIsSelectingKeyChanged), Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData)) }; // 905270652
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeySelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputKeySelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeySelector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputKeySelector_Statics::ClassParams = {
		&UInputKeySelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputKeySelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputKeySelector()
	{
		if (!Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton, Z_Construct_UClass_UInputKeySelector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UInputKeySelector>()
	{
		return UInputKeySelector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeySelector);
	UInputKeySelector::~UInputKeySelector() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UInputKeySelector, SelectedKey)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UInputKeySelector)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UInputKeySelector, SelectedKey)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UInputKeySelector);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInputKeySelector)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputKeySelector, UInputKeySelector::StaticClass, TEXT("UInputKeySelector"), &Z_Registration_Info_UClass_UInputKeySelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputKeySelector), 3452958889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_2542155966(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
