// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonHierarchicalScrollBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonHierarchicalScrollBox() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonHierarchicalScrollBox::StaticRegisterNativesUCommonHierarchicalScrollBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonHierarchicalScrollBox);
	UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister()
	{
		return UCommonHierarchicalScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScrollBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization.\n */" },
		{ "IncludePath", "CommonHierarchicalScrollBox.h" },
		{ "ModuleRelativePath", "Public/CommonHierarchicalScrollBox.h" },
		{ "ToolTip", "An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonHierarchicalScrollBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::ClassParams = {
		&UCommonHierarchicalScrollBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox()
	{
		if (!Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.OuterSingleton, Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonHierarchicalScrollBox.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonHierarchicalScrollBox>()
	{
		return UCommonHierarchicalScrollBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonHierarchicalScrollBox);
	UCommonHierarchicalScrollBox::~UCommonHierarchicalScrollBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonHierarchicalScrollBox, UCommonHierarchicalScrollBox::StaticClass, TEXT("UCommonHierarchicalScrollBox"), &Z_Registration_Info_UClass_UCommonHierarchicalScrollBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonHierarchicalScrollBox), 726369808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_2304037797(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
