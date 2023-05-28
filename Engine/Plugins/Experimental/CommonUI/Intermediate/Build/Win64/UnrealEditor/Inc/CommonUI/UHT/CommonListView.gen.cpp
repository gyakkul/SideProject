// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonListView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonListView();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonListView::execSetEntrySpacing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEntrySpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntrySpacing(Z_Param_InEntrySpacing);
		P_NATIVE_END;
	}
	void UCommonListView::StaticRegisterNativesUCommonListView()
	{
		UClass* Class = UCommonListView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEntrySpacing", &UCommonListView::execSetEntrySpacing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics
	{
		struct CommonListView_eventSetEntrySpacing_Parms
		{
			float InEntrySpacing;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEntrySpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::NewProp_InEntrySpacing = { "InEntrySpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonListView_eventSetEntrySpacing_Parms, InEntrySpacing), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::NewProp_InEntrySpacing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/CommonListView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonListView, nullptr, "SetEntrySpacing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::CommonListView_eventSetEntrySpacing_Parms), Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonListView_SetEntrySpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonListView_SetEntrySpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonListView);
	UClass* Z_Construct_UClass_UCommonListView_NoRegister()
	{
		return UCommonListView::StaticClass();
	}
	struct Z_Construct_UClass_UCommonListView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonListView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonListView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonListView_SetEntrySpacing, "SetEntrySpacing" }, // 237127591
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonListView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UCommonListView\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "CommonListView.h" },
		{ "ModuleRelativePath", "Public/CommonListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCommonListView" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonListView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonListView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonListView_Statics::ClassParams = {
		&UCommonListView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonListView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonListView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonListView()
	{
		if (!Z_Registration_Info_UClass_UCommonListView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonListView.OuterSingleton, Z_Construct_UClass_UCommonListView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonListView.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonListView>()
	{
		return UCommonListView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonListView);
	UCommonListView::~UCommonListView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonListView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonListView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonListView, UCommonListView::StaticClass, TEXT("UCommonListView"), &Z_Registration_Info_UClass_UCommonListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonListView), 4005193999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonListView_h_3439201887(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonListView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
