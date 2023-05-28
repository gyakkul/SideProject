// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonTabListWidgetBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTabListWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroupBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo;
class UScriptStruct* FCommonRegisteredTabInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonRegisteredTabInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonRegisteredTabInfo>()
{
	return FCommonRegisteredTabInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TabIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TabButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContentInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about a registered tab in the tab list */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Information about a registered tab in the tab list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonRegisteredTabInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData[] = {
		{ "Comment", "/** The index of the tab in the list */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The index of the tab in the list" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex = { "TabIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, TabIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData[] = {
		{ "Comment", "/** The actual button widget that represents this tab on-screen */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The actual button widget that represents this tab on-screen" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, TabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData[] = {
		{ "Comment", "/** The actual instance of the content widget to display when this tab is selected. Can be null if a load is required. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The actual instance of the content widget to display when this tab is selected. Can be null if a load is required." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance = { "ContentInstance", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, ContentInstance), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonRegisteredTabInfo",
		sizeof(FCommonRegisteredTabInfo),
		alignof(FCommonRegisteredTabInfo),
		Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.InnerSingleton, Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics
	{
		struct CommonTabListWidgetBase_eventOnTabSelected_Parms
		{
			FName TabId;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventOnTabSelected_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::NewProp_TabId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast when a new tab is selected. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when a new tab is selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "OnTabSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::CommonTabListWidgetBase_eventOnTabSelected_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonTabListWidgetBase::FOnTabSelected_DelegateWrapper(const FMulticastScriptDelegate& OnTabSelected, FName TabId)
{
	struct CommonTabListWidgetBase_eventOnTabSelected_Parms
	{
		FName TabId;
	};
	CommonTabListWidgetBase_eventOnTabSelected_Parms Parms;
	Parms.TabId=TabId;
	OnTabSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics
	{
		struct CommonTabListWidgetBase_eventOnTabButtonCreation_Parms
		{
			FName TabId;
			UCommonButtonBase* TabButton;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventOnTabButtonCreation_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventOnTabButtonCreation_Parms, TabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::NewProp_TabButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast when a new tab is created. Allows hook ups after creation. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when a new tab is created. Allows hook ups after creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "OnTabButtonCreation__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::CommonTabListWidgetBase_eventOnTabButtonCreation_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonTabListWidgetBase::FOnTabButtonCreation_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonCreation, FName TabId, UCommonButtonBase* TabButton)
{
	struct CommonTabListWidgetBase_eventOnTabButtonCreation_Parms
	{
		FName TabId;
		UCommonButtonBase* TabButton;
	};
	CommonTabListWidgetBase_eventOnTabButtonCreation_Parms Parms;
	Parms.TabId=TabId;
	Parms.TabButton=TabButton;
	OnTabButtonCreation.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics
	{
		struct CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms
		{
			FName TabId;
			UCommonButtonBase* TabButton;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms, TabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::NewProp_TabButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast when a tab is being removed. Allows clean ups after destruction. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when a tab is being removed. Allows clean ups after destruction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "OnTabButtonRemoval__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonTabListWidgetBase::FOnTabButtonRemoval_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonRemoval, FName TabId, UCommonButtonBase* TabButton)
{
	struct CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms
	{
		FName TabId;
		UCommonButtonBase* TabButton;
	};
	CommonTabListWidgetBase_eventOnTabButtonRemoval_Parms Parms;
	Parms.TabId=TabId;
	Parms.TabButton=TabButton;
	OnTabButtonRemoval.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast when the tab list has been rebuilt (after a new tab has been inserted rather than added to the end). */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when the tab list has been rebuilt (after a new tab has been inserted rather than added to the end)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "OnTabListRebuilt__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonTabListWidgetBase::FOnTabListRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnTabListRebuilt)
{
	OnTabListRebuilt.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execHandleNextTabInputAction)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bPassthrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNextTabInputAction(Z_Param_Out_bPassthrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execHandlePreviousTabInputAction)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bPassthrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePreviousTabInputAction(Z_Param_Out_bPassthrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execHandleTabButtonSelected)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_SelectedTabButton);
		P_GET_PROPERTY(FIntProperty,Z_Param_ButtonIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTabButtonSelected(Z_Param_SelectedTabButton,Z_Param_ButtonIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execHandleTabRemoval)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_OBJECT(UCommonButtonBase,Z_Param_TabButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTabRemoval_Implementation(Z_Param_TabNameID,Z_Param_TabButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execHandleTabCreation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_OBJECT(UCommonButtonBase,Z_Param_TabButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTabCreation_Implementation(Z_Param_TabNameID,Z_Param_TabButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetTabButtonBaseByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonButtonBase**)Z_Param__Result=P_THIS->GetTabButtonBaseByID(Z_Param_TabNameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSetListeningForInput)
	{
		P_GET_UBOOL(Z_Param_bShouldListen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListeningForInput(Z_Param_bShouldListen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execDisableTabWithReason)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTabWithReason(Z_Param_TabNameID,Z_Param_Out_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSetTabInteractionEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabInteractionEnabled(Z_Param_TabNameID,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSetTabEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabEnabled(Z_Param_TabNameID,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSetTabVisibility)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_ENUM(ESlateVisibility,Z_Param_NewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabVisibility(Z_Param_TabNameID,ESlateVisibility(Z_Param_NewVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetTabIdAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTabIdAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetSelectedTabId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSelectedTabId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSelectTabByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_UBOOL(Z_Param_bSuppressClickFeedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectTabByID(Z_Param_TabNameID,Z_Param_bSuppressClickFeedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetTabCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTabCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execRemoveAllTabs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllTabs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execRemoveTab)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTab(Z_Param_TabNameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execRegisterTab)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameID);
		P_GET_OBJECT(UClass,Z_Param_ButtonWidgetType);
		P_GET_OBJECT(UWidget,Z_Param_ContentWidget);
		P_GET_PROPERTY(FIntProperty,Z_Param_TabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterTab(Z_Param_TabNameID,Z_Param_ButtonWidgetType,Z_Param_ContentWidget,Z_Param_TabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetLinkedSwitcher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonAnimatedSwitcher**)Z_Param__Result=P_THIS->GetLinkedSwitcher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execSetLinkedSwitcher)
	{
		P_GET_OBJECT(UCommonAnimatedSwitcher,Z_Param_CommonSwitcher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkedSwitcher(Z_Param_CommonSwitcher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonTabListWidgetBase::execGetActiveTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveTab();
		P_NATIVE_END;
	}
	struct CommonTabListWidgetBase_eventHandleTabCreation_Parms
	{
		FName TabNameID;
		UCommonButtonBase* TabButton;
	};
	struct CommonTabListWidgetBase_eventHandleTabRemoval_Parms
	{
		FName TabNameID;
		UCommonButtonBase* TabButton;
	};
	static FName NAME_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP = FName(TEXT("HandlePostLinkedSwitcherChanged_BP"));
	void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP),NULL);
	}
	static FName NAME_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP = FName(TEXT("HandlePreLinkedSwitcherChanged_BP"));
	void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP),NULL);
	}
	static FName NAME_UCommonTabListWidgetBase_HandleTabCreation = FName(TEXT("HandleTabCreation"));
	void UCommonTabListWidgetBase::HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton)
	{
		CommonTabListWidgetBase_eventHandleTabCreation_Parms Parms;
		Parms.TabNameID=TabNameID;
		Parms.TabButton=TabButton;
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidgetBase_HandleTabCreation),&Parms);
	}
	static FName NAME_UCommonTabListWidgetBase_HandleTabRemoval = FName(TEXT("HandleTabRemoval"));
	void UCommonTabListWidgetBase::HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton)
	{
		CommonTabListWidgetBase_eventHandleTabRemoval_Parms Parms;
		Parms.TabNameID=TabNameID;
		Parms.TabButton=TabButton;
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidgetBase_HandleTabRemoval),&Parms);
	}
	void UCommonTabListWidgetBase::StaticRegisterNativesUCommonTabListWidgetBase()
	{
		UClass* Class = UCommonTabListWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableTabWithReason", &UCommonTabListWidgetBase::execDisableTabWithReason },
			{ "GetActiveTab", &UCommonTabListWidgetBase::execGetActiveTab },
			{ "GetLinkedSwitcher", &UCommonTabListWidgetBase::execGetLinkedSwitcher },
			{ "GetSelectedTabId", &UCommonTabListWidgetBase::execGetSelectedTabId },
			{ "GetTabButtonBaseByID", &UCommonTabListWidgetBase::execGetTabButtonBaseByID },
			{ "GetTabCount", &UCommonTabListWidgetBase::execGetTabCount },
			{ "GetTabIdAtIndex", &UCommonTabListWidgetBase::execGetTabIdAtIndex },
			{ "HandleNextTabInputAction", &UCommonTabListWidgetBase::execHandleNextTabInputAction },
			{ "HandlePreviousTabInputAction", &UCommonTabListWidgetBase::execHandlePreviousTabInputAction },
			{ "HandleTabButtonSelected", &UCommonTabListWidgetBase::execHandleTabButtonSelected },
			{ "HandleTabCreation", &UCommonTabListWidgetBase::execHandleTabCreation },
			{ "HandleTabRemoval", &UCommonTabListWidgetBase::execHandleTabRemoval },
			{ "RegisterTab", &UCommonTabListWidgetBase::execRegisterTab },
			{ "RemoveAllTabs", &UCommonTabListWidgetBase::execRemoveAllTabs },
			{ "RemoveTab", &UCommonTabListWidgetBase::execRemoveTab },
			{ "SelectTabByID", &UCommonTabListWidgetBase::execSelectTabByID },
			{ "SetLinkedSwitcher", &UCommonTabListWidgetBase::execSetLinkedSwitcher },
			{ "SetListeningForInput", &UCommonTabListWidgetBase::execSetListeningForInput },
			{ "SetTabEnabled", &UCommonTabListWidgetBase::execSetTabEnabled },
			{ "SetTabInteractionEnabled", &UCommonTabListWidgetBase::execSetTabInteractionEnabled },
			{ "SetTabVisibility", &UCommonTabListWidgetBase::execSetTabVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics
	{
		struct CommonTabListWidgetBase_eventDisableTabWithReason_Parms
		{
			FName TabNameID;
			FText Reason;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventDisableTabWithReason_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventDisableTabWithReason_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Disables the tab associated with the given ID with a reason */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Disables the tab associated with the given ID with a reason" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "DisableTabWithReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::CommonTabListWidgetBase_eventDisableTabWithReason_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics
	{
		struct CommonTabListWidgetBase_eventGetActiveTab_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetActiveTab_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** @return The currently active (selected) tab */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "@return The currently active (selected) tab" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetActiveTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::CommonTabListWidgetBase_eventGetActiveTab_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics
	{
		struct CommonTabListWidgetBase_eventGetLinkedSwitcher_Parms
		{
			UCommonAnimatedSwitcher* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetLinkedSwitcher_Parms, ReturnValue), Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** @return The switcher that this tab list is associated with and manipulates */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "@return The switcher that this tab list is associated with and manipulates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetLinkedSwitcher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::CommonTabListWidgetBase_eventGetLinkedSwitcher_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics
	{
		struct CommonTabListWidgetBase_eventGetSelectedTabId_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetSelectedTabId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetSelectedTabId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::CommonTabListWidgetBase_eventGetSelectedTabId_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics
	{
		struct CommonTabListWidgetBase_eventGetTabButtonBaseByID_Parms
		{
			FName TabNameID;
			UCommonButtonBase* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetTabButtonBaseByID_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetTabButtonBaseByID_Parms, ReturnValue), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Returns the tab button matching the ID, if found */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Returns the tab button matching the ID, if found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetTabButtonBaseByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::CommonTabListWidgetBase_eventGetTabButtonBaseByID_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics
	{
		struct CommonTabListWidgetBase_eventGetTabCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetTabCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetTabCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::CommonTabListWidgetBase_eventGetTabCount_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics
	{
		struct CommonTabListWidgetBase_eventGetTabIdAtIndex_Parms
		{
			int32 Index;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetTabIdAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventGetTabIdAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "GetTabIdAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::CommonTabListWidgetBase_eventGetTabIdAtIndex_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics
	{
		struct CommonTabListWidgetBase_eventHandleNextTabInputAction_Parms
		{
			bool bPassthrough;
		};
		static void NewProp_bPassthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassthrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::NewProp_bPassthrough_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventHandleNextTabInputAction_Parms*)Obj)->bPassthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::NewProp_bPassthrough = { "bPassthrough", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventHandleNextTabInputAction_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::NewProp_bPassthrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::NewProp_bPassthrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandleNextTabInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::CommonTabListWidgetBase_eventHandleNextTabInputAction_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandlePostLinkedSwitcherChanged_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandlePreLinkedSwitcherChanged_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics
	{
		struct CommonTabListWidgetBase_eventHandlePreviousTabInputAction_Parms
		{
			bool bPassthrough;
		};
		static void NewProp_bPassthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassthrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::NewProp_bPassthrough_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventHandlePreviousTabInputAction_Parms*)Obj)->bPassthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::NewProp_bPassthrough = { "bPassthrough", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventHandlePreviousTabInputAction_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::NewProp_bPassthrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::NewProp_bPassthrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandlePreviousTabInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::CommonTabListWidgetBase_eventHandlePreviousTabInputAction_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics
	{
		struct CommonTabListWidgetBase_eventHandleTabButtonSelected_Parms
		{
			UCommonButtonBase* SelectedTabButton;
			int32 ButtonIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTabButton;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton = { "SelectedTabButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabButtonSelected_Parms, SelectedTabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_ButtonIndex = { "ButtonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabButtonSelected_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::NewProp_ButtonIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandleTabButtonSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::CommonTabListWidgetBase_eventHandleTabButtonSelected_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabCreation_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabCreation_Parms, TabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::NewProp_TabButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandleTabCreation", nullptr, nullptr, sizeof(CommonTabListWidgetBase_eventHandleTabCreation_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabRemoval_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventHandleTabRemoval_Parms, TabButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::NewProp_TabButton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "HandleTabRemoval", nullptr, nullptr, sizeof(CommonTabListWidgetBase_eventHandleTabRemoval_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics
	{
		struct CommonTabListWidgetBase_eventRegisterTab_Parms
		{
			FName TabNameID;
			TSubclassOf<UCommonButtonBase>  ButtonWidgetType;
			UWidget* ContentWidget;
			int32 TabIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TabIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventRegisterTab_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ButtonWidgetType = { "ButtonWidgetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventRegisterTab_Parms, ButtonWidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ContentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ContentWidget = { "ContentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventRegisterTab_Parms, ContentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ContentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ContentWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabIndex = { "TabIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventRegisterTab_Parms, TabIndex), METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabIndex_MetaData)) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventRegisterTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventRegisterTab_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ButtonWidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ContentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_TabIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/*INDEX_NONE*/" },
		{ "CPP_Default_TabIndex", "-1" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "RegisterTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::CommonTabListWidgetBase_eventRegisterTab_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "RemoveAllTabs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics
	{
		struct CommonTabListWidgetBase_eventRemoveTab_Parms
		{
			FName TabNameID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventRemoveTab_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventRemoveTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventRemoveTab_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "RemoveTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::CommonTabListWidgetBase_eventRemoveTab_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics
	{
		struct CommonTabListWidgetBase_eventSelectTabByID_Parms
		{
			FName TabNameID;
			bool bSuppressClickFeedback;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static void NewProp_bSuppressClickFeedback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressClickFeedback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSelectTabByID_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_bSuppressClickFeedback_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventSelectTabByID_Parms*)Obj)->bSuppressClickFeedback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_bSuppressClickFeedback = { "bSuppressClickFeedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventSelectTabByID_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_bSuppressClickFeedback_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventSelectTabByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventSelectTabByID_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_bSuppressClickFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** \n\x09 * Selects the tab registered under the provided name ID\n\x09 * @param TabNameID The name ID for the tab given when registered\n\x09 */" },
		{ "CPP_Default_bSuppressClickFeedback", "false" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Selects the tab registered under the provided name ID\n@param TabNameID The name ID for the tab given when registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SelectTabByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::CommonTabListWidgetBase_eventSelectTabByID_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics
	{
		struct CommonTabListWidgetBase_eventSetLinkedSwitcher_Parms
		{
			UCommonAnimatedSwitcher* CommonSwitcher;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonSwitcher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher = { "CommonSwitcher", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSetLinkedSwitcher_Parms, CommonSwitcher), Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/**\n\x09 * Establishes the activatable widget switcher instance that this tab list should interact with\n\x09 * @param CommonSwitcher The switcher that this tab list should be associated with and manipulate\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Establishes the activatable widget switcher instance that this tab list should interact with\n@param CommonSwitcher The switcher that this tab list should be associated with and manipulate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SetLinkedSwitcher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::CommonTabListWidgetBase_eventSetLinkedSwitcher_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics
	{
		struct CommonTabListWidgetBase_eventSetListeningForInput_Parms
		{
			bool bShouldListen;
		};
		static void NewProp_bShouldListen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldListen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::NewProp_bShouldListen_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventSetListeningForInput_Parms*)Obj)->bShouldListen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::NewProp_bShouldListen = { "bShouldListen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventSetListeningForInput_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::NewProp_bShouldListen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::NewProp_bShouldListen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SetListeningForInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::CommonTabListWidgetBase_eventSetListeningForInput_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics
	{
		struct CommonTabListWidgetBase_eventSetTabEnabled_Parms
		{
			FName TabNameID;
			bool bEnable;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSetTabEnabled_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventSetTabEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Sets whether the tab associated with the given ID is enabled/disabled */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Sets whether the tab associated with the given ID is enabled/disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SetTabEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::CommonTabListWidgetBase_eventSetTabEnabled_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics
	{
		struct CommonTabListWidgetBase_eventSetTabInteractionEnabled_Parms
		{
			FName TabNameID;
			bool bEnable;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSetTabInteractionEnabled_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((CommonTabListWidgetBase_eventSetTabInteractionEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonTabListWidgetBase_eventSetTabInteractionEnabled_Parms), &Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Sets whether the tab associated with the given ID is interactable */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Sets whether the tab associated with the given ID is interactable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SetTabInteractionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::CommonTabListWidgetBase_eventSetTabInteractionEnabled_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics
	{
		struct CommonTabListWidgetBase_eventSetTabVisibility_Parms
		{
			FName TabNameID;
			ESlateVisibility NewVisibility;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_TabNameID = { "TabNameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSetTabVisibility_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_NewVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonTabListWidgetBase_eventSetTabVisibility_Parms, NewVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_TabNameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_NewVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::NewProp_NewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Sets the visibility of the tab associated with the given ID  */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Sets the visibility of the tab associated with the given ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidgetBase, nullptr, "SetTabVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::CommonTabListWidgetBase_eventSetTabVisibility_Parms), Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTabListWidgetBase);
	UClass* Z_Construct_UClass_UCommonTabListWidgetBase_NoRegister()
	{
		return UCommonTabListWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTabListWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabButtonCreation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabButtonCreation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabButtonRemoval_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabButtonRemoval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabListRebuilt_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabListRebuilt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextTabInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextTabInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTabInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTabInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextTabEnhancedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NextTabEnhancedInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTabEnhancedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousTabEnhancedInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoListenForInput_MetaData[];
#endif
		static void NewProp_bAutoListenForInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoListenForInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferRebuildingTabList_MetaData[];
#endif
		static void NewProp_bDeferRebuildingTabList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferRebuildingTabList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedSwitcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButtonGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TabButtonGroup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredTabsByID_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredTabsByID_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTabsByID_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredTabsByID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTabListWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTabListWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_DisableTabWithReason, "DisableTabWithReason" }, // 3797071660
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetActiveTab, "GetActiveTab" }, // 2247698949
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetLinkedSwitcher, "GetLinkedSwitcher" }, // 2266308905
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetSelectedTabId, "GetSelectedTabId" }, // 1190715788
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabButtonBaseByID, "GetTabButtonBaseByID" }, // 1425779272
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabCount, "GetTabCount" }, // 3757839944
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_GetTabIdAtIndex, "GetTabIdAtIndex" }, // 2922837627
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandleNextTabInputAction, "HandleNextTabInputAction" }, // 591272794
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP, "HandlePostLinkedSwitcherChanged_BP" }, // 3431870188
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP, "HandlePreLinkedSwitcherChanged_BP" }, // 3424459103
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandlePreviousTabInputAction, "HandlePreviousTabInputAction" }, // 152537222
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabButtonSelected, "HandleTabButtonSelected" }, // 1083909481
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabCreation, "HandleTabCreation" }, // 4075372553
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_HandleTabRemoval, "HandleTabRemoval" }, // 3153315216
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature, "OnTabButtonCreation__DelegateSignature" }, // 1841636989
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature, "OnTabButtonRemoval__DelegateSignature" }, // 342376127
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature, "OnTabListRebuilt__DelegateSignature" }, // 1480094122
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature, "OnTabSelected__DelegateSignature" }, // 3800478376
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_RegisterTab, "RegisterTab" }, // 761999228
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveAllTabs, "RemoveAllTabs" }, // 1891377514
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_RemoveTab, "RemoveTab" }, // 513043155
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SelectTabByID, "SelectTabByID" }, // 693591982
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SetLinkedSwitcher, "SetLinkedSwitcher" }, // 3587670654
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SetListeningForInput, "SetListeningForInput" }, // 3564683946
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabEnabled, "SetTabEnabled" }, // 3878904403
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabInteractionEnabled, "SetTabInteractionEnabled" }, // 295327485
		{ &Z_Construct_UFunction_UCommonTabListWidgetBase_SetTabVisibility, "SetTabVisibility" }, // 1685187709
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/** Base class for a list of selectable tabs that correspondingly activate and display an arbitrary widget in a linked switcher */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonTabListWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Base class for a list of selectable tabs that correspondingly activate and display an arbitrary widget in a linked switcher" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabSelected_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Broadcasts when a new tab is selected. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when a new tab is selected." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabSelected = { "OnTabSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, OnTabSelected), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabSelected_MetaData)) }; // 3800478376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonCreation_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Broadcasts when a new tab is created. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when a new tab is created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonCreation = { "OnTabButtonCreation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, OnTabButtonCreation), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonCreation_MetaData)) }; // 1841636989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonRemoval_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Broadcasts when a new tab is created. */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when a new tab is created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonRemoval = { "OnTabButtonRemoval", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, OnTabButtonRemoval), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonRemoval_MetaData)) }; // 342376127
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabListRebuilt_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Broadcasts when the tab list has been rebuilt (after a new tab has been inserted rather than added to the end). */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when the tab list has been rebuilt (after a new tab has been inserted rather than added to the end)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabListRebuilt = { "OnTabListRebuilt", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, OnTabListRebuilt), Z_Construct_UDelegateFunction_UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabListRebuilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabListRebuilt_MetaData)) }; // 1480094122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabInputActionData_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** The input action to listen for causing the next tab to be selected */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
		{ "ToolTip", "The input action to listen for causing the next tab to be selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabInputActionData = { "NextTabInputActionData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, NextTabInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabInputActionData_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabInputActionData_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** The input action to listen for causing the previous tab to be selected */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
		{ "ToolTip", "The input action to listen for causing the previous tab to be selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabInputActionData = { "PreviousTabInputActionData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, PreviousTabInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabInputActionData_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabEnhancedInputAction_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** The input action to listen for causing the next tab to be selected */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The input action to listen for causing the next tab to be selected" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabEnhancedInputAction = { "NextTabEnhancedInputAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, NextTabEnhancedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabEnhancedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabEnhancedInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabEnhancedInputAction_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** The input action to listen for causing the previous tab to be selected */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The input action to listen for causing the previous tab to be selected" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabEnhancedInputAction = { "PreviousTabEnhancedInputAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, PreviousTabEnhancedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabEnhancedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabEnhancedInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/** Whether to register to handle tab list input immediately upon construction */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Whether to register to handle tab list input immediately upon construction" },
	};
#endif
	void Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput_SetBit(void* Obj)
	{
		((UCommonTabListWidgetBase*)Obj)->bAutoListenForInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput = { "bAutoListenForInput", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTabListWidgetBase), &Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList_MetaData[] = {
		{ "Category", "TabList" },
		{ "Comment", "/**\n\x09* Whether to defer until next tick rebuilding tab list when inserting new tab (rather than adding to the end).\n\x09* Useful if inserting multiple tabs in the same tick as the tab list will only be rebuilt once.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Whether to defer until next tick rebuilding tab list when inserting new tab (rather than adding to the end).\nUseful if inserting multiple tabs in the same tick as the tab list will only be rebuilt once." },
	};
#endif
	void Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList_SetBit(void* Obj)
	{
		((UCommonTabListWidgetBase*)Obj)->bDeferRebuildingTabList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList = { "bDeferRebuildingTabList", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonTabListWidgetBase), &Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_LinkedSwitcher_MetaData[] = {
		{ "Comment", "/** The activatable widget switcher that this tab list is associated with and manipulates */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The activatable widget switcher that this tab list is associated with and manipulates" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_LinkedSwitcher = { "LinkedSwitcher", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, LinkedSwitcher), Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_LinkedSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_LinkedSwitcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_TabButtonGroup_MetaData[] = {
		{ "Comment", "/** The button group that manages all the created tab buttons */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "The button group that manages all the created tab buttons" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_TabButtonGroup = { "TabButtonGroup", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, TabButtonGroup), Z_Construct_UClass_UCommonButtonGroupBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_TabButtonGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_TabButtonGroup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_ValueProp = { "RegisteredTabsByID", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCommonRegisteredTabInfo, METADATA_PARAMS(nullptr, 0) }; // 1626903441
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_Key_KeyProp = { "RegisteredTabsByID_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_MetaData[] = {
		{ "Comment", "/** Info about each of the currently registered tabs organized by a given registration name ID */" },
		{ "ModuleRelativePath", "Public/CommonTabListWidgetBase.h" },
		{ "ToolTip", "Info about each of the currently registered tabs organized by a given registration name ID" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID = { "RegisteredTabsByID", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonTabListWidgetBase, RegisteredTabsByID), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_MetaData)) }; // 1626903441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTabListWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabButtonRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_OnTabListRebuilt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_NextTabEnhancedInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_PreviousTabEnhancedInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bAutoListenForInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_bDeferRebuildingTabList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_LinkedSwitcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_TabButtonGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidgetBase_Statics::NewProp_RegisteredTabsByID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTabListWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTabListWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTabListWidgetBase_Statics::ClassParams = {
		&UCommonTabListWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonTabListWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTabListWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UCommonTabListWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTabListWidgetBase.OuterSingleton, Z_Construct_UClass_UCommonTabListWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTabListWidgetBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTabListWidgetBase>()
	{
		return UCommonTabListWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTabListWidgetBase);
	UCommonTabListWidgetBase::~UCommonTabListWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ScriptStructInfo[] = {
		{ FCommonRegisteredTabInfo::StaticStruct, Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewStructOps, TEXT("CommonRegisteredTabInfo"), &Z_Registration_Info_UScriptStruct_CommonRegisteredTabInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonRegisteredTabInfo), 1626903441U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonTabListWidgetBase, UCommonTabListWidgetBase::StaticClass, TEXT("UCommonTabListWidgetBase"), &Z_Registration_Info_UClass_UCommonTabListWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTabListWidgetBase), 3138102756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_1895461397(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
