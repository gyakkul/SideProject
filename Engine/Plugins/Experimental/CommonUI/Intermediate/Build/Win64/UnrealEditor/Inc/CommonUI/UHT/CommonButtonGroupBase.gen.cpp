// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/CommonButtonGroupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonGroupBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroupBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroupBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms
		{
			UCommonButtonBase* AssociatedButton;
			int32 ButtonIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedButton;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_AssociatedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_AssociatedButton = { "AssociatedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms, AssociatedButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_AssociatedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_AssociatedButton_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_ButtonIndex = { "ButtonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_AssociatedButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::NewProp_ButtonIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "SimpleButtonBaseGroupDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::_Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSimpleButtonBaseGroupDelegate_DelegateWrapper(const FMulticastScriptDelegate& SimpleButtonBaseGroupDelegate, UCommonButtonBase* AssociatedButton, int32 ButtonIndex)
{
	struct _Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms
	{
		UCommonButtonBase* AssociatedButton;
		int32 ButtonIndex;
	};
	_Script_CommonUI_eventSimpleButtonBaseGroupDelegate_Parms Parms;
	Parms.AssociatedButton=AssociatedButton;
	Parms.ButtonIndex=ButtonIndex;
	SimpleButtonBaseGroupDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnSelectionCleared__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSelectionCleared_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionCleared)
{
	OnSelectionCleared.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execOnButtonBaseUnhovered)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_BaseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonBaseUnhovered(Z_Param_BaseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execOnButtonBaseHovered)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_BaseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonBaseHovered(Z_Param_BaseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execOnHandleButtonBaseDoubleClicked)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_BaseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHandleButtonBaseDoubleClicked(Z_Param_BaseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execOnHandleButtonBaseClicked)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_BaseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHandleButtonBaseClicked(Z_Param_BaseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execOnSelectionStateChangedBase)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_BaseButton);
		P_GET_UBOOL(Z_Param_bIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectionStateChangedBase(Z_Param_BaseButton,Z_Param_bIsSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execGetButtonCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetButtonCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execHasAnyButtons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyButtons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execGetSelectedButtonBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonButtonBase**)Z_Param__Result=P_THIS->GetSelectedButtonBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execGetButtonBaseAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonButtonBase**)Z_Param__Result=P_THIS->GetButtonBaseAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execFindButtonIndex)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_ButtonToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindButtonIndex(Z_Param_ButtonToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execGetHoveredButtonIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHoveredButtonIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execGetSelectedButtonIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedButtonIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execSelectButtonAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ButtonIndex);
		P_GET_UBOOL(Z_Param_bAllowSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectButtonAtIndex(Z_Param_ButtonIndex,Z_Param_bAllowSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execSelectPreviousButton)
	{
		P_GET_UBOOL(Z_Param_bAllowWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectPreviousButton(Z_Param_bAllowWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execSelectNextButton)
	{
		P_GET_UBOOL(Z_Param_bAllowWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNextButton(Z_Param_bAllowWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execDeselectAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonGroupBase::execSetSelectionRequired)
	{
		P_GET_UBOOL(Z_Param_bRequireSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectionRequired(Z_Param_bRequireSelection);
		P_NATIVE_END;
	}
	void UCommonButtonGroupBase::StaticRegisterNativesUCommonButtonGroupBase()
	{
		UClass* Class = UCommonButtonGroupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectAll", &UCommonButtonGroupBase::execDeselectAll },
			{ "FindButtonIndex", &UCommonButtonGroupBase::execFindButtonIndex },
			{ "GetButtonBaseAtIndex", &UCommonButtonGroupBase::execGetButtonBaseAtIndex },
			{ "GetButtonCount", &UCommonButtonGroupBase::execGetButtonCount },
			{ "GetHoveredButtonIndex", &UCommonButtonGroupBase::execGetHoveredButtonIndex },
			{ "GetSelectedButtonBase", &UCommonButtonGroupBase::execGetSelectedButtonBase },
			{ "GetSelectedButtonIndex", &UCommonButtonGroupBase::execGetSelectedButtonIndex },
			{ "HasAnyButtons", &UCommonButtonGroupBase::execHasAnyButtons },
			{ "OnButtonBaseHovered", &UCommonButtonGroupBase::execOnButtonBaseHovered },
			{ "OnButtonBaseUnhovered", &UCommonButtonGroupBase::execOnButtonBaseUnhovered },
			{ "OnHandleButtonBaseClicked", &UCommonButtonGroupBase::execOnHandleButtonBaseClicked },
			{ "OnHandleButtonBaseDoubleClicked", &UCommonButtonGroupBase::execOnHandleButtonBaseDoubleClicked },
			{ "OnSelectionStateChangedBase", &UCommonButtonGroupBase::execOnSelectionStateChangedBase },
			{ "SelectButtonAtIndex", &UCommonButtonGroupBase::execSelectButtonAtIndex },
			{ "SelectNextButton", &UCommonButtonGroupBase::execSelectNextButton },
			{ "SelectPreviousButton", &UCommonButtonGroupBase::execSelectPreviousButton },
			{ "SetSelectionRequired", &UCommonButtonGroupBase::execSetSelectionRequired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/** Deselects all buttons in the group. */" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Deselects all buttons in the group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "DeselectAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics
	{
		struct CommonButtonGroupBase_eventFindButtonIndex_Parms
		{
			const UCommonButtonBase* ButtonToFind;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonToFind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonToFind;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ButtonToFind = { "ButtonToFind", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventFindButtonIndex_Parms, ButtonToFind), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventFindButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ButtonToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/**\n\x09 * Find the button index of the specified button, if possible\n\x09 * @param ButtonToFind\x09""Button to find the index of\n\x09 * @return Index of the button in the group. INDEX_NONE if not found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Find the button index of the specified button, if possible\n@param ButtonToFind  Button to find the index of\n@return Index of the button in the group. INDEX_NONE if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "FindButtonIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::CommonButtonGroupBase_eventFindButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics
	{
		struct CommonButtonGroupBase_eventGetButtonBaseAtIndex_Parms
		{
			int32 Index;
			UCommonButtonBase* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetButtonBaseAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetButtonBaseAtIndex_Parms, ReturnValue), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "GetButtonBaseAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::CommonButtonGroupBase_eventGetButtonBaseAtIndex_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics
	{
		struct CommonButtonGroupBase_eventGetButtonCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetButtonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "GetButtonCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::CommonButtonGroupBase_eventGetButtonCount_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics
	{
		struct CommonButtonGroupBase_eventGetHoveredButtonIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetHoveredButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/**\n\x09 * Get the index of the currently hovered button, if any.\n\x09 * @param The index of the currently hovered button in the group, or -1 if there is no hovered button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Get the index of the currently hovered button, if any.\n@param The index of the currently hovered button in the group, or -1 if there is no hovered button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "GetHoveredButtonIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::CommonButtonGroupBase_eventGetHoveredButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics
	{
		struct CommonButtonGroupBase_eventGetSelectedButtonBase_Parms
		{
			UCommonButtonBase* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetSelectedButtonBase_Parms, ReturnValue), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "GetSelectedButtonBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::CommonButtonGroupBase_eventGetSelectedButtonBase_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics
	{
		struct CommonButtonGroupBase_eventGetSelectedButtonIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventGetSelectedButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/**\n\x09 * Get the index of the currently selected button, if any.\n\x09 * @param The index of the currently selected button in the group, or -1 if there is no selected button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Get the index of the currently selected button, if any.\n@param The index of the currently selected button in the group, or -1 if there is no selected button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "GetSelectedButtonIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::CommonButtonGroupBase_eventGetSelectedButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics
	{
		struct CommonButtonGroupBase_eventHasAnyButtons_Parms
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
	void Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventHasAnyButtons_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventHasAnyButtons_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "HasAnyButtons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::CommonButtonGroupBase_eventHasAnyButtons_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics
	{
		struct CommonButtonGroupBase_eventOnButtonBaseHovered_Parms
		{
			UCommonButtonBase* BaseButton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::NewProp_BaseButton = { "BaseButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventOnButtonBaseHovered_Parms, BaseButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::NewProp_BaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::NewProp_BaseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "OnButtonBaseHovered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::CommonButtonGroupBase_eventOnButtonBaseHovered_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics
	{
		struct CommonButtonGroupBase_eventOnButtonBaseUnhovered_Parms
		{
			UCommonButtonBase* BaseButton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::NewProp_BaseButton = { "BaseButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventOnButtonBaseUnhovered_Parms, BaseButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::NewProp_BaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::NewProp_BaseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "OnButtonBaseUnhovered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::CommonButtonGroupBase_eventOnButtonBaseUnhovered_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics
	{
		struct CommonButtonGroupBase_eventOnHandleButtonBaseClicked_Parms
		{
			UCommonButtonBase* BaseButton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::NewProp_BaseButton = { "BaseButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventOnHandleButtonBaseClicked_Parms, BaseButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::NewProp_BaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::NewProp_BaseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "OnHandleButtonBaseClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::CommonButtonGroupBase_eventOnHandleButtonBaseClicked_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics
	{
		struct CommonButtonGroupBase_eventOnHandleButtonBaseDoubleClicked_Parms
		{
			UCommonButtonBase* BaseButton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::NewProp_BaseButton = { "BaseButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventOnHandleButtonBaseDoubleClicked_Parms, BaseButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::NewProp_BaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::NewProp_BaseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "OnHandleButtonBaseDoubleClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::CommonButtonGroupBase_eventOnHandleButtonBaseDoubleClicked_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics
	{
		struct CommonButtonGroupBase_eventOnSelectionStateChangedBase_Parms
		{
			UCommonButtonBase* BaseButton;
			bool bIsSelected;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_BaseButton = { "BaseButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventOnSelectionStateChangedBase_Parms, BaseButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_BaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_BaseButton_MetaData)) };
	void Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventOnSelectionStateChangedBase_Parms*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventOnSelectionStateChangedBase_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_BaseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::NewProp_bIsSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "OnSelectionStateChangedBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::CommonButtonGroupBase_eventOnSelectionStateChangedBase_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics
	{
		struct CommonButtonGroupBase_eventSelectButtonAtIndex_Parms
		{
			int32 ButtonIndex;
			bool bAllowSound;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSound_MetaData[];
#endif
		static void NewProp_bAllowSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_ButtonIndex = { "ButtonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonGroupBase_eventSelectButtonAtIndex_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventSelectButtonAtIndex_Parms*)Obj)->bAllowSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound = { "bAllowSound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventSelectButtonAtIndex_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_ButtonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::NewProp_bAllowSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/**\n\x09 * Selects a button at a specific index in the group. Clears all selection if given an invalid index.\n\x09 * @param ButtonIndex The index of the button in the group to select\n\x09 * @param bAllowSound Whether the selected button should play its click sound\n\x09 */" },
		{ "CPP_Default_bAllowSound", "true" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Selects a button at a specific index in the group. Clears all selection if given an invalid index.\n@param ButtonIndex The index of the button in the group to select\n@param bAllowSound Whether the selected button should play its click sound" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "SelectButtonAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::CommonButtonGroupBase_eventSelectButtonAtIndex_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics
	{
		struct CommonButtonGroupBase_eventSelectNextButton_Parms
		{
			bool bAllowWrap;
		};
		static void NewProp_bAllowWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::NewProp_bAllowWrap_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventSelectNextButton_Parms*)Obj)->bAllowWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::NewProp_bAllowWrap = { "bAllowWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventSelectNextButton_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::NewProp_bAllowWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::NewProp_bAllowWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/** \n\x09 * Selects the next button in the group \n\x09 * @param bAllowWrap Whether to wrap to the first button if the last one is currently selected\n\x09 */" },
		{ "CPP_Default_bAllowWrap", "true" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Selects the next button in the group\n@param bAllowWrap Whether to wrap to the first button if the last one is currently selected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "SelectNextButton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::CommonButtonGroupBase_eventSelectNextButton_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics
	{
		struct CommonButtonGroupBase_eventSelectPreviousButton_Parms
		{
			bool bAllowWrap;
		};
		static void NewProp_bAllowWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::NewProp_bAllowWrap_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventSelectPreviousButton_Parms*)Obj)->bAllowWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::NewProp_bAllowWrap = { "bAllowWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventSelectPreviousButton_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::NewProp_bAllowWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::NewProp_bAllowWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/** \n\x09 * Selects the previous button in the group \n\x09 * @param bAllowWrap Whether to wrap to the first button if the last one is currently selected\n\x09 */" },
		{ "CPP_Default_bAllowWrap", "true" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Selects the previous button in the group\n@param bAllowWrap Whether to wrap to the first button if the last one is currently selected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "SelectPreviousButton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::CommonButtonGroupBase_eventSelectPreviousButton_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics
	{
		struct CommonButtonGroupBase_eventSetSelectionRequired_Parms
		{
			bool bRequireSelection;
		};
		static void NewProp_bRequireSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::NewProp_bRequireSelection_SetBit(void* Obj)
	{
		((CommonButtonGroupBase_eventSetSelectionRequired_Parms*)Obj)->bRequireSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::NewProp_bRequireSelection = { "bRequireSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonGroupBase_eventSetSelectionRequired_Parms), &Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::NewProp_bRequireSelection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::NewProp_bRequireSelection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/** \n\x09 * Sets whether the group should always have a button selected.\n\x09 * @param bRequireSelection True to force the group to always have a button selected.\n\x09 * If true and nothing is selected, will select the first entry. If empty, will select the first button added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Sets whether the group should always have a button selected.\n@param bRequireSelection True to force the group to always have a button selected.\nIf true and nothing is selected, will select the first entry. If empty, will select the first button added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroupBase, nullptr, "SetSelectionRequired", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::CommonButtonGroupBase_eventSetSelectionRequired_Parms), Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonButtonGroupBase);
	UClass* Z_Construct_UClass_UCommonButtonGroupBase_NoRegister()
	{
		return UCommonButtonGroupBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonGroupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedButtonBaseChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedButtonBaseChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHoveredButtonBaseChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredButtonBaseChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseDoubleClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseDoubleClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionCleared_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionCleared;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectionRequired_MetaData[];
#endif
		static void NewProp_bSelectionRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectionRequired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonGroupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonWidgetGroupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonButtonGroupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_DeselectAll, "DeselectAll" }, // 2196182783
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_FindButtonIndex, "FindButtonIndex" }, // 2221637335
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonBaseAtIndex, "GetButtonBaseAtIndex" }, // 3683527103
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_GetButtonCount, "GetButtonCount" }, // 1505058271
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_GetHoveredButtonIndex, "GetHoveredButtonIndex" }, // 2075364336
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonBase, "GetSelectedButtonBase" }, // 1910333162
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_GetSelectedButtonIndex, "GetSelectedButtonIndex" }, // 2818040328
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_HasAnyButtons, "HasAnyButtons" }, // 4039856750
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseHovered, "OnButtonBaseHovered" }, // 1342560286
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_OnButtonBaseUnhovered, "OnButtonBaseUnhovered" }, // 4013766952
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseClicked, "OnHandleButtonBaseClicked" }, // 3685751461
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked, "OnHandleButtonBaseDoubleClicked" }, // 785230104
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_OnSelectionStateChangedBase, "OnSelectionStateChangedBase" }, // 1014348932
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_SelectButtonAtIndex, "SelectButtonAtIndex" }, // 4259503073
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_SelectNextButton, "SelectNextButton" }, // 3581527454
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_SelectPreviousButton, "SelectPreviousButton" }, // 3704026600
		{ &Z_Construct_UFunction_UCommonButtonGroupBase_SetSelectionRequired, "SetSelectionRequired" }, // 3503580410
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Manages an arbitrary collection of CommonButton widgets.\n * Ensures that no more (and optionally, no less) than one button in the group is selected at a time\n */" },
		{ "IncludePath", "Groups/CommonButtonGroupBase.h" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "Manages an arbitrary collection of CommonButton widgets.\nEnsures that no more (and optionally, no less) than one button in the group is selected at a time" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectedButtonBaseChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectedButtonBaseChanged = { "OnSelectedButtonBaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonGroupBase, OnSelectedButtonBaseChanged), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectedButtonBaseChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectedButtonBaseChanged_MetaData)) }; // 1911640990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnHoveredButtonBaseChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnHoveredButtonBaseChanged = { "OnHoveredButtonBaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonGroupBase, OnHoveredButtonBaseChanged), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnHoveredButtonBaseChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnHoveredButtonBaseChanged_MetaData)) }; // 1911640990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseClicked = { "OnButtonBaseClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonGroupBase, OnButtonBaseClicked), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseClicked_MetaData)) }; // 1911640990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseDoubleClicked = { "OnButtonBaseDoubleClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonGroupBase, OnButtonBaseDoubleClicked), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonBaseGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData)) }; // 1911640990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectionCleared_MetaData[] = {
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectionCleared = { "OnSelectionCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonGroupBase, OnSelectionCleared), Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectionCleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectionCleared_MetaData)) }; // 1302205484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired_MetaData[] = {
		{ "Category", "BaseButtonGroup" },
		{ "Comment", "/** If true, the group will force that a button be selected at all times */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Groups/CommonButtonGroupBase.h" },
		{ "ToolTip", "If true, the group will force that a button be selected at all times" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired_SetBit(void* Obj)
	{
		((UCommonButtonGroupBase*)Obj)->bSelectionRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired = { "bSelectionRequired", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonGroupBase), &Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonGroupBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectedButtonBaseChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnHoveredButtonBaseChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnButtonBaseDoubleClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_OnSelectionCleared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroupBase_Statics::NewProp_bSelectionRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonGroupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonGroupBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonGroupBase_Statics::ClassParams = {
		&UCommonButtonGroupBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonButtonGroupBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonGroupBase()
	{
		if (!Z_Registration_Info_UClass_UCommonButtonGroupBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonButtonGroupBase.OuterSingleton, Z_Construct_UClass_UCommonButtonGroupBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonButtonGroupBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonButtonGroupBase>()
	{
		return UCommonButtonGroupBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonGroupBase);
	UCommonButtonGroupBase::~UCommonButtonGroupBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonButtonGroupBase, UCommonButtonGroupBase::StaticClass, TEXT("UCommonButtonGroupBase"), &Z_Registration_Info_UClass_UCommonButtonGroupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonButtonGroupBase), 4067326267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_632972173(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
