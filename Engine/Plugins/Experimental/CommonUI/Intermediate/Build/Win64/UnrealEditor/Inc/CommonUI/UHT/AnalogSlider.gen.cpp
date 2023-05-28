// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnalogSlider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalogSlider() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider();
	COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UAnalogSlider::StaticRegisterNativesUAnalogSlider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalogSlider);
	UClass* Z_Construct_UClass_UAnalogSlider_NoRegister()
	{
		return UAnalogSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAnalogSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnalogCapture_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnalogCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalogSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlider,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
		{ "IncludePath", "AnalogSlider.h" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture = { "OnAnalogCapture", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalogSlider, OnAnalogCapture), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData)) }; // 74366326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalogSlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalogSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalogSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalogSlider_Statics::ClassParams = {
		&UAnalogSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalogSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalogSlider()
	{
		if (!Z_Registration_Info_UClass_UAnalogSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalogSlider.OuterSingleton, Z_Construct_UClass_UAnalogSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalogSlider.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UAnalogSlider>()
	{
		return UAnalogSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalogSlider);
	UAnalogSlider::~UAnalogSlider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_AnalogSlider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_AnalogSlider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalogSlider, UAnalogSlider::StaticClass, TEXT("UAnalogSlider"), &Z_Registration_Info_UClass_UAnalogSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalogSlider), 2393395735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_AnalogSlider_h_2608537489(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_AnalogSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_AnalogSlider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
