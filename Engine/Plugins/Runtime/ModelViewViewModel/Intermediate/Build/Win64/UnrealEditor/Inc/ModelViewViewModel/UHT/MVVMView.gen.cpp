// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "View/MVVMView.h"
#include "Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMView() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMView::execSetViewModel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModelName);
		P_GET_TINTERFACE(INotifyFieldValueChanged,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetViewModel(Z_Param_ViewModelName,Z_Param_ViewModel);
		P_NATIVE_END;
	}
	void UMVVMView::StaticRegisterNativesUMVVMView()
	{
		UClass* Class = UMVVMView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetViewModel", &UMVVMView::execSetViewModel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMView_SetViewModel_Statics
	{
		struct MVVMView_eventSetViewModel_Parms
		{
			FName ViewModelName;
			TScriptInterface<INotifyFieldValueChanged> ViewModel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModelName;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ViewModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModelName = { "ViewModelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMView_eventSetViewModel_Parms, ViewModelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMView_eventSetViewModel_Parms, ViewModel), Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMView_eventSetViewModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMView_eventSetViewModel_Parms), &Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"MVVM\")\n//bool IsLibraryBindingEnabled(FGuid ViewModelId, FMVVMBindingName BindingName) const;\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MVVM\")\nbool IsLibraryBindingEnabled(FGuid ViewModelId, FMVVMBindingName BindingName) const;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "SetViewModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::MVVMView_eventSetViewModel_Parms), Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMView_SetViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMView);
	UClass* Z_Construct_UClass_UMVVMView_NoRegister()
	{
		return UMVVMView::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassExtension_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClassExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidgetExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMView_SetViewModel, "SetViewModel" }, // 149732932
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Instance UMVVMClassExtension_View for the UUserWdiget\n */" },
		{ "DisplayName", "MVVM View" },
		{ "IncludePath", "View/MVVMView.h" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Instance UMVVMClassExtension_View for the UUserWdiget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension = { "ClassExtension", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMView, ClassExtension), Z_Construct_UClass_UMVVMViewClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMView_Statics::ClassParams = {
		&UMVVMView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::PropPointers),
		0,
		0x00B000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMView()
	{
		if (!Z_Registration_Info_UClass_UMVVMView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMView.OuterSingleton, Z_Construct_UClass_UMVVMView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMView.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMView>()
	{
		return UMVVMView::StaticClass();
	}
	UMVVMView::UMVVMView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMView);
	UMVVMView::~UMVVMView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMView, UMVVMView::StaticClass, TEXT("UMVVMView"), &Z_Registration_Info_UClass_UMVVMView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMView), 2989440707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_606968838(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
