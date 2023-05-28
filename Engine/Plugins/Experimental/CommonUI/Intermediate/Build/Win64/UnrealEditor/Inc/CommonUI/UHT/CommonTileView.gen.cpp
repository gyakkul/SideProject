// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonTileView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTileView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTileView();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTileView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonTileView::StaticRegisterNativesUCommonTileView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonTileView);
	UClass* Z_Construct_UClass_UCommonTileView_NoRegister()
	{
		return UCommonTileView::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTileView,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TileView specialized to navigate on focus for consoles & enable scrolling when not focused for touch\n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonTileView.h" },
		{ "ModuleRelativePath", "Public/CommonTileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "TileView specialized to navigate on focus for consoles & enable scrolling when not focused for touch" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTileView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonTileView_Statics::ClassParams = {
		&UCommonTileView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTileView()
	{
		if (!Z_Registration_Info_UClass_UCommonTileView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonTileView.OuterSingleton, Z_Construct_UClass_UCommonTileView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonTileView.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonTileView>()
	{
		return UCommonTileView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTileView);
	UCommonTileView::~UCommonTileView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTileView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTileView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonTileView, UCommonTileView::StaticClass, TEXT("UCommonTileView"), &Z_Registration_Info_UClass_UCommonTileView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonTileView), 2519886767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTileView_h_3709796930(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTileView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTileView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
