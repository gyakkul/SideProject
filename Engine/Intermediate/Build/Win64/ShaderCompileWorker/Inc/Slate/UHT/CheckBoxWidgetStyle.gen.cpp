// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/CheckBoxWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UCheckBoxWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UCheckBoxWidgetStyle::StaticRegisterNativesUCheckBoxWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBoxWidgetStyle);
	UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister()
	{
		return UCheckBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/CheckBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/CheckBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/CheckBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCheckBoxWidgetStyle, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle_MetaData)) }; // 1946304471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::ClassParams = {
		&UCheckBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBoxWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UCheckBoxWidgetStyle>()
	{
		return UCheckBoxWidgetStyle::StaticClass();
	}
	UCheckBoxWidgetStyle::UCheckBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxWidgetStyle);
	UCheckBoxWidgetStyle::~UCheckBoxWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBoxWidgetStyle, UCheckBoxWidgetStyle::StaticClass, TEXT("UCheckBoxWidgetStyle"), &Z_Registration_Info_UClass_UCheckBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBoxWidgetStyle), 200746493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_1833065164(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
