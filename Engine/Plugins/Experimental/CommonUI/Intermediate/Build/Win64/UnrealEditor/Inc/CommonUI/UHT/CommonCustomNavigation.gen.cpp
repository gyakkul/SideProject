// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonCustomNavigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonCustomNavigation() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonCustomNavigation();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonCustomNavigation_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics
	{
		struct CommonCustomNavigation_eventOnCustomNavigationEvent_Parms
		{
			EUINavigation NavigationType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NavigationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NavigationType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType = { "NavigationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonCustomNavigation_eventOnCustomNavigationEvent_Parms, NavigationType), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) }; // 637548137
	void Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonCustomNavigation_eventOnCustomNavigationEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonCustomNavigation_eventOnCustomNavigationEvent_Parms), &Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonCustomNavigation, nullptr, "OnCustomNavigationEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::CommonCustomNavigation_eventOnCustomNavigationEvent_Parms), Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool UCommonCustomNavigation::FOnCustomNavigationEvent_DelegateWrapper(const FScriptDelegate& OnCustomNavigationEvent, EUINavigation NavigationType)
{
	struct CommonCustomNavigation_eventOnCustomNavigationEvent_Parms
	{
		EUINavigation NavigationType;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CommonCustomNavigation_eventOnCustomNavigationEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	CommonCustomNavigation_eventOnCustomNavigationEvent_Parms Parms;
	Parms.NavigationType=NavigationType;
	OnCustomNavigationEvent.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	void UCommonCustomNavigation::StaticRegisterNativesUCommonCustomNavigation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonCustomNavigation);
	UClass* Z_Construct_UClass_UCommonCustomNavigation_NoRegister()
	{
		return UCommonCustomNavigation::StaticClass();
	}
	struct Z_Construct_UClass_UCommonCustomNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNavigationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNavigationEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonCustomNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonCustomNavigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature, "OnCustomNavigationEvent__DelegateSignature" }, // 1140306505
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * Exposes a bindable event that can be used to stomp default border navigation with custom behaviors.\n */" },
		{ "DisplayName", "Common Custom Navigation" },
		{ "IncludePath", "CommonCustomNavigation.h" },
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
		{ "ToolTip", "Exposes a bindable event that can be used to stomp default border navigation with custom behaviors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Return true if the Navigation has been handled */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
		{ "ToolTip", "Return true if the Navigation has been handled" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent = { "OnNavigationEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonCustomNavigation, OnNavigationEvent), Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData)) }; // 1140306505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonCustomNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonCustomNavigation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonCustomNavigation_Statics::ClassParams = {
		&UCommonCustomNavigation::StaticClass,
		"CommonUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonCustomNavigation()
	{
		if (!Z_Registration_Info_UClass_UCommonCustomNavigation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonCustomNavigation.OuterSingleton, Z_Construct_UClass_UCommonCustomNavigation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonCustomNavigation.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonCustomNavigation>()
	{
		return UCommonCustomNavigation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonCustomNavigation);
	UCommonCustomNavigation::~UCommonCustomNavigation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonCustomNavigation, UCommonCustomNavigation::StaticClass, TEXT("UCommonCustomNavigation"), &Z_Registration_Info_UClass_UCommonCustomNavigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonCustomNavigation), 788191409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_3027381557(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
