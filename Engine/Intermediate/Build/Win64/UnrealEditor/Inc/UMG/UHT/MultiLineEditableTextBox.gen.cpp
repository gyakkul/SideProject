// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateTypes.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableTextBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxChangedEvent, FText const& Text)
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
	{
		FText Text;
	};
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms Parms;
	Parms.Text=Text;
	OnMultiLineEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) }; // 1116915171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod)
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms Parms;
	Parms.Text=Text;
	Parms.CommitMethod=CommitMethod;
	OnMultiLineEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetForegroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForegroundColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetTextStyle)
	{
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InTextStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextStyle(Z_Param_Out_InTextStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetIsReadOnly)
	{
		P_GET_UBOOL(Z_Param_bReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReadOnly(Z_Param_bReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetError)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetError(Z_Param_InError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetHintText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHintText(Z_Param_InHintText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execGetHintText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHintText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableTextBox::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	void UMultiLineEditableTextBox::GetText_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
		FText& Result = *(FText*)OutValue;
		Result = (FText)Obj->GetText();
	}
	void UMultiLineEditableTextBox::SetText_WrapperImpl(void* Object, const void* InValue)
	{
		UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
		FText& Value = *(FText*)InValue;
		Obj->SetText(Value);
	}
	void UMultiLineEditableTextBox::GetHintText_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
		FText& Result = *(FText*)OutValue;
		Result = (FText)Obj->GetHintText();
	}
	void UMultiLineEditableTextBox::SetHintText_WrapperImpl(void* Object, const void* InValue)
	{
		UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
		FText& Value = *(FText*)InValue;
		Obj->SetHintText(Value);
	}
	void UMultiLineEditableTextBox::GetbIsReadOnly_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetIsReadOnly();
	}
	void UMultiLineEditableTextBox::SetbIsReadOnly_WrapperImpl(void* Object, const void* InValue)
	{
		UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetIsReadOnly(Value);
	}
	void UMultiLineEditableTextBox::StaticRegisterNativesUMultiLineEditableTextBox()
	{
		UClass* Class = UMultiLineEditableTextBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHintText", &UMultiLineEditableTextBox::execGetHintText },
			{ "GetText", &UMultiLineEditableTextBox::execGetText },
			{ "SetError", &UMultiLineEditableTextBox::execSetError },
			{ "SetForegroundColor", &UMultiLineEditableTextBox::execSetForegroundColor },
			{ "SetHintText", &UMultiLineEditableTextBox::execSetHintText },
			{ "SetIsReadOnly", &UMultiLineEditableTextBox::execSetIsReadOnly },
			{ "SetText", &UMultiLineEditableTextBox::execSetText },
			{ "SetTextStyle", &UMultiLineEditableTextBox::execSetTextStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics
	{
		struct MultiLineEditableTextBox_eventGetHintText_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns the Hint text that appears when there is no text in the text box */" },
		{ "DisplayName", "GetHintText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Returns the Hint text that appears when there is no text in the text box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "GetHintText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::MultiLineEditableTextBox_eventGetHintText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics
	{
		struct MultiLineEditableTextBox_eventGetText_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::MultiLineEditableTextBox_eventGetText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics
	{
		struct MultiLineEditableTextBox_eventSetError_Parms
		{
			FText InError;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError = { "InError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetError (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::MultiLineEditableTextBox_eventSetError_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics
	{
		struct MultiLineEditableTextBox_eventSetForegroundColor_Parms
		{
			FLinearColor color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetForegroundColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetForegroundColor (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetForegroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::MultiLineEditableTextBox_eventSetForegroundColor_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics
	{
		struct MultiLineEditableTextBox_eventSetHintText_Parms
		{
			FText InHintText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InHintText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetHintText_Parms, InHintText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::NewProp_InHintText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Sets the Hint text that appears when there is no text in the text box\n\x09* @param InHintText The text that appears when there is no text in the text box\n\x09*/" },
		{ "DisplayName", "SetHintText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets the Hint text that appears when there is no text in the text box\n@param InHintText The text that appears when there is no text in the text box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetHintText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::MultiLineEditableTextBox_eventSetHintText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics
	{
		struct MultiLineEditableTextBox_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[];
#endif
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_MetaData[] = {
		{ "DisplayName", "ReadyOnly" },
	};
#endif
	void Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((MultiLineEditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetIsReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::MultiLineEditableTextBox_eventSetIsReadOnly_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics
	{
		struct MultiLineEditableTextBox_eventSetText_Parms
		{
			FText InText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::MultiLineEditableTextBox_eventSetText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics
	{
		struct MultiLineEditableTextBox_eventSetTextStyle_Parms
		{
			FTextBlockStyle InTextStyle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle = { "InTextStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetTextStyle_Parms, InTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle_MetaData)) }; // 622949925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetTextStyle (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::MultiLineEditableTextBox_eventSetTextStyle_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiLineEditableTextBox);
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister()
	{
		return UMultiLineEditableTextBox::StaticClass();
	}
	struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[];
#endif
		static void NewProp_AllowContextMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFontDeprecationDone_MetaData[];
#endif
		static void NewProp_bIsFontDeprecationDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFontDeprecationDone;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiLineEditableTextBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText, "GetHintText" }, // 1867579652
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetText, "GetText" }, // 2500001712
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature" }, // 2373750339
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature" }, // 1299244521
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetError, "SetError" }, // 1222621835
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor, "SetForegroundColor" }, // 1175293352
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText, "SetHintText" }, // 1743624347
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 3862568538
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetText, "SetText" }, // 4026094688
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle, "SetTextStyle" }, // 804022419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows a user to enter multiple lines of text\n */" },
		{ "DisplayName", "Text Box (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableTextBox.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Allows a user to enter multiple lines of text" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMultiLineEditableTextBox::SetText_WrapperImpl, &UMultiLineEditableTextBox::GetText_WrapperImpl, STRUCT_OFFSET(UMultiLineEditableTextBox, Text), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData[] = {
		{ "BlueprintGetter", "GetHintText" },
		{ "BlueprintSetter", "SetHintText" },
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMultiLineEditableTextBox::SetHintText_WrapperImpl, &UMultiLineEditableTextBox::GetHintText_WrapperImpl, STRUCT_OFFSET(UMultiLineEditableTextBox, HintText), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData)) }; // 2582397435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData)) }; // 255857817
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Comment", "/** The text style */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The text style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, TextStyle_DEPRECATED), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UMultiLineEditableTextBox*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMultiLineEditableTextBox::SetbIsReadOnly_WrapperImpl, &UMultiLineEditableTextBox::GetbIsReadOnly_WrapperImpl, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
	{
		((UMultiLineEditableTextBox*)Obj)->AllowContextMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options to be used by the virtual keyboard summoned from this widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Additional options to be used by the virtual keyboard summoned from this widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData)) }; // 1698244812
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData)) }; // 3172622149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData)) }; // 2373750339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData)) }; // 1299244521
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit(void* Obj)
	{
		((UMultiLineEditableTextBox*)Obj)->bIsFontDeprecationDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone = { "bIsFontDeprecationDone", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiLineEditableTextBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableTextBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams = {
		&UMultiLineEditableTextBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox()
	{
		if (!Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton, Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMultiLineEditableTextBox>()
	{
		return UMultiLineEditableTextBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableTextBox);
	UMultiLineEditableTextBox::~UMultiLineEditableTextBox() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMultiLineEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMultiLineEditableTextBox)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMultiLineEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMultiLineEditableTextBox);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMultiLineEditableTextBox)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiLineEditableTextBox, UMultiLineEditableTextBox::StaticClass, TEXT("UMultiLineEditableTextBox"), &Z_Registration_Info_UClass_UMultiLineEditableTextBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiLineEditableTextBox), 3633250178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_3162037739(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
