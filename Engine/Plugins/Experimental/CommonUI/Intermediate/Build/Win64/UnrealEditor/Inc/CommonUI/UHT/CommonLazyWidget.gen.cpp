// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLazyWidget.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLazyWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonLazyWidget::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyWidget::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyWidget::execSetLazyContent)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_SoftWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLazyContent(Z_Param_SoftWidget);
		P_NATIVE_END;
	}
	void UCommonLazyWidget::StaticRegisterNativesUCommonLazyWidget()
	{
		UClass* Class = UCommonLazyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContent", &UCommonLazyWidget::execGetContent },
			{ "IsLoading", &UCommonLazyWidget::execIsLoading },
			{ "SetLazyContent", &UCommonLazyWidget::execSetLazyContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics
	{
		struct CommonLazyWidget_eventGetContent_Parms
		{
			UUserWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyWidget_eventGetContent_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyContent" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyWidget, nullptr, "GetContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::CommonLazyWidget_eventGetContent_Parms), Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyWidget_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyWidget_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics
	{
		struct CommonLazyWidget_eventIsLoading_Parms
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
	void Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLazyWidget_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLazyWidget_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyContent" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyWidget, nullptr, "IsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::CommonLazyWidget_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyWidget_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics
	{
		struct CommonLazyWidget_eventSetLazyContent_Parms
		{
			TSoftClassPtr<UUserWidget>  SoftWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftWidget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget = { "SoftWidget", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyWidget_eventSetLazyContent_Parms, SoftWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyContent" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyWidget, nullptr, "SetLazyContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::CommonLazyWidget_eventSetLazyContent_Parms), Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonLazyWidget);
	UClass* Z_Construct_UClass_UCommonLazyWidget_NoRegister()
	{
		return UCommonLazyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLazyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLazyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLazyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLazyWidget_GetContent, "GetContent" }, // 3246243166
		{ &Z_Construct_UFunction_UCommonLazyWidget_IsLoading, "IsLoading" }, // 2915762359
		{ &Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent, "SetLazyContent" }, // 1802645489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A special Image widget that can show unloaded images and takes care of the loading for you!\n */" },
		{ "IncludePath", "CommonLazyWidget.h" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
		{ "ToolTip", "A special Image widget that can show unloaded images and takes care of the loading for you!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush = { "LoadingBackgroundBrush", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyWidget, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyWidget, Content), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "Category", "LazyImage" },
		{ "DisplayName", "On Loading State Changed" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
		{ "ScriptName", "OnLoadingStateChanged" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged = { "BP_OnLoadingStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyWidget, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) }; // 2194747320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLazyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLazyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonLazyWidget_Statics::ClassParams = {
		&UCommonLazyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLazyWidget()
	{
		if (!Z_Registration_Info_UClass_UCommonLazyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonLazyWidget.OuterSingleton, Z_Construct_UClass_UCommonLazyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonLazyWidget.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonLazyWidget>()
	{
		return UCommonLazyWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLazyWidget);
	UCommonLazyWidget::~UCommonLazyWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonLazyWidget, UCommonLazyWidget::StaticClass, TEXT("UCommonLazyWidget"), &Z_Registration_Info_UClass_UCommonLazyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonLazyWidget), 343698095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_2544107563(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
