// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TreeView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms
		{
			UObject* Item;
			TArray<UObject*> Children;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnGetItemChildrenDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::_Script_UMG_eventOnGetItemChildrenDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetItemChildrenDynamic_DelegateWrapper(const FScriptDelegate& OnGetItemChildrenDynamic, UObject* Item, TArray<UObject*>& Children)
{
	struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms
	{
		UObject* Item;
		TArray<UObject*> Children;
	};
	_Script_UMG_eventOnGetItemChildrenDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.Children=Children;
	OnGetItemChildrenDynamic.ProcessDelegate<UObject>(&Parms);
	Children=Parms.Children;
}
	struct Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsExpanded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnItemExpansionChangedDynamic_Parms*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnItemExpansionChangedDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemExpansionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemExpansionChangedDynamic, UObject* Item, bool bIsExpanded)
{
	struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsExpanded;
	};
	_Script_UMG_eventOnItemExpansionChangedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.bIsExpanded=bIsExpanded ? true : false;
	OnItemExpansionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTreeView::execCollapseAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollapseAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeView::execExpandAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpandAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeView::execSetItemExpansion)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_GET_UBOOL(Z_Param_bExpandItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemExpansion(Z_Param_Item,Z_Param_bExpandItem);
		P_NATIVE_END;
	}
	void UTreeView::StaticRegisterNativesUTreeView()
	{
		UClass* Class = UTreeView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollapseAll", &UTreeView::execCollapseAll },
			{ "ExpandAll", &UTreeView::execExpandAll },
			{ "SetItemExpansion", &UTreeView::execSetItemExpansion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeView_CollapseAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Collapses all currently expanded items */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Collapses all currently expanded items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "CollapseAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_CollapseAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_ExpandAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Expands all items with children */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Expands all items with children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "ExpandAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_ExpandAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics
	{
		struct TreeView_eventSetItemExpansion_Parms
		{
			UObject* Item;
			bool bExpandItem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bExpandItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TreeView_eventSetItemExpansion_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit(void* Obj)
	{
		((TreeView_eventSetItemExpansion_Parms*)Obj)->bExpandItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem = { "bExpandItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TreeView_eventSetItemExpansion_Parms), &Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Attempts to expand/collapse the given item (only relevant if the item has children) */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Attempts to expand/collapse the given item (only relevant if the item has children)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "SetItemExpansion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::TreeView_eventSetItemExpansion_Parms), Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_SetItemExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTreeView);
	UClass* Z_Construct_UClass_UTreeView_NoRegister()
	{
		return UTreeView::StaticClass();
	}
	struct Z_Construct_UClass_UTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnGetItemChildren_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_BP_OnGetItemChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemExpansionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemExpansionChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeView_CollapseAll, "CollapseAll" }, // 1384877559
		{ &Z_Construct_UFunction_UTreeView_ExpandAll, "ExpandAll" }, // 3329864211
		{ &Z_Construct_UFunction_UTreeView_SetItemExpansion, "SetItemExpansion" }, // 3318092132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Similar to ListView, but can display a hierarchical tree of elements.\n * The base items source for the tree identifies the root items, each of which can have n associated child items.\n * There is no hard limit to the nesting - child items can have children and so on\n *\n * To make a widget usable as an entry in a TreeView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "IncludePath", "Components/TreeView.h" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Similar to ListView, but can display a hierarchical tree of elements.\nThe base items source for the tree identifies the root items, each of which can have n associated child items.\nThere is no hard limit to the nesting - child items can have children and so on\n\nTo make a widget usable as an entry in a TreeView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "Comment", "/** Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound. */" },
		{ "DisplayName", "On Get Item Children" },
		{ "IsBindableEvent", "" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren = { "BP_OnGetItemChildren", nullptr, (EPropertyFlags)0x0040000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTreeView, BP_OnGetItemChildren), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData)) }; // 3628085531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged = { "BP_OnItemExpansionChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTreeView, BP_OnItemExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData)) }; // 2591251878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTreeView_Statics::ClassParams = {
		&UTreeView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTreeView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeView()
	{
		if (!Z_Registration_Info_UClass_UTreeView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTreeView.OuterSingleton, Z_Construct_UClass_UTreeView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTreeView.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UTreeView>()
	{
		return UTreeView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeView);
	UTreeView::~UTreeView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTreeView, UTreeView::StaticClass, TEXT("UTreeView"), &Z_Registration_Info_UClass_UTreeView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTreeView), 294704062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_2332718994(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
