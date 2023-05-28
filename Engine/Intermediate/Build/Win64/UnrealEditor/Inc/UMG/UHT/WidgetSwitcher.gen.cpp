// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WidgetSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcher() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetWidgetAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidgetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidgetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidgetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetSwitcher::execGetNumWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumWidgets();
		P_NATIVE_END;
	}
	void UWidgetSwitcher::GetActiveWidgetIndex_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWidgetSwitcher* Obj = (const UWidgetSwitcher*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetActiveWidgetIndex();
	}
	void UWidgetSwitcher::SetActiveWidgetIndex_WrapperImpl(void* Object, const void* InValue)
	{
		UWidgetSwitcher* Obj = (UWidgetSwitcher*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetActiveWidgetIndex(Value);
	}
	void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher()
	{
		UClass* Class = UWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveWidget", &UWidgetSwitcher::execGetActiveWidget },
			{ "GetActiveWidgetIndex", &UWidgetSwitcher::execGetActiveWidgetIndex },
			{ "GetNumWidgets", &UWidgetSwitcher::execGetNumWidgets },
			{ "GetWidgetAtIndex", &UWidgetSwitcher::execGetWidgetAtIndex },
			{ "SetActiveWidget", &UWidgetSwitcher::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UWidgetSwitcher::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidget_Parms
		{
			UWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get the reference of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get the reference of the currently active widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::WidgetSwitcher_eventGetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidgetIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the slot index of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the slot index of the currently active widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidgetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::WidgetSwitcher_eventGetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics
	{
		struct WidgetSwitcher_eventGetNumWidgets_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetNumWidgets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the number of widgets that this switcher manages. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the number of widgets that this switcher manages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetNumWidgets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::WidgetSwitcher_eventGetNumWidgets_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics
	{
		struct WidgetSwitcher_eventGetWidgetAtIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get a widget at the provided index */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get a widget at the provided index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetWidgetAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::WidgetSwitcher_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidget_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget and makes it the active index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget and makes it the active index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::WidgetSwitcher_eventSetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidgetIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget at the specified index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget at the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::WidgetSwitcher_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSwitcher);
	UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister()
	{
		return UWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetSwitcher_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget, "GetActiveWidget" }, // 3296929237
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 2003886939
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets, "GetNumWidgets" }, // 2800178216
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 2300480435
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget, "SetActiveWidget" }, // 1226314998
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 1761422087
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget switcher is like a tab control, but without tabs. At most one widget is visible at time.\n */" },
		{ "IncludePath", "Components/WidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "BlueprintGetter", "GetActiveWidgetIndex" },
		{ "BlueprintSetter", "SetActiveWidgetIndex" },
		{ "Category", "Switcher" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The slot index to display */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "The slot index to display" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWidgetSwitcher::SetActiveWidgetIndex_WrapperImpl, &UWidgetSwitcher::GetActiveWidgetIndex_WrapperImpl, STRUCT_OFFSET(UWidgetSwitcher, ActiveWidgetIndex), METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams = {
		&UWidgetSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetSwitcher()
	{
		if (!Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton, Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetSwitcher>()
	{
		return UWidgetSwitcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcher);
	UWidgetSwitcher::~UWidgetSwitcher() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UWidgetSwitcher, ActiveWidgetIndex)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UWidgetSwitcher)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UWidgetSwitcher, ActiveWidgetIndex)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UWidgetSwitcher);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSwitcher, UWidgetSwitcher::StaticClass, TEXT("UWidgetSwitcher"), &Z_Registration_Info_UClass_UWidgetSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSwitcher), 1879958155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_326105087(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
