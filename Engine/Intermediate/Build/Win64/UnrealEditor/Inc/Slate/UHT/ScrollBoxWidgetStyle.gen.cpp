// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/ScrollBoxWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UScrollBoxWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UScrollBoxWidgetStyle::StaticRegisterNativesUScrollBoxWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScrollBoxWidgetStyle);
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister()
	{
		return UScrollBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ScrollBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the scrollbox's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the scrollbox's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle = { "ScrollBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScrollBoxWidgetStyle, ScrollBoxStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData)) }; // 3926364971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBoxWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::ClassParams = {
		&UScrollBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScrollBoxWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UScrollBoxWidgetStyle>()
	{
		return UScrollBoxWidgetStyle::StaticClass();
	}
	UScrollBoxWidgetStyle::UScrollBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBoxWidgetStyle);
	UScrollBoxWidgetStyle::~UScrollBoxWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScrollBoxWidgetStyle, UScrollBoxWidgetStyle::StaticClass, TEXT("UScrollBoxWidgetStyle"), &Z_Registration_Info_UClass_UScrollBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScrollBoxWidgetStyle), 2486773182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h_3252278552(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBoxWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
