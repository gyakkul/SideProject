// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateWidgetStyleAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void USlateWidgetStyleAsset::StaticRegisterNativesUSlateWidgetStyleAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateWidgetStyleAsset);
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister()
	{
		return USlateWidgetStyleAsset::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStyle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleAsset.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle = { "CustomStyle", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateWidgetStyleAsset, CustomStyle), Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams = {
		&USlateWidgetStyleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset()
	{
		if (!Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton, Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleAsset>()
	{
		return USlateWidgetStyleAsset::StaticClass();
	}
	USlateWidgetStyleAsset::USlateWidgetStyleAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleAsset);
	USlateWidgetStyleAsset::~USlateWidgetStyleAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateWidgetStyleAsset, USlateWidgetStyleAsset::StaticClass, TEXT("USlateWidgetStyleAsset"), &Z_Registration_Info_UClass_USlateWidgetStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateWidgetStyleAsset), 1481749446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_2362178547(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
