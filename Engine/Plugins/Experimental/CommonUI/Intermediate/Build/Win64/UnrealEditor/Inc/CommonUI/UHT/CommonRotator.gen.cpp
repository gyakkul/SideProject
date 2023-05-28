// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonRotator() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnRotated_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnRotated_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnRotated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::_Script_CommonUI_eventOnRotated_Parms), Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRotated_DelegateWrapper(const FMulticastScriptDelegate& OnRotated, int32 Value)
{
	struct _Script_CommonUI_eventOnRotated_Parms
	{
		int32 Value;
	};
	_Script_CommonUI_eventOnRotated_Parms Parms;
	Parms.Value=Value;
	OnRotated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonRotator::execShiftTextRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftTextRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonRotator::execShiftTextLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftTextLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonRotator::execGetSelectedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonRotator::execSetSelectedItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedItem(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonRotator::execGetSelectedText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSelectedText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonRotator::execPopulateTextLabels)
	{
		P_GET_TARRAY(FText,Z_Param_Labels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateTextLabels(Z_Param_Labels);
		P_NATIVE_END;
	}
	struct CommonRotator_eventBP_OnOptionSelected_Parms
	{
		int32 Index;
	};
	struct CommonRotator_eventBP_OnOptionsPopulated_Parms
	{
		int32 Count;
	};
	static FName NAME_UCommonRotator_BP_OnOptionSelected = FName(TEXT("BP_OnOptionSelected"));
	void UCommonRotator::BP_OnOptionSelected(int32 Index)
	{
		CommonRotator_eventBP_OnOptionSelected_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UCommonRotator_BP_OnOptionSelected),&Parms);
	}
	static FName NAME_UCommonRotator_BP_OnOptionsPopulated = FName(TEXT("BP_OnOptionsPopulated"));
	void UCommonRotator::BP_OnOptionsPopulated(int32 Count)
	{
		CommonRotator_eventBP_OnOptionsPopulated_Parms Parms;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_UCommonRotator_BP_OnOptionsPopulated),&Parms);
	}
	void UCommonRotator::StaticRegisterNativesUCommonRotator()
	{
		UClass* Class = UCommonRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedIndex", &UCommonRotator::execGetSelectedIndex },
			{ "GetSelectedText", &UCommonRotator::execGetSelectedText },
			{ "PopulateTextLabels", &UCommonRotator::execPopulateTextLabels },
			{ "SetSelectedItem", &UCommonRotator::execSetSelectedItem },
			{ "ShiftTextLeft", &UCommonRotator::execShiftTextLeft },
			{ "ShiftTextRight", &UCommonRotator::execShiftTextRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventBP_OnOptionSelected_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Options Selected" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "BP_OnOptionSelected", nullptr, nullptr, sizeof(CommonRotator_eventBP_OnOptionSelected_Parms), Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventBP_OnOptionsPopulated_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Options Populated" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "BP_OnOptionsPopulated", nullptr, nullptr, sizeof(CommonRotator_eventBP_OnOptionsPopulated_Parms), Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics
	{
		struct CommonRotator_eventGetSelectedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current selected index */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Gets the current selected index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "GetSelectedIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::CommonRotator_eventGetSelectedIndex_Parms), Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics
	{
		struct CommonRotator_eventGetSelectedText_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventGetSelectedText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current text value of the slider. */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Gets the current text value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "GetSelectedText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::CommonRotator_eventGetSelectedText_Parms), Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics
	{
		struct CommonRotator_eventPopulateTextLabels_Parms
		{
			TArray<FText> Labels;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Labels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventPopulateTextLabels_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the array of texts available */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Set the array of texts available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "PopulateTextLabels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::CommonRotator_eventPopulateTextLabels_Parms), Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_PopulateTextLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics
	{
		struct CommonRotator_eventSetSelectedItem_Parms
		{
			int32 InValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonRotator_eventSetSelectedItem_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "SetSelectedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::CommonRotator_eventSetSelectedItem_Parms), Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Shift the current text left. */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Shift the current text left." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "ShiftTextLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Shift the current text right. */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Shift the current text right." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, nullptr, "ShiftTextRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonRotator);
	UClass* Z_Construct_UClass_UCommonRotator_NoRegister()
	{
		return UCommonRotator::StaticClass();
	}
	struct Z_Construct_UClass_UCommonRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRotated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonRotator_BP_OnOptionSelected, "BP_OnOptionSelected" }, // 1164726725
		{ &Z_Construct_UFunction_UCommonRotator_BP_OnOptionsPopulated, "BP_OnOptionsPopulated" }, // 4175877838
		{ &Z_Construct_UFunction_UCommonRotator_GetSelectedIndex, "GetSelectedIndex" }, // 1362085586
		{ &Z_Construct_UFunction_UCommonRotator_GetSelectedText, "GetSelectedText" }, // 1574892100
		{ &Z_Construct_UFunction_UCommonRotator_PopulateTextLabels, "PopulateTextLabels" }, // 276296083
		{ &Z_Construct_UFunction_UCommonRotator_SetSelectedItem, "SetSelectedItem" }, // 4239241558
		{ &Z_Construct_UFunction_UCommonRotator_ShiftTextLeft, "ShiftTextLeft" }, // 593578640
		{ &Z_Construct_UFunction_UCommonRotator_ShiftTextRight, "ShiftTextRight" }, // 48952542
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A button that can rotate between given text labels.\n*/" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonRotator.h" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "A button that can rotate between given text labels." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the Selected state of this button changes */" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "Called when the Selected state of this button changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated = { "OnRotated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRotator, OnRotated), Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData)) }; // 3880933060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommonRotator" },
		{ "Comment", "/** The displayed text */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
		{ "ToolTip", "The displayed text" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText = { "MyText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonRotator, MyText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonRotator_Statics::ClassParams = {
		&UCommonRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonRotator()
	{
		if (!Z_Registration_Info_UClass_UCommonRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonRotator.OuterSingleton, Z_Construct_UClass_UCommonRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonRotator.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonRotator>()
	{
		return UCommonRotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonRotator);
	UCommonRotator::~UCommonRotator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonRotator, UCommonRotator::StaticClass, TEXT("UCommonRotator"), &Z_Registration_Info_UClass_UCommonRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonRotator), 1455671171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_607685113(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
