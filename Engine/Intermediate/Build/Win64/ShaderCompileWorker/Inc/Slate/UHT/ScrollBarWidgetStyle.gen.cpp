// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/ScrollBarWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBarWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScrollBarWidgetStyle);
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister()
	{
		return UScrollBarWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBarWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBarWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBarWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ScrollBarWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the scrollbox's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the scrollbox's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScrollBarWidgetStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBarWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBarWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScrollBarWidgetStyle_Statics::ClassParams = {
		&UScrollBarWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton, Z_Construct_UClass_UScrollBarWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UScrollBarWidgetStyle>()
	{
		return UScrollBarWidgetStyle::StaticClass();
	}
	UScrollBarWidgetStyle::UScrollBarWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBarWidgetStyle);
	UScrollBarWidgetStyle::~UScrollBarWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScrollBarWidgetStyle, UScrollBarWidgetStyle::StaticClass, TEXT("UScrollBarWidgetStyle"), &Z_Registration_Info_UClass_UScrollBarWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScrollBarWidgetStyle), 398613819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_2109990766(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
