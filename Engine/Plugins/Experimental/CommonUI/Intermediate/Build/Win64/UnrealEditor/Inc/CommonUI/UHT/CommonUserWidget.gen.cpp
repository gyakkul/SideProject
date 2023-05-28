// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonUserWidget::execSetConsumePointerInput)
	{
		P_GET_UBOOL(Z_Param_bInConsumePointerInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumePointerInput(Z_Param_bInConsumePointerInput);
		P_NATIVE_END;
	}
	void UCommonUserWidget::StaticRegisterNativesUCommonUserWidget()
	{
		UClass* Class = UCommonUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetConsumePointerInput", &UCommonUserWidget::execSetConsumePointerInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics
	{
		struct CommonUserWidget_eventSetConsumePointerInput_Parms
		{
			bool bInConsumePointerInput;
		};
		static void NewProp_bInConsumePointerInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInConsumePointerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput_SetBit(void* Obj)
	{
		((CommonUserWidget_eventSetConsumePointerInput_Parms*)Obj)->bInConsumePointerInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput = { "bInConsumePointerInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserWidget_eventSetConsumePointerInput_Parms), &Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonUserWidget" },
		{ "Comment", "/** Sets whether or not this widget will consume ALL pointer input that reaches it */" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
		{ "ToolTip", "Sets whether or not this widget will consume ALL pointer input that reaches it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserWidget, nullptr, "SetConsumePointerInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::CommonUserWidget_eventSetConsumePointerInput_Parms), Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUserWidget);
	UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister()
	{
		return UCommonUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInActionBar_MetaData[];
#endif
		static void NewProp_bDisplayInActionBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInActionBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumePointerInput_MetaData[];
#endif
		static void NewProp_bConsumePointerInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumePointerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput, "SetConsumePointerInput" }, // 3671665885
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonUserWidget.h" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "Comment", "/** True to generally display this widget's actions in the action bar, assuming it has actions. */" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
		{ "ToolTip", "True to generally display this widget's actions in the action bar, assuming it has actions." },
	};
#endif
	void Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar_SetBit(void* Obj)
	{
		((UCommonUserWidget*)Obj)->bDisplayInActionBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar = { "bDisplayInActionBar", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUserWidget), &Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "Comment", "/** Set this to true if you don't want any pointer (mouse and touch) input to bubble past this widget */" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
		{ "ToolTip", "Set this to true if you don't want any pointer (mouse and touch) input to bubble past this widget" },
	};
#endif
	void Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_SetBit(void* Obj)
	{
		((UCommonUserWidget*)Obj)->bConsumePointerInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput = { "bConsumePointerInput", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUserWidget), &Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bDisplayInActionBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserWidget_Statics::ClassParams = {
		&UCommonUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUserWidget()
	{
		if (!Z_Registration_Info_UClass_UCommonUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserWidget.OuterSingleton, Z_Construct_UClass_UCommonUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUserWidget.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUserWidget>()
	{
		return UCommonUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserWidget);
	UCommonUserWidget::~UCommonUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserWidget, UCommonUserWidget::StaticClass, TEXT("UCommonUserWidget"), &Z_Registration_Info_UClass_UCommonUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserWidget), 1051459230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_3852087211(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
