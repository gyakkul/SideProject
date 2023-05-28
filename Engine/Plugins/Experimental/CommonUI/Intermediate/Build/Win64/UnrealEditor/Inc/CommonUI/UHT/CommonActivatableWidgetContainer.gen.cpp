// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "Blueprint/UserWidgetPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActivatableWidgetContainer() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetQueue();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetQueue_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execRemoveWidget)
	{
		P_GET_OBJECT(UCommonActivatableWidget,Z_Param_WidgetToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_WidgetToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execBP_AddWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_ActivatableWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonActivatableWidget**)Z_Param__Result=P_THIS->BP_AddWidget(Z_Param_ActivatableWidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execGetTransitionDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTransitionDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execSetTransitionDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransitionDuration(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execClearWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidgetContainerBase::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonActivatableWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	void UCommonActivatableWidgetContainerBase::StaticRegisterNativesUCommonActivatableWidgetContainerBase()
	{
		UClass* Class = UCommonActivatableWidgetContainerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddWidget", &UCommonActivatableWidgetContainerBase::execBP_AddWidget },
			{ "ClearWidgets", &UCommonActivatableWidgetContainerBase::execClearWidgets },
			{ "GetActiveWidget", &UCommonActivatableWidgetContainerBase::execGetActiveWidget },
			{ "GetTransitionDuration", &UCommonActivatableWidgetContainerBase::execGetTransitionDuration },
			{ "RemoveWidget", &UCommonActivatableWidgetContainerBase::execRemoveWidget },
			{ "SetTransitionDuration", &UCommonActivatableWidgetContainerBase::execSetTransitionDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics
	{
		struct CommonActivatableWidgetContainerBase_eventBP_AddWidget_Parms
		{
			TSubclassOf<UCommonActivatableWidget>  ActivatableWidgetClass;
			UCommonActivatableWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventBP_AddWidget_Parms, ActivatableWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventBP_AddWidget_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ActivatableWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetStack" },
		{ "Comment", "/** \n\x09 * Adds a widget of the given class to the container. \n\x09 * Note that all widgets added to the container are pooled, so the caller should not try to cache and re-use the created widget.\n\x09 * \n\x09 * It is possible for multiple instances of the same class to be added to the container at once, so any instance created in the past\n\x09 * is not guaranteed to be the one returned this time.\n\x09 *\n\x09 * So in practice, you should not trust that any prior state has been retained on the returned widget, and establish all appropriate properties every time.\n\x09 */" },
		{ "DeterminesOutputType", "ActivatableWidgetClass" },
		{ "DisplayName", "Push Widget" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "Adds a widget of the given class to the container.\nNote that all widgets added to the container are pooled, so the caller should not try to cache and re-use the created widget.\n\nIt is possible for multiple instances of the same class to be added to the container at once, so any instance created in the past\nis not guaranteed to be the one returned this time.\n\nSo in practice, you should not trust that any prior state has been retained on the returned widget, and establish all appropriate properties every time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "BP_AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::CommonActivatableWidgetContainerBase_eventBP_AddWidget_Parms), Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetContainer" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "ClearWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics
	{
		struct CommonActivatableWidgetContainerBase_eventGetActiveWidget_Parms
		{
			UCommonActivatableWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetStack" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "GetActiveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::CommonActivatableWidgetContainerBase_eventGetActiveWidget_Parms), Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics
	{
		struct CommonActivatableWidgetContainerBase_eventGetTransitionDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventGetTransitionDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetContainer" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "GetTransitionDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::CommonActivatableWidgetContainerBase_eventGetTransitionDuration_Parms), Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics
	{
		struct CommonActivatableWidgetContainerBase_eventRemoveWidget_Parms
		{
			UCommonActivatableWidget* WidgetToRemove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventRemoveWidget_Parms, WidgetToRemove), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::NewProp_WidgetToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetContainer" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::CommonActivatableWidgetContainerBase_eventRemoveWidget_Parms), Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics
	{
		struct CommonActivatableWidgetContainerBase_eventSetTransitionDuration_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidgetContainerBase_eventSetTransitionDuration_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidgetContainer" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase, nullptr, "SetTransitionDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::CommonActivatableWidgetContainerBase_eventSetTransitionDuration_Parms), Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActivatableWidgetContainerBase);
	UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister()
	{
		return UCommonActivatableWidgetContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionCurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionCurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionCurveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayedWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedWidgetsPool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedWidgetsPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_BP_AddWidget, "BP_AddWidget" }, // 3139188565
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_ClearWidgets, "ClearWidgets" }, // 32269538
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetActiveWidget, "GetActiveWidget" }, // 1029903997
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_GetTransitionDuration, "GetTransitionDuration" }, // 4142678220
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_RemoveWidget, "RemoveWidget" }, // 2645372656
		{ &Z_Construct_UFunction_UCommonActivatableWidgetContainerBase_SetTransitionDuration, "SetTransitionDuration" }, // 2884538140
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Base of widgets built to manage N activatable widgets, displaying one at a time.\n * Intentionally meant to be black boxes that do not expose child/slot modification like a normal panel widget.\n */" },
		{ "IncludePath", "Widgets/CommonActivatableWidgetContainer.h" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base of widgets built to manage N activatable widgets, displaying one at a time.\nIntentionally meant to be black boxes that do not expose child/slot modification like a normal panel widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The type of transition to play between widgets */" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "The type of transition to play between widgets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, TransitionType), Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType_MetaData)) }; // 509553621
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The curve function type to apply to the transition animation */" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "The curve function type to apply to the transition animation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType = { "TransitionCurveType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, TransitionCurveType), Z_Construct_UEnum_CommonUI_ETransitionCurve, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType_MetaData)) }; // 3436855353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The total duration of a single transition between widgets */" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "The total duration of a single transition between widgets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, TransitionDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionDuration_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList_Inner = { "WidgetList", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList = { "WidgetList", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, WidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_DisplayedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_DisplayedWidget = { "DisplayedWidget", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, DisplayedWidget), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_DisplayedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_DisplayedWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_GeneratedWidgetsPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_GeneratedWidgetsPool = { "GeneratedWidgetsPool", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_GeneratedWidgetsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_GeneratedWidgetsPool_MetaData)) }; // 3158109562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionCurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_TransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_WidgetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_DisplayedWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::NewProp_GeneratedWidgetsPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActivatableWidgetContainerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::ClassParams = {
		&UCommonActivatableWidgetContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase()
	{
		if (!Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.OuterSingleton, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActivatableWidgetContainerBase>()
	{
		return UCommonActivatableWidgetContainerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActivatableWidgetContainerBase);
	UCommonActivatableWidgetContainerBase::~UCommonActivatableWidgetContainerBase() {}
	void UCommonActivatableWidgetStack::StaticRegisterNativesUCommonActivatableWidgetStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActivatableWidgetStack);
	UClass* Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister()
	{
		return UCommonActivatableWidgetStack::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActivatableWidgetStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootContentWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RootContentWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootContentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootContentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A display stack of ActivatableWidget elements. \n * \n * - Only the widget at the top of the stack is displayed and activated. All others are deactivated.\n * - When that top-most displayed widget deactivates, it's automatically removed and the preceding entry is displayed/activated.\n * - If RootContent is provided, it can never be removed regardless of activation state\n */" },
		{ "IncludePath", "Widgets/CommonActivatableWidgetContainer.h" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "A display stack of ActivatableWidget elements.\n\n- Only the widget at the top of the stack is displayed and activated. All others are deactivated.\n- When that top-most displayed widget deactivates, it's automatically removed and the preceding entry is displayed/activated.\n- If RootContent is provided, it can never be removed regardless of activation state" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidgetClass_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Optional widget to auto-generate as the permanent root element of the stack */" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "Optional widget to auto-generate as the permanent root element of the stack" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidgetClass = { "RootContentWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetStack, RootContentWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidget = { "RootContentWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidgetStack, RootContentWidget), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::NewProp_RootContentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActivatableWidgetStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::ClassParams = {
		&UCommonActivatableWidgetStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActivatableWidgetStack()
	{
		if (!Z_Registration_Info_UClass_UCommonActivatableWidgetStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActivatableWidgetStack.OuterSingleton, Z_Construct_UClass_UCommonActivatableWidgetStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActivatableWidgetStack.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActivatableWidgetStack>()
	{
		return UCommonActivatableWidgetStack::StaticClass();
	}
	UCommonActivatableWidgetStack::UCommonActivatableWidgetStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActivatableWidgetStack);
	UCommonActivatableWidgetStack::~UCommonActivatableWidgetStack() {}
	void UCommonActivatableWidgetQueue::StaticRegisterNativesUCommonActivatableWidgetQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActivatableWidgetQueue);
	UClass* Z_Construct_UClass_UCommonActivatableWidgetQueue_NoRegister()
	{
		return UCommonActivatableWidgetQueue::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A display queue of ActivatableWidget elements. \n *\n * - Only one widget is active/displayed at a time, all others in the queue are deactivated.\n * - When the active widget deactivates, it is automatically removed from the widget, \n *\x09\x09released back to the pool, and the next widget in the queue (if any) is displayed\n */" },
		{ "IncludePath", "Widgets/CommonActivatableWidgetContainer.h" },
		{ "ModuleRelativePath", "Public/Widgets/CommonActivatableWidgetContainer.h" },
		{ "ToolTip", "A display queue of ActivatableWidget elements.\n\n- Only one widget is active/displayed at a time, all others in the queue are deactivated.\n- When the active widget deactivates, it is automatically removed from the widget,\n            released back to the pool, and the next widget in the queue (if any) is displayed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActivatableWidgetQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::ClassParams = {
		&UCommonActivatableWidgetQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActivatableWidgetQueue()
	{
		if (!Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.OuterSingleton, Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActivatableWidgetQueue>()
	{
		return UCommonActivatableWidgetQueue::StaticClass();
	}
	UCommonActivatableWidgetQueue::UCommonActivatableWidgetQueue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActivatableWidgetQueue);
	UCommonActivatableWidgetQueue::~UCommonActivatableWidgetQueue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonActivatableWidgetContainerBase, UCommonActivatableWidgetContainerBase::StaticClass, TEXT("UCommonActivatableWidgetContainerBase"), &Z_Registration_Info_UClass_UCommonActivatableWidgetContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActivatableWidgetContainerBase), 1451127725U) },
		{ Z_Construct_UClass_UCommonActivatableWidgetStack, UCommonActivatableWidgetStack::StaticClass, TEXT("UCommonActivatableWidgetStack"), &Z_Registration_Info_UClass_UCommonActivatableWidgetStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActivatableWidgetStack), 153110891U) },
		{ Z_Construct_UClass_UCommonActivatableWidgetQueue, UCommonActivatableWidgetQueue::StaticClass, TEXT("UCommonActivatableWidgetQueue"), &Z_Registration_Info_UClass_UCommonActivatableWidgetQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActivatableWidgetQueue), 1027213925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_500559231(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
