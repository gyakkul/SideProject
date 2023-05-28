// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonTreeView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTreeView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTreeView();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTreeView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonTreeView::StaticRegisterNativesUCommonTreeView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTreeView);
	UClass* Z_Construct_UClass_UCommonTreeView_NoRegister()
	{
		return UCommonTreeView::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeView,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TreeView specialized to navigate on focus for consoles & enable scrolling when not focused for touch\n */" },
		{ "IncludePath", "CommonTreeView.h" },
		{ "ModuleRelativePath", "Public/CommonTreeView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "TreeView specialized to navigate on focus for consoles & enable scrolling when not focused for touch" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTreeView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTreeView_Statics::ClassParams = {
		&UCommonTreeView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTreeView()
	{
		if (!Z_Registration_Info_UClass_UCommonTreeView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTreeView.OuterSingleton, Z_Construct_UClass_UCommonTreeView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTreeView.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTreeView>()
	{
		return UCommonTreeView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTreeView);
	UCommonTreeView::~UCommonTreeView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTreeView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTreeView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonTreeView, UCommonTreeView::StaticClass, TEXT("UCommonTreeView"), &Z_Registration_Info_UClass_UCommonTreeView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTreeView), 4287287014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTreeView_h_4034379465(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTreeView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTreeView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
