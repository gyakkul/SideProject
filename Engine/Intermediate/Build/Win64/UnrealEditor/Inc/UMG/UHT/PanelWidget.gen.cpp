// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PanelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UPanelWidget::execClearChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execHasAnyChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execRemoveChild)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveChild(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execAddChild)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPanelSlot**)Z_Param__Result=P_THIS->AddChild(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execRemoveChildAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveChildAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execHasChild)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execGetChildIndex)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChildIndex(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execGetAllChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidget*>*)Z_Param__Result=P_THIS->GetAllChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execGetChildAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetChildAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelWidget::execGetChildrenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChildrenCount();
		P_NATIVE_END;
	}
	void UPanelWidget::StaticRegisterNativesUPanelWidget()
	{
		UClass* Class = UPanelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChild", &UPanelWidget::execAddChild },
			{ "ClearChildren", &UPanelWidget::execClearChildren },
			{ "GetAllChildren", &UPanelWidget::execGetAllChildren },
			{ "GetChildAt", &UPanelWidget::execGetChildAt },
			{ "GetChildIndex", &UPanelWidget::execGetChildIndex },
			{ "GetChildrenCount", &UPanelWidget::execGetChildrenCount },
			{ "HasAnyChildren", &UPanelWidget::execHasAnyChildren },
			{ "HasChild", &UPanelWidget::execHasChild },
			{ "RemoveChild", &UPanelWidget::execRemoveChild },
			{ "RemoveChildAt", &UPanelWidget::execRemoveChildAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPanelWidget_AddChild_Statics
	{
		struct PanelWidget_eventAddChild_Parms
		{
			UWidget* Content;
			UPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventAddChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventAddChild_Parms, ReturnValue), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/**\n\x09 * Adds a new child widget to the container.  Returns the base slot type, \n\x09 * requires casting to turn it into the type specific to the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Adds a new child widget to the container.  Returns the base slot type,\nrequires casting to turn it into the type specific to the container." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "AddChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PanelWidget_eventAddChild_Parms), Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_AddChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_AddChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Remove all child widgets from the panel widget. */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Remove all child widgets from the panel widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "ClearChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_ClearChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics
	{
		struct PanelWidget_eventGetAllChildren_Parms
		{
			TArray<UWidget*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetAllChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Gets all widgets in the container */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets all widgets in the container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetAllChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PanelWidget_eventGetAllChildren_Parms), Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetAllChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics
	{
		struct PanelWidget_eventGetChildAt_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetChildAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetChildAt_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/**\n\x09 * Gets the widget at an index.\n\x09 * @param Index The index of the widget.\n\x09 * @return The widget at the given index, or nothing if there is no widget there.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets the widget at an index.\n@param Index The index of the widget.\n@return The widget at the given index, or nothing if there is no widget there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PanelWidget_eventGetChildAt_Parms), Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics
	{
		struct PanelWidget_eventGetChildIndex_Parms
		{
			const UWidget* Content;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetChildIndex_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetChildIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Gets the index of a specific child widget */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets the index of a specific child widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PanelWidget_eventGetChildIndex_Parms), Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics
	{
		struct PanelWidget_eventGetChildrenCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventGetChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Gets number of child widgets in the container. */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets number of child widgets in the container." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildrenCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PanelWidget_eventGetChildrenCount_Parms), Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics
	{
		struct PanelWidget_eventHasAnyChildren_Parms
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
	void Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventHasAnyChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PanelWidget_eventHasAnyChildren_Parms), &Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Returns true if there are any child widgets in the panel */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Returns true if there are any child widgets in the panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "HasAnyChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PanelWidget_eventHasAnyChildren_Parms), Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_HasAnyChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_HasChild_Statics
	{
		struct PanelWidget_eventHasChild_Parms
		{
			UWidget* Content;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventHasChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData)) };
	void Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventHasChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PanelWidget_eventHasChild_Parms), &Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Returns true if panel contains this widget */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Returns true if panel contains this widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "HasChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PanelWidget_eventHasChild_Parms), Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_HasChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_HasChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics
	{
		struct PanelWidget_eventRemoveChild_Parms
		{
			UWidget* Content;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventRemoveChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData)) };
	void Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventRemoveChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PanelWidget_eventRemoveChild_Parms), &Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/**\n\x09 * Removes a specific widget from the container.\n\x09 * @return true if the widget was found and removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Removes a specific widget from the container.\n@return true if the widget was found and removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "RemoveChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PanelWidget_eventRemoveChild_Parms), Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics
	{
		struct PanelWidget_eventRemoveChildAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PanelWidget_eventRemoveChildAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventRemoveChildAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PanelWidget_eventRemoveChildAt_Parms), &Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "Comment", "/** Removes a child by it's index. */" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Removes a child by it's index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "RemoveChildAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PanelWidget_eventRemoveChildAt_Parms), Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPanelWidget);
	UClass* Z_Construct_UClass_UPanelWidget_NoRegister()
	{
		return UPanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPanelWidget_AddChild, "AddChild" }, // 1576044323
		{ &Z_Construct_UFunction_UPanelWidget_ClearChildren, "ClearChildren" }, // 2234370691
		{ &Z_Construct_UFunction_UPanelWidget_GetAllChildren, "GetAllChildren" }, // 3872787037
		{ &Z_Construct_UFunction_UPanelWidget_GetChildAt, "GetChildAt" }, // 1824338197
		{ &Z_Construct_UFunction_UPanelWidget_GetChildIndex, "GetChildIndex" }, // 2198377153
		{ &Z_Construct_UFunction_UPanelWidget_GetChildrenCount, "GetChildrenCount" }, // 41689592
		{ &Z_Construct_UFunction_UPanelWidget_HasAnyChildren, "HasAnyChildren" }, // 3758506
		{ &Z_Construct_UFunction_UPanelWidget_HasChild, "HasChild" }, // 1690512805
		{ &Z_Construct_UFunction_UPanelWidget_RemoveChild, "RemoveChild" }, // 1191670525
		{ &Z_Construct_UFunction_UPanelWidget_RemoveChildAt, "RemoveChildAt" }, // 4291658280
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The base class for all UMG panel widgets.  Panel widgets layout a collection of child widgets. */" },
		{ "IncludePath", "Components/PanelWidget.h" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The base class for all UMG panel widgets.  Panel widgets layout a collection of child widgets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData[] = {
		{ "Comment", "/** The slots in the widget holding the child widgets of this panel. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The slots in the widget holding the child widgets of this panel." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData[] = {
		{ "Comment", "/** The slots in the widget holding the child widgets of this panel. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The slots in the widget holding the child widgets of this panel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPanelWidget, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPanelWidget_Statics::ClassParams = {
		&UPanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPanelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelWidget()
	{
		if (!Z_Registration_Info_UClass_UPanelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPanelWidget.OuterSingleton, Z_Construct_UClass_UPanelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPanelWidget.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UPanelWidget>()
	{
		return UPanelWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelWidget);
	UPanelWidget::~UPanelWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPanelWidget, UPanelWidget::StaticClass, TEXT("UPanelWidget"), &Z_Registration_Info_UClass_UPanelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPanelWidget), 3329634077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_470598146(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
