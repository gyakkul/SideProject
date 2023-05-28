// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidgetSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActivatableWidgetSwitcher() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonAnimatedSwitcher();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonActivatableWidgetSwitcher::StaticRegisterNativesUCommonActivatableWidgetSwitcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActivatableWidgetSwitcher);
	UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher_NoRegister()
	{
		return UCommonActivatableWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonAnimatedSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An animated switcher that knows about CommonActivatableWidgets. It can also hold other Widgets.\n */" },
		{ "IncludePath", "CommonActivatableWidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidgetSwitcher.h" },
		{ "ToolTip", "An animated switcher that knows about CommonActivatableWidgets. It can also hold other Widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActivatableWidgetSwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::ClassParams = {
		&UCommonActivatableWidgetSwitcher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher()
	{
		if (!Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.OuterSingleton, Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActivatableWidgetSwitcher>()
	{
		return UCommonActivatableWidgetSwitcher::StaticClass();
	}
	UCommonActivatableWidgetSwitcher::UCommonActivatableWidgetSwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActivatableWidgetSwitcher);
	UCommonActivatableWidgetSwitcher::~UCommonActivatableWidgetSwitcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonActivatableWidgetSwitcher, UCommonActivatableWidgetSwitcher::StaticClass, TEXT("UCommonActivatableWidgetSwitcher"), &Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActivatableWidgetSwitcher), 1302148719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_3000476299(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
