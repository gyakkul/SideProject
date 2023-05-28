// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Button.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButton() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnButtonClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClickedEvent)
{
	OnButtonClickedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonPressedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnButtonPressedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonPressedEvent)
{
	OnButtonPressedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonReleasedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnButtonReleasedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonReleasedEvent)
{
	OnButtonReleasedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonHoverEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnButtonHoverEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonHoverEvent)
{
	OnButtonHoverEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UButton::execSetPressMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPressMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execSetTouchMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTouchMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execSetClickMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InClickMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execSetBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InBackgroundColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundColor(Z_Param_InBackgroundColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execSetColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UButton::execSetStyle)
	{
		P_GET_STRUCT_REF(FButtonStyle,Z_Param_Out_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStyle(Z_Param_Out_InStyle);
		P_NATIVE_END;
	}
	void UButton::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		FButtonStyle& Result = *(FButtonStyle*)OutValue;
		Result = (FButtonStyle)Obj->GetStyle();
	}
	void UButton::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		FButtonStyle& Value = *(FButtonStyle*)InValue;
		Obj->SetStyle(Value);
	}
	void UButton::GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetColorAndOpacity();
	}
	void UButton::SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetColorAndOpacity(Value);
	}
	void UButton::GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetBackgroundColor();
	}
	void UButton::SetBackgroundColor_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetBackgroundColor(Value);
	}
	void UButton::GetClickMethod_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		EButtonClickMethod::Type& Result = *(EButtonClickMethod::Type*)OutValue;
		Result = (EButtonClickMethod::Type)Obj->GetClickMethod();
	}
	void UButton::SetClickMethod_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		EButtonClickMethod::Type Value = (EButtonClickMethod::Type)*(uint8*)InValue;
		Obj->SetClickMethod(Value);
	}
	void UButton::GetTouchMethod_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		EButtonTouchMethod::Type& Result = *(EButtonTouchMethod::Type*)OutValue;
		Result = (EButtonTouchMethod::Type)Obj->GetTouchMethod();
	}
	void UButton::SetTouchMethod_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		EButtonTouchMethod::Type Value = (EButtonTouchMethod::Type)*(uint8*)InValue;
		Obj->SetTouchMethod(Value);
	}
	void UButton::GetPressMethod_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		EButtonPressMethod::Type& Result = *(EButtonPressMethod::Type*)OutValue;
		Result = (EButtonPressMethod::Type)Obj->GetPressMethod();
	}
	void UButton::SetPressMethod_WrapperImpl(void* Object, const void* InValue)
	{
		UButton* Obj = (UButton*)Object;
		EButtonPressMethod::Type Value = (EButtonPressMethod::Type)*(uint8*)InValue;
		Obj->SetPressMethod(Value);
	}
	void UButton::GetIsFocusable_WrapperImpl(const void* Object, void* OutValue)
	{
		const UButton* Obj = (const UButton*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetIsFocusable();
	}
	void UButton::StaticRegisterNativesUButton()
	{
		UClass* Class = UButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPressed", &UButton::execIsPressed },
			{ "SetBackgroundColor", &UButton::execSetBackgroundColor },
			{ "SetClickMethod", &UButton::execSetClickMethod },
			{ "SetColorAndOpacity", &UButton::execSetColorAndOpacity },
			{ "SetPressMethod", &UButton::execSetPressMethod },
			{ "SetStyle", &UButton::execSetStyle },
			{ "SetTouchMethod", &UButton::execSetTouchMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UButton_IsPressed_Statics
	{
		struct Button_eventIsPressed_Parms
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
	void Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Button_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Button_eventIsPressed_Parms), &Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/**\n\x09 * Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.\n\x09 *\n\x09 * @return true if the user is actively pressing the button otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.\n\n@return true if the user is actively pressing the button otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "IsPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_IsPressed_Statics::Button_eventIsPressed_Parms), Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_IsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetBackgroundColor_Statics
	{
		struct Button_eventSetBackgroundColor_Parms
		{
			FLinearColor InBackgroundColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::NewProp_InBackgroundColor = { "InBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetBackgroundColor_Parms, InBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::NewProp_InBackgroundColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button background" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Button_eventSetBackgroundColor_Parms), Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetClickMethod_Statics
	{
		struct Button_eventSetClickMethod_Parms
		{
			TEnumAsByte<EButtonClickMethod::Type> InClickMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InClickMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetClickMethod_Statics::NewProp_InClickMethod = { "InClickMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetClickMethod_Parms, InClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(nullptr, 0) }; // 4238010345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetClickMethod_Statics::NewProp_InClickMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetClickMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetClickMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetClickMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Button_eventSetClickMethod_Parms), Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetClickMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetClickMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics
	{
		struct Button_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button content */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button content" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Button_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetPressMethod_Statics
	{
		struct Button_eventSetPressMethod_Parms
		{
			TEnumAsByte<EButtonPressMethod::Type> InPressMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPressMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetPressMethod_Statics::NewProp_InPressMethod = { "InPressMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetPressMethod_Parms, InPressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(nullptr, 0) }; // 73978870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetPressMethod_Statics::NewProp_InPressMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetPressMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetPressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetPressMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Button_eventSetPressMethod_Parms), Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetPressMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetPressMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetStyle_Statics
	{
		struct Button_eventSetStyle_Parms
		{
			FButtonStyle InStyle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetStyle_Parms, InStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle_MetaData)) }; // 2024050934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button background" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetStyle_Statics::Button_eventSetStyle_Parms), Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UButton_SetTouchMethod_Statics
	{
		struct Button_eventSetTouchMethod_Parms
		{
			TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTouchMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetTouchMethod_Statics::NewProp_InTouchMethod = { "InTouchMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Button_eventSetTouchMethod_Parms, InTouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(nullptr, 0) }; // 922219495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetTouchMethod_Statics::NewProp_InTouchMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetTouchMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetTouchMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Button_eventSetTouchMethod_Parms), Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButton_SetTouchMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetTouchMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButton);
	UClass* Z_Construct_UClass_UButton_NoRegister()
	{
		return UButton::StaticClass();
	}
	struct Z_Construct_UClass_UButton_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClickMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PressMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnhovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhovered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UButton_IsPressed, "IsPressed" }, // 693869206
		{ &Z_Construct_UFunction_UButton_SetBackgroundColor, "SetBackgroundColor" }, // 2986319133
		{ &Z_Construct_UFunction_UButton_SetClickMethod, "SetClickMethod" }, // 1853393104
		{ &Z_Construct_UFunction_UButton_SetColorAndOpacity, "SetColorAndOpacity" }, // 2850715701
		{ &Z_Construct_UFunction_UButton_SetPressMethod, "SetPressMethod" }, // 258392953
		{ &Z_Construct_UFunction_UButton_SetStyle, "SetStyle" }, // 265214563
		{ &Z_Construct_UFunction_UButton_SetTouchMethod, "SetTouchMethod" }, // 2997324602
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The button is a click-able primitive widget to enable basic interaction, you\n * can place any other widget inside a button to make a more complex and \n * interesting click-able element in your UI.\n *\n * * Single Child\n * * Clickable\n */" },
		{ "IncludePath", "Components/Button.h" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The button is a click-able primitive widget to enable basic interaction, you\ncan place any other widget inside a button to make a more complex and\ninteresting click-able element in your UI.\n\n* Single Child\n* Clickable" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "BlueprintSetter", "SetStyle" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetWidgetStyle_WrapperImpl, &UButton::GetWidgetStyle_WrapperImpl, STRUCT_OFFSET(UButton, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color multiplier for the button content */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "The color multiplier for the button content" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetColorAndOpacity_WrapperImpl, &UButton::GetColorAndOpacity_WrapperImpl, STRUCT_OFFSET(UButton, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "BlueprintSetter", "SetBackgroundColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "The color multiplier for the button background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetBackgroundColor_WrapperImpl, &UButton::GetBackgroundColor_WrapperImpl, STRUCT_OFFSET(UButton, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod_MetaData[] = {
		{ "BlueprintSetter", "SetClickMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod = { "ClickMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetClickMethod_WrapperImpl, &UButton::GetClickMethod_WrapperImpl, STRUCT_OFFSET(UButton, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod_MetaData)) }; // 4238010345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod_MetaData[] = {
		{ "BlueprintSetter", "SetTouchMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of touch action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of touch action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod = { "TouchMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetTouchMethod_WrapperImpl, &UButton::GetTouchMethod_WrapperImpl, STRUCT_OFFSET(UButton, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod_MetaData)) }; // 922219495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_PressMethod_MetaData[] = {
		{ "BlueprintSetter", "SetPressMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_PressMethod = { "PressMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UButton::SetPressMethod_WrapperImpl, &UButton::GetPressMethod_WrapperImpl, STRUCT_OFFSET(UButton, PressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_PressMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_PressMethod_MetaData)) }; // 73978870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Sometimes a button should only be mouse-clickable and never keyboard focusable. */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
	};
#endif
	void Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UButton*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UButton::GetIsFocusable_WrapperImpl, sizeof(bool), sizeof(UButton), &Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_OnClicked_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is clicked */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is clicked" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButton, OnClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_OnClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_OnClicked_MetaData)) }; // 2358670591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_OnPressed_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is pressed */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is pressed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnPressed = { "OnPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButton, OnPressed), Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_OnPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_OnPressed_MetaData)) }; // 454992865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_OnReleased_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is released */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is released" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButton, OnReleased), Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_OnReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_OnReleased_MetaData)) }; // 2577069928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_OnHovered_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnHovered = { "OnHovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButton, OnHovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_OnHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_OnHovered_MetaData)) }; // 2150841518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered = { "OnUnhovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButton, OnUnhovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered_MetaData)) }; // 2150841518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_PressMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UButton_Statics::ClassParams = {
		&UButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButton()
	{
		if (!Z_Registration_Info_UClass_UButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButton.OuterSingleton, Z_Construct_UClass_UButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UButton.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UButton>()
	{
		return UButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButton);
	UButton::~UButton() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UButton, UButton::StaticClass, TEXT("UButton"), &Z_Registration_Info_UClass_UButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButton), 3467391932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_2335926182(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
