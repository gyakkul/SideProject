// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ListView.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListViewBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventSimpleListItemEventDynamic_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventSimpleListItemEventDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "SimpleListItemEventDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::_Script_UMG_eventSimpleListItemEventDynamic_Parms), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item)
{
	struct _Script_UMG_eventSimpleListItemEventDynamic_Parms
	{
		UObject* Item;
	};
	_Script_UMG_eventSimpleListItemEventDynamic_Parms Parms;
	Parms.Item=Item;
	SimpleListItemEventDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListEntryInitializedDynamic_Parms
		{
			UObject* Item;
			UUserWidget* Widget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListEntryInitializedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListEntryInitializedDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListEntryInitializedDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryInitializedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnListEntryInitializedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryInitializedDynamic, UObject* Item, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListEntryInitializedDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListEntryInitializedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.Widget=Widget;
	OnListEntryInitializedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListItemSelectionChangedDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected)
{
	struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsSelected;
	};
	_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.bIsSelected=bIsSelected ? true : false;
	OnListItemSelectionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsHovered;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms*)Obj)->bIsHovered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnItemIsHoveredChangedDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered)
{
	struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsHovered;
	};
	_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.bIsHovered=bIsHovered ? true : false;
	OnItemIsHoveredChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms
		{
			UObject* Item;
			UUserWidget* Widget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListItemScrolledIntoViewDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.Widget=Widget;
	OnListItemScrolledIntoViewDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListViewScrolledDynamic_Parms
		{
			float ItemOffset;
			float DistanceRemaining;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceRemaining;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_ItemOffset = { "ItemOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListViewScrolledDynamic_Parms, ItemOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_DistanceRemaining = { "DistanceRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListViewScrolledDynamic_Parms, DistanceRemaining), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_ItemOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_DistanceRemaining,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListViewScrolledDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListViewScrolledDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnListViewScrolledDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewScrolledDynamic, float ItemOffset, float DistanceRemaining)
{
	struct _Script_UMG_eventOnListViewScrolledDynamic_Parms
	{
		float ItemOffset;
		float DistanceRemaining;
	};
	_Script_UMG_eventOnListViewScrolledDynamic_Parms Parms;
	Parms.ItemOffset=ItemOffset;
	Parms.DistanceRemaining=DistanceRemaining;
	OnListViewScrolledDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UListView::execBP_GetSelectedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->BP_GetSelectedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_SetListItems)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InListItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_SetListItems(Z_Param_Out_InListItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_CancelScrollIntoView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_CancelScrollIntoView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_ScrollItemIntoView)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_ScrollItemIntoView(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_NavigateToItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_NavigateToItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_IsItemVisible)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_IsItemVisible(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_GetSelectedItems)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetSelectedItems(Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_GetNumItemsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BP_GetNumItemsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_ClearSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_ClearSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_SetItemSelection)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_GET_UBOOL(Z_Param_bSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_SetItemSelection(Z_Param_Item,Z_Param_bSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execBP_SetSelectedItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_SetSelectedItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execOnListItemOuterEndPlayed)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOuter);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListItemOuterEndPlayed(Z_Param_ItemOuter,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execOnListItemEndPlayed)
	{
		P_GET_OBJECT(AActor,Z_Param_Item);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListItemEndPlayed(Z_Param_Item,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execNavigateToIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateToIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execSetSelectedIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execScrollIndexIntoView)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollIndexIntoView(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execIsRefreshPending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRefreshPending();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execSetSelectionMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectionMode(ESelectionMode::Type(Z_Param_SelectionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execClearListItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearListItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execGetIndexForItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexForItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execGetNumItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execGetItemAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetItemAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execRemoveItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execAddItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UListView::execGetListItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetListItems();
		P_NATIVE_END;
	}
	void UListView::StaticRegisterNativesUListView()
	{
		UClass* Class = UListView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UListView::execAddItem },
			{ "BP_CancelScrollIntoView", &UListView::execBP_CancelScrollIntoView },
			{ "BP_ClearSelection", &UListView::execBP_ClearSelection },
			{ "BP_GetNumItemsSelected", &UListView::execBP_GetNumItemsSelected },
			{ "BP_GetSelectedItem", &UListView::execBP_GetSelectedItem },
			{ "BP_GetSelectedItems", &UListView::execBP_GetSelectedItems },
			{ "BP_IsItemVisible", &UListView::execBP_IsItemVisible },
			{ "BP_NavigateToItem", &UListView::execBP_NavigateToItem },
			{ "BP_ScrollItemIntoView", &UListView::execBP_ScrollItemIntoView },
			{ "BP_SetItemSelection", &UListView::execBP_SetItemSelection },
			{ "BP_SetListItems", &UListView::execBP_SetListItems },
			{ "BP_SetSelectedItem", &UListView::execBP_SetSelectedItem },
			{ "ClearListItems", &UListView::execClearListItems },
			{ "GetIndexForItem", &UListView::execGetIndexForItem },
			{ "GetItemAt", &UListView::execGetItemAt },
			{ "GetListItems", &UListView::execGetListItems },
			{ "GetNumItems", &UListView::execGetNumItems },
			{ "IsRefreshPending", &UListView::execIsRefreshPending },
			{ "NavigateToIndex", &UListView::execNavigateToIndex },
			{ "OnListItemEndPlayed", &UListView::execOnListItemEndPlayed },
			{ "OnListItemOuterEndPlayed", &UListView::execOnListItemOuterEndPlayed },
			{ "RemoveItem", &UListView::execRemoveItem },
			{ "ScrollIndexIntoView", &UListView::execScrollIndexIntoView },
			{ "SetSelectedIndex", &UListView::execSetSelectedIndex },
			{ "SetSelectionMode", &UListView::execSetSelectionMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UListView_AddItem_Statics
	{
		struct ListView_eventAddItem_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventAddItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Adds an the item to the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Adds an the item to the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "AddItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_AddItem_Statics::ListView_eventAddItem_Parms), Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Cancels a previous request to scroll and item into view. */" },
		{ "DisplayName", "Cancel Scroll Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Cancels a previous request to scroll and item into view." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_CancelScrollIntoView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_CancelScrollIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Clear selection */" },
		{ "DisplayName", "Clear Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Clear selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_ClearSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics
	{
		struct ListView_eventBP_GetNumItemsSelected_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_GetNumItemsSelected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets the number of items currently selected in the list */" },
		{ "DisplayName", "Get Num Items Selected" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the number of items currently selected in the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetNumItemsSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::ListView_eventBP_GetNumItemsSelected_Parms), Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetNumItemsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics
	{
		struct ListView_eventBP_GetSelectedItem_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_GetSelectedItem_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets the first selected item, if any; recommended that you only use this for single selection lists. */" },
		{ "DisplayName", "Get Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the first selected item, if any; recommended that you only use this for single selection lists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetSelectedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::ListView_eventBP_GetSelectedItem_Parms), Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics
	{
		struct ListView_eventBP_GetSelectedItems_Parms
		{
			TArray<UObject*> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_GetSelectedItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventBP_GetSelectedItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ListView_eventBP_GetSelectedItems_Parms), &Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets a list of all the currently selected items */" },
		{ "DisplayName", "GetSelectedItems" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets a list of all the currently selected items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetSelectedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::ListView_eventBP_GetSelectedItems_Parms), Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics
	{
		struct ListView_eventBP_IsItemVisible_Parms
		{
			UObject* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_IsItemVisible_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventBP_IsItemVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ListView_eventBP_IsItemVisible_Parms), &Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets whether the entry for the given object is currently visible in the list */" },
		{ "DisplayName", "Is Item Visible" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets whether the entry for the given object is currently visible in the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_IsItemVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::ListView_eventBP_IsItemVisible_Parms), Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_IsItemVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics
	{
		struct ListView_eventBP_NavigateToItem_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_NavigateToItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the given item is navigated to, scrolling it into view if needed. */" },
		{ "DisplayName", "Navigate To Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is navigated to, scrolling it into view if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_NavigateToItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::ListView_eventBP_NavigateToItem_Parms), Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_NavigateToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics
	{
		struct ListView_eventBP_ScrollItemIntoView_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_ScrollItemIntoView_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the given item is scrolled into view */" },
		{ "DisplayName", "Scroll Item Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is scrolled into view" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_ScrollItemIntoView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::ListView_eventBP_ScrollItemIntoView_Parms), Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_ScrollItemIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics
	{
		struct ListView_eventBP_SetItemSelection_Parms
		{
			UObject* Item;
			bool bSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_SetItemSelection_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ListView_eventBP_SetItemSelection_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ListView_eventBP_SetItemSelection_Parms), &Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets whether the given item is selected. */" },
		{ "DisplayName", "Set Item Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets whether the given item is selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetItemSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::ListView_eventBP_SetItemSelection_Parms), Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetItemSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetListItems_Statics
	{
		struct ListView_eventBP_SetListItems_Parms
		{
			TArray<UObject*> InListItems;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InListItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InListItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InListItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner = { "InListItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems = { "InListItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_SetListItems_Parms, InListItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the array of objects to display rows for in the list */" },
		{ "DisplayName", "Set List Items" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the array of objects to display rows for in the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetListItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::ListView_eventBP_SetListItems_Parms), Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics
	{
		struct ListView_eventBP_SetSelectedItem_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventBP_SetSelectedItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the given item as the sole selected item. */" },
		{ "DisplayName", "Set Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the given item as the sole selected item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetSelectedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::ListView_eventBP_SetSelectedItem_Parms), Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_ClearListItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Removes all items from the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Removes all items from the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "ClearListItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_ClearListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetIndexForItem_Statics
	{
		struct ListView_eventGetIndexForItem_Parms
		{
			const UObject* Item;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the index that the specified item is at. Will return the first found, or -1 for not found */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the index that the specified item is at. Will return the first found, or -1 for not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetIndexForItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::ListView_eventGetIndexForItem_Parms), Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetIndexForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetItemAt_Statics
	{
		struct ListView_eventGetItemAt_Parms
		{
			int32 Index;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the item at the given index */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the item at the given index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetItemAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_GetItemAt_Statics::ListView_eventGetItemAt_Parms), Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetItemAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetListItems_Statics
	{
		struct ListView_eventGetListItems_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetListItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/**\n\x09 * Gets the list of all items in the list.\n\x09 * Note that each of these items only has a corresponding entry widget when visible. Use GetDisplayedEntryWidgets to get the currently displayed widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the list of all items in the list.\nNote that each of these items only has a corresponding entry widget when visible. Use GetDisplayedEntryWidgets to get the currently displayed widgets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetListItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_GetListItems_Statics::ListView_eventGetListItems_Parms), Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetNumItems_Statics
	{
		struct ListView_eventGetNumItems_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the total number of items */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the total number of items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetNumItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_GetNumItems_Statics::ListView_eventGetNumItems_Parms), Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_IsRefreshPending_Statics
	{
		struct ListView_eventIsRefreshPending_Parms
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
	void Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventIsRefreshPending_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ListView_eventIsRefreshPending_Parms), &Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns true if a refresh is pending and the list will be rebuilt on the next tick */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns true if a refresh is pending and the list will be rebuilt on the next tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "IsRefreshPending", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::ListView_eventIsRefreshPending_Parms), Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_IsRefreshPending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_NavigateToIndex_Statics
	{
		struct ListView_eventNavigateToIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventNavigateToIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the item at the given index navigated to, scrolling it into view if needed. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index navigated to, scrolling it into view if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "NavigateToIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::ListView_eventNavigateToIndex_Parms), Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_NavigateToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics
	{
		struct ListView_eventOnListItemEndPlayed_Parms
		{
			AActor* Item;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventOnListItemEndPlayed_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventOnListItemEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "OnListItemEndPlayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::ListView_eventOnListItemEndPlayed_Parms), Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_OnListItemEndPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics
	{
		struct ListView_eventOnListItemOuterEndPlayed_Parms
		{
			AActor* ItemOuter;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemOuter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_ItemOuter = { "ItemOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventOnListItemOuterEndPlayed_Parms, ItemOuter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventOnListItemOuterEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_ItemOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "OnListItemOuterEndPlayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::ListView_eventOnListItemOuterEndPlayed_Parms), Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_RemoveItem_Statics
	{
		struct ListView_eventRemoveItem_Parms
		{
			UObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventRemoveItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_RemoveItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Removes an the item from the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Removes an the item from the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_RemoveItem_Statics::ListView_eventRemoveItem_Parms), Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics
	{
		struct ListView_eventScrollIndexIntoView_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventScrollIndexIntoView_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the item at the given index is scrolled into view */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index is scrolled into view" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "ScrollIndexIntoView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::ListView_eventScrollIndexIntoView_Parms), Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_ScrollIndexIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_SetSelectedIndex_Statics
	{
		struct ListView_eventSetSelectedIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the item at the given index as the sole selected item. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the item at the given index as the sole selected item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "SetSelectedIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::ListView_eventSetSelectedIndex_Parms), Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_SetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_SetSelectionMode_Statics
	{
		struct ListView_eventSetSelectionMode_Parms
		{
			TEnumAsByte<ESelectionMode::Type> SelectionMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ListView_eventSetSelectionMode_Parms, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(nullptr, 0) }; // 194986416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the new selection mode, preserving the current selection where possible. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the new selection mode, preserving the current selection where possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "SetSelectionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::ListView_eventSetSelectionMode_Parms), Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_SetSelectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListView);
	UClass* Z_Construct_UClass_UListView_NoRegister()
	{
		return UListView::StaticClass();
	}
	struct Z_Construct_UClass_UListView_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearSelectionOnClick_MetaData[];
#endif
		static void NewProp_bClearSelectionOnClick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearSelectionOnClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrySpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReturnFocusToSelection_MetaData[];
#endif
		static void NewProp_bReturnFocusToSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnFocusToSelection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ListItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnEntryInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnEntryInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemDoubleClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemDoubleClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemIsHoveredChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemIsHoveredChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemSelectionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemSelectionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemScrolledIntoView_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemScrolledIntoView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnListViewScrolled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnListViewScrolled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListViewBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UListView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UListView_AddItem, "AddItem" }, // 2049252959
		{ &Z_Construct_UFunction_UListView_BP_CancelScrollIntoView, "BP_CancelScrollIntoView" }, // 3635346465
		{ &Z_Construct_UFunction_UListView_BP_ClearSelection, "BP_ClearSelection" }, // 2960790665
		{ &Z_Construct_UFunction_UListView_BP_GetNumItemsSelected, "BP_GetNumItemsSelected" }, // 1789683312
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItem, "BP_GetSelectedItem" }, // 3655983173
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItems, "BP_GetSelectedItems" }, // 3125667945
		{ &Z_Construct_UFunction_UListView_BP_IsItemVisible, "BP_IsItemVisible" }, // 3102463172
		{ &Z_Construct_UFunction_UListView_BP_NavigateToItem, "BP_NavigateToItem" }, // 59664795
		{ &Z_Construct_UFunction_UListView_BP_ScrollItemIntoView, "BP_ScrollItemIntoView" }, // 3456875424
		{ &Z_Construct_UFunction_UListView_BP_SetItemSelection, "BP_SetItemSelection" }, // 440832323
		{ &Z_Construct_UFunction_UListView_BP_SetListItems, "BP_SetListItems" }, // 1599508680
		{ &Z_Construct_UFunction_UListView_BP_SetSelectedItem, "BP_SetSelectedItem" }, // 1357004584
		{ &Z_Construct_UFunction_UListView_ClearListItems, "ClearListItems" }, // 3449484376
		{ &Z_Construct_UFunction_UListView_GetIndexForItem, "GetIndexForItem" }, // 3595276257
		{ &Z_Construct_UFunction_UListView_GetItemAt, "GetItemAt" }, // 1292881671
		{ &Z_Construct_UFunction_UListView_GetListItems, "GetListItems" }, // 1918772540
		{ &Z_Construct_UFunction_UListView_GetNumItems, "GetNumItems" }, // 3932338592
		{ &Z_Construct_UFunction_UListView_IsRefreshPending, "IsRefreshPending" }, // 264286278
		{ &Z_Construct_UFunction_UListView_NavigateToIndex, "NavigateToIndex" }, // 1520349855
		{ &Z_Construct_UFunction_UListView_OnListItemEndPlayed, "OnListItemEndPlayed" }, // 252343490
		{ &Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed, "OnListItemOuterEndPlayed" }, // 738016246
		{ &Z_Construct_UFunction_UListView_RemoveItem, "RemoveItem" }, // 4120283766
		{ &Z_Construct_UFunction_UListView_ScrollIndexIntoView, "ScrollIndexIntoView" }, // 167824921
		{ &Z_Construct_UFunction_UListView_SetSelectedIndex, "SetSelectedIndex" }, // 806985187
		{ &Z_Construct_UFunction_UListView_SetSelectionMode, "SetSelectionMode" }, // 774567172
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A virtualized list that allows up to thousands of items to be displayed.\n * \n * An important distinction to keep in mind here is \"Item\" vs. \"Entry\"\n * The list itself is based on a list of n items, but only creates as many entry widgets as can fit on screen.\n * For example, a scrolling ListView of 200 items with 5 currently visible will only have created 5 entry widgets.\n *\n * To make a widget usable as an entry in a ListView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "EntryInterface", "UserObjectListEntry" },
		{ "IncludePath", "Components/ListView.h" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A virtualized list that allows up to thousands of items to be displayed.\n\nAn important distinction to keep in mind here is \"Item\" vs. \"Entry\"\nThe list itself is based on a list of n items, but only creates as many entry widgets as can fit on screen.\nFor example, a scrolling ListView of 200 items with 5 currently visible will only have created 5 entry widgets.\n\nTo make a widget usable as an entry in a ListView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "ListView" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, WidgetStyle), Z_Construct_UScriptStruct_FTableViewStyle, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle_MetaData)) }; // 2891893037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** \n\x09 * The scroll & layout orientation of the list. ListView and TileView only. \n\x09 * Vertical will scroll vertically and arrange tiles into rows.\n\x09 * Horizontal will scroll horizontally and arrange tiles into columns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "The scroll & layout orientation of the list. ListView and TileView only.\nVertical will scroll vertically and arrange tiles into rows.\nHorizontal will scroll horizontally and arrange tiles into columns." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData)) }; // 194986416
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel = { "ConsumeMouseWheel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData)) }; // 3844272617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	void Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit(void* Obj)
	{
		((UListView*)Obj)->bClearSelectionOnClick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick = { "bClearSelectionOnClick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	void Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UListView*)Obj)->bIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData[] = {
		{ "Category", "ListView" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, EntrySpacing), METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	void Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_SetBit(void* Obj)
	{
		((UListView*)Obj)->bReturnFocusToSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection = { "bReturnFocusToSelection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner = { "ListItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems = { "ListItems", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, ListItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a row widget is generated for a list item */" },
		{ "DisplayName", "On Entry Initialized" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Called when a row widget is generated for a list item" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized = { "BP_OnEntryInitialized", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnEntryInitialized), Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized_MetaData)) }; // 3274562351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked = { "BP_OnItemClicked", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnItemClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData)) }; // 943745280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Double Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked = { "BP_OnItemDoubleClicked", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnItemDoubleClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData)) }; // 943745280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Is Hovered Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged = { "BP_OnItemIsHoveredChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnItemIsHoveredChanged), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData)) }; // 1732467474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged = { "BP_OnItemSelectionChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnItemSelectionChanged), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData)) }; // 2243693929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Scrolled Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView = { "BP_OnItemScrolledIntoView", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnItemScrolledIntoView), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData)) }; // 1698375302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On List View Scrolled" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled = { "BP_OnListViewScrolled", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UListView, BP_OnListViewScrolled), Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled_MetaData)) }; // 2420768873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UListView_Statics::ClassParams = {
		&UListView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UListView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListView()
	{
		if (!Z_Registration_Info_UClass_UListView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListView.OuterSingleton, Z_Construct_UClass_UListView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UListView.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UListView>()
	{
		return UListView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListView);
	UListView::~UListView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UListView, UListView::StaticClass, TEXT("UListView"), &Z_Registration_Info_UClass_UListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListView), 1307904171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_159876351(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
