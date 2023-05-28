// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonWidgetCarousel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetCarousel() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnCurrentPageIndexChanged_Parms
		{
			UCommonWidgetCarousel* CarouselWidget;
			int32 CurrentPageIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarouselWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarouselWidget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPageIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CarouselWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CarouselWidget = { "CarouselWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnCurrentPageIndexChanged_Parms, CarouselWidget), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CarouselWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CarouselWidget_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CurrentPageIndex = { "CurrentPageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnCurrentPageIndexChanged_Parms, CurrentPageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CarouselWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::NewProp_CurrentPageIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnCurrentPageIndexChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::_Script_CommonUI_eventOnCurrentPageIndexChanged_Parms), Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCurrentPageIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentPageIndexChanged, UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)
{
	struct _Script_CommonUI_eventOnCurrentPageIndexChanged_Parms
	{
		UCommonWidgetCarousel* CarouselWidget;
		int32 CurrentPageIndex;
	};
	_Script_CommonUI_eventOnCurrentPageIndexChanged_Parms Parms;
	Parms.CarouselWidget=CarouselWidget;
	Parms.CurrentPageIndex=CurrentPageIndex;
	OnCurrentPageIndexChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execPreviousPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execEndAutoScrolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAutoScrolling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execBeginAutoScrolling)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAutoScrolling(Z_Param_ScrollInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execGetWidgetAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execSetActiveWidgetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidgetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarousel::execGetActiveWidgetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
		P_NATIVE_END;
	}
	void UCommonWidgetCarousel::StaticRegisterNativesUCommonWidgetCarousel()
	{
		UClass* Class = UCommonWidgetCarousel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginAutoScrolling", &UCommonWidgetCarousel::execBeginAutoScrolling },
			{ "EndAutoScrolling", &UCommonWidgetCarousel::execEndAutoScrolling },
			{ "GetActiveWidgetIndex", &UCommonWidgetCarousel::execGetActiveWidgetIndex },
			{ "GetWidgetAtIndex", &UCommonWidgetCarousel::execGetWidgetAtIndex },
			{ "NextPage", &UCommonWidgetCarousel::execNextPage },
			{ "PreviousPage", &UCommonWidgetCarousel::execPreviousPage },
			{ "SetActiveWidget", &UCommonWidgetCarousel::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UCommonWidgetCarousel::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics
	{
		struct CommonWidgetCarousel_eventBeginAutoScrolling_Parms
		{
			float ScrollInterval;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::NewProp_ScrollInterval = { "ScrollInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventBeginAutoScrolling_Parms, ScrollInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::NewProp_ScrollInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "CPP_Default_ScrollInterval", "10.000000" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "BeginAutoScrolling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::CommonWidgetCarousel_eventBeginAutoScrolling_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "EndAutoScrolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics
	{
		struct CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "Comment", "/** Gets the slot index of the currently active widget */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "Gets the slot index of the currently active widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "GetActiveWidgetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics
	{
		struct CommonWidgetCarousel_eventGetWidgetAtIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "Comment", "/** Get a widget at the provided index */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "Get a widget at the provided index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "GetWidgetAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::CommonWidgetCarousel_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "NextPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_NextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "PreviousPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics
	{
		struct CommonWidgetCarousel_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "Comment", "/** Activates the widget and makes it the active index. */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "Activates the widget and makes it the active index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "SetActiveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::CommonWidgetCarousel_eventSetActiveWidget_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics
	{
		struct CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Carousel" },
		{ "Comment", "/** Activates the widget at the specified index. */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "Activates the widget at the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonWidgetCarousel);
	UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister()
	{
		return UCommonWidgetCarousel::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetCarousel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentPageIndexChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentPageIndexChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetCarousel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetCarousel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling, "BeginAutoScrolling" }, // 3723269021
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling, "EndAutoScrolling" }, // 2324960077
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 4167935927
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 621854995
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_NextPage, "NextPage" }, // 1842949076
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage, "PreviousPage" }, // 370140310
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget, "SetActiveWidget" }, // 665825057
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 3021965477
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A widget switcher is like a tab control, but without tabs. At most one widget is visible at time.\n */" },
		{ "IncludePath", "CommonWidgetCarousel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "Category", "Carousel" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The slot index to display */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
		{ "ToolTip", "The slot index to display" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarousel, ActiveWidgetIndex), METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData[] = {
		{ "Category", "Carousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged = { "OnCurrentPageIndexChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarousel, OnCurrentPageIndexChanged), Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData)) }; // 1510908250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetCarousel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetCarousel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::ClassParams = {
		&UCommonWidgetCarousel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetCarousel()
	{
		if (!Z_Registration_Info_UClass_UCommonWidgetCarousel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonWidgetCarousel.OuterSingleton, Z_Construct_UClass_UCommonWidgetCarousel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonWidgetCarousel.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonWidgetCarousel>()
	{
		return UCommonWidgetCarousel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetCarousel);
	UCommonWidgetCarousel::~UCommonWidgetCarousel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonWidgetCarousel, UCommonWidgetCarousel::StaticClass, TEXT("UCommonWidgetCarousel"), &Z_Registration_Info_UClass_UCommonWidgetCarousel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonWidgetCarousel), 115113512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_1468160302(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
