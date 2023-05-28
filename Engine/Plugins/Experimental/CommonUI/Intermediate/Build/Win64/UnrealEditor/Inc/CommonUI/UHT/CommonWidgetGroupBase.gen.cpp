// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/CommonWidgetGroupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetGroupBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonWidgetGroupBase::execRemoveAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetGroupBase::execRemoveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_InWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_InWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetGroupBase::execAddWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_InWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_InWidget);
		P_NATIVE_END;
	}
	void UCommonWidgetGroupBase::StaticRegisterNativesUCommonWidgetGroupBase()
	{
		UClass* Class = UCommonWidgetGroupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UCommonWidgetGroupBase::execAddWidget },
			{ "RemoveAll", &UCommonWidgetGroupBase::execRemoveAll },
			{ "RemoveWidget", &UCommonWidgetGroupBase::execRemoveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics
	{
		struct CommonWidgetGroupBase_eventAddWidget_Parms
		{
			UWidget* InWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetGroupBase_eventAddWidget_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Groups/CommonWidgetGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::CommonWidgetGroupBase_eventAddWidget_Parms), Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Groups/CommonWidgetGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, nullptr, "RemoveAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics
	{
		struct CommonWidgetGroupBase_eventRemoveWidget_Parms
		{
			UWidget* InWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetGroupBase_eventRemoveWidget_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Groups/CommonWidgetGroupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::CommonWidgetGroupBase_eventRemoveWidget_Parms), Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonWidgetGroupBase);
	UClass* Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister()
	{
		return UCommonWidgetGroupBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetGroupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetGroupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetGroupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget, "AddWidget" }, // 890660518
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll, "RemoveAll" }, // 1049607262
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget, "RemoveWidget" }, // 1574902358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@todo DanH: This is only used for buttons, so ditch the base. Also the vast majority of use cases are native, so it also shouldn't be a UObject\n" },
		{ "IncludePath", "Groups/CommonWidgetGroupBase.h" },
		{ "ModuleRelativePath", "Public/Groups/CommonWidgetGroupBase.h" },
		{ "ToolTip", "@todo DanH: This is only used for buttons, so ditch the base. Also the vast majority of use cases are native, so it also shouldn't be a UObject" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetGroupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetGroupBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetGroupBase_Statics::ClassParams = {
		&UCommonWidgetGroupBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetGroupBase()
	{
		if (!Z_Registration_Info_UClass_UCommonWidgetGroupBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonWidgetGroupBase.OuterSingleton, Z_Construct_UClass_UCommonWidgetGroupBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonWidgetGroupBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonWidgetGroupBase>()
	{
		return UCommonWidgetGroupBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetGroupBase);
	UCommonWidgetGroupBase::~UCommonWidgetGroupBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonWidgetGroupBase, UCommonWidgetGroupBase::StaticClass, TEXT("UCommonWidgetGroupBase"), &Z_Registration_Info_UClass_UCommonWidgetGroupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonWidgetGroupBase), 3838359023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_2581493811(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
