// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ComboBoxKey.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxKey() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	UMG_API UClass* Z_Construct_UClass_UComboBoxKey();
	UMG_API UClass* Z_Construct_UClass_UComboBoxKey_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics
	{
		struct ComboBoxKey_eventOnSelectionChangedEvent_Parms
		{
			FName SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedItem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventOnSelectionChangedEvent_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) }; // 2646121829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "OnSelectionChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::ComboBoxKey_eventOnSelectionChangedEvent_Parms), Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UComboBoxKey::FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, FName SelectedItem, ESelectInfo::Type SelectionType)
{
	struct ComboBoxKey_eventOnSelectionChangedEvent_Parms
	{
		FName SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
	ComboBoxKey_eventOnSelectionChangedEvent_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	Parms.SelectionType=SelectionType;
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "OnOpeningEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UComboBoxKey::FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent)
{
	OnOpeningEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics
	{
		struct ComboBoxKey_eventGenerateWidgetEvent_Parms
		{
			FName Item;
			UWidget* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Item;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventGenerateWidgetEvent_Parms, Item), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventGenerateWidgetEvent_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "GenerateWidgetEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::ComboBoxKey_eventGenerateWidgetEvent_Parms), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
UWidget* UComboBoxKey::FGenerateWidgetEvent_DelegateWrapper(const FScriptDelegate& GenerateWidgetEvent, FName Item)
{
	struct ComboBoxKey_eventGenerateWidgetEvent_Parms
	{
		FName Item;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		ComboBoxKey_eventGenerateWidgetEvent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	ComboBoxKey_eventGenerateWidgetEvent_Parms Parms;
	Parms.Item=Item;
	GenerateWidgetEvent.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	DEFINE_FUNCTION(UComboBoxKey::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execGetSelectedOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSelectedOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execSetSelectedOption)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedOption(Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execClearSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execClearOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execRemoveOption)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboBoxKey::execAddOption)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOption(Z_Param_Option);
		P_NATIVE_END;
	}
	void UComboBoxKey::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		FComboBoxStyle& Result = *(FComboBoxStyle*)OutValue;
		Result = (FComboBoxStyle)Obj->GetWidgetStyle();
	}
	void UComboBoxKey::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		FComboBoxStyle& Value = *(FComboBoxStyle*)InValue;
		Obj->SetWidgetStyle(Value);
	}
	void UComboBoxKey::GetItemStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		FTableRowStyle& Result = *(FTableRowStyle*)OutValue;
		Result = (FTableRowStyle)Obj->GetItemStyle();
	}
	void UComboBoxKey::SetItemStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		FTableRowStyle& Value = *(FTableRowStyle*)InValue;
		Obj->SetItemStyle(Value);
	}
	void UComboBoxKey::GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		FScrollBarStyle& Result = *(FScrollBarStyle*)OutValue;
		Result = (FScrollBarStyle)Obj->GetScrollBarStyle();
	}
	void UComboBoxKey::GetForegroundColor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		FSlateColor& Result = *(FSlateColor*)OutValue;
		Result = (FSlateColor)Obj->GetForegroundColor();
	}
	void UComboBoxKey::GetContentPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetContentPadding();
	}
	void UComboBoxKey::SetContentPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetContentPadding(Value);
	}
	void UComboBoxKey::GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMaxListHeight();
	}
	void UComboBoxKey::SetMaxListHeight_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMaxListHeight(Value);
	}
	void UComboBoxKey::GetbHasDownArrow_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsHasDownArrow();
	}
	void UComboBoxKey::SetbHasDownArrow_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetHasDownArrow(Value);
	}
	void UComboBoxKey::GetbEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsEnableGamepadNavigationMode();
	}
	void UComboBoxKey::SetbEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue)
	{
		UComboBoxKey* Obj = (UComboBoxKey*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetEnableGamepadNavigationMode(Value);
	}
	void UComboBoxKey::GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue)
	{
		const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsFocusable();
	}
	void UComboBoxKey::StaticRegisterNativesUComboBoxKey()
	{
		UClass* Class = UComboBoxKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOption", &UComboBoxKey::execAddOption },
			{ "ClearOptions", &UComboBoxKey::execClearOptions },
			{ "ClearSelection", &UComboBoxKey::execClearSelection },
			{ "GetSelectedOption", &UComboBoxKey::execGetSelectedOption },
			{ "IsOpen", &UComboBoxKey::execIsOpen },
			{ "RemoveOption", &UComboBoxKey::execRemoveOption },
			{ "SetSelectedOption", &UComboBoxKey::execSetSelectedOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboBoxKey_AddOption_Statics
	{
		struct ComboBoxKey_eventAddOption_Parms
		{
			FName Option;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventAddOption_Parms, Option), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Add an element to the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Add an element to the option list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "AddOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::ComboBoxKey_eventAddOption_Parms), Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_AddOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Remove all the elements of the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Remove all the elements of the option list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "ClearOptions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_ClearOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Clear the current selection. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Clear the current selection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "ClearSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics
	{
		struct ComboBoxKey_eventGetSelectedOption_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Get the current selected option */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Get the current selected option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "GetSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::ComboBoxKey_eventGetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_GetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics
	{
		struct ComboBoxKey_eventIsOpen_Parms
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
	void Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboBoxKey_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComboBoxKey_eventIsOpen_Parms), &Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Is the combobox menu opened. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ReturnDisplayName", "bOpen" },
		{ "ToolTip", "Is the combobox menu opened." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "IsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::ComboBoxKey_eventIsOpen_Parms), Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics
	{
		struct ComboBoxKey_eventRemoveOption_Parms
		{
			FName Option;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventRemoveOption_Parms, Option), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboBoxKey_eventRemoveOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComboBoxKey_eventRemoveOption_Parms), &Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Remove an element to the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Remove an element to the option list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "RemoveOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::ComboBoxKey_eventRemoveOption_Parms), Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_RemoveOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics
	{
		struct ComboBoxKey_eventSetSelectedOption_Parms
		{
			FName Option;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComboBoxKey_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Set the current selected option. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Set the current selected option." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "SetSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::ComboBoxKey_eventSetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxKey_SetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxKey);
	UClass* Z_Construct_UClass_UComboBoxKey_NoRegister()
	{
		return UComboBoxKey::StaticClass();
	}
	struct Z_Construct_UClass_UComboBoxKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDownArrow_MetaData[];
#endif
		static void NewProp_bHasDownArrow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDownArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGamepadNavigationMode_MetaData[];
#endif
		static void NewProp_bEnableGamepadNavigationMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGamepadNavigationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateContentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateContentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateItemWidget_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateItemWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBoxKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboBoxKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxKey_AddOption, "AddOption" }, // 1053522708
		{ &Z_Construct_UFunction_UComboBoxKey_ClearOptions, "ClearOptions" }, // 406495171
		{ &Z_Construct_UFunction_UComboBoxKey_ClearSelection, "ClearSelection" }, // 3847665890
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, "GenerateWidgetEvent__DelegateSignature" }, // 3221195293
		{ &Z_Construct_UFunction_UComboBoxKey_GetSelectedOption, "GetSelectedOption" }, // 2890622156
		{ &Z_Construct_UFunction_UComboBoxKey_IsOpen, "IsOpen" }, // 2655767427
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 2650821840
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 285569313
		{ &Z_Construct_UFunction_UComboBoxKey_RemoveOption, "RemoveOption" }, // 1595669035
		{ &Z_Construct_UFunction_UComboBoxKey_SetSelectedOption, "SetSelectedOption" }, // 235620938
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n * Use OnGenerateConentWidgetEvent to return a custom built widget.\n */" },
		{ "DisplayName", "ComboBox (Key)" },
		{ "IncludePath", "Components/ComboBoxKey.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\nUse OnGenerateConentWidgetEvent to return a custom built widget." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** . */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, SelectedOption), METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The combobox style. */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The combobox style." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetWidgetStyle_WrapperImpl, &UComboBoxKey::GetWidgetStyle_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, WidgetStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle_MetaData)) }; // 3435964422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The item row style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The item row style." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle = { "ItemStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetItemStyle_WrapperImpl, &UComboBoxKey::GetItemStyle_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, ItemStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle_MetaData)) }; // 129873581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The scroll bar style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The scroll bar style." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UComboBoxKey::GetScrollBarStyle_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The foreground color to pass through the hierarchy. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The foreground color to pass through the hierarchy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UComboBoxKey::GetForegroundColor_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetContentPadding_WrapperImpl, &UComboBoxKey::GetContentPadding_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The max height of the combobox list that opens */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The max height of the combobox list that opens" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight = { "MaxListHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetMaxListHeight_WrapperImpl, &UComboBoxKey::GetMaxListHeight_WrapperImpl, STRUCT_OFFSET(UComboBoxKey, MaxListHeight), METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/**\n\x09 * When false, the down arrow is not generated and it is up to the API consumer\n\x09 * to make their own visual hint that this is a drop down.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When false, the down arrow is not generated and it is up to the API consumer\nto make their own visual hint that this is a drop down." },
	};
#endif
	void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_SetBit(void* Obj)
	{
		((UComboBoxKey*)Obj)->bHasDownArrow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow = { "bHasDownArrow", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetbHasDownArrow_WrapperImpl, &UComboBoxKey::GetbHasDownArrow_WrapperImpl, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/**\n\x09 * When false, directional keys will change the selection. When true, ComboBox\n\x09 * must be activated and will only capture arrow input while activated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When false, directional keys will change the selection. When true, ComboBox\nmust be activated and will only capture arrow input while activated." },
	};
#endif
	void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_SetBit(void* Obj)
	{
		((UComboBoxKey*)Obj)->bEnableGamepadNavigationMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode = { "bEnableGamepadNavigationMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UComboBoxKey::SetbEnableGamepadNavigationMode_WrapperImpl, &UComboBoxKey::GetbEnableGamepadNavigationMode_WrapperImpl, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** When true, allows the combo box to receive keyboard focus */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When true, allows the combo box to receive keyboard focus" },
	};
#endif
	void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UComboBoxKey*)Obj)->bIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UComboBoxKey::GetbIsFocusable_WrapperImpl, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the content. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the widget is needed for the content." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget = { "OnGenerateContentWidget", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, OnGenerateContentWidget), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget_MetaData)) }; // 3221195293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget = { "OnGenerateItemWidget", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, OnGenerateItemWidget), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget_MetaData)) }; // 3221195293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a new item is selected in the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, OnSelectionChanged), Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged_MetaData)) }; // 285569313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the combobox is opening */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the combobox is opening" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening = { "OnOpening", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxKey, OnOpening), Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening_MetaData)) }; // 2650821840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBoxKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxKey_Statics::ClassParams = {
		&UComboBoxKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboBoxKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboBoxKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBoxKey()
	{
		if (!Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton, Z_Construct_UClass_UComboBoxKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UComboBoxKey>()
	{
		return UComboBoxKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxKey);
	UComboBoxKey::~UComboBoxKey() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UComboBoxKey, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UComboBoxKey)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UComboBoxKey, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UComboBoxKey);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxKey, UComboBoxKey::StaticClass, TEXT("UComboBoxKey"), &Z_Registration_Info_UClass_UComboBoxKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxKey), 324983702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_789319065(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
