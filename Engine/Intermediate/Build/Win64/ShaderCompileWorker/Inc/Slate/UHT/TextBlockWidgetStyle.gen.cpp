// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/TextBlockWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlockWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextBlockWidgetStyle);
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UTextBlockWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlockStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBlockStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBlockWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/TextBlockWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle = { "TextBlockStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextBlockWidgetStyle, TextBlockStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData)) }; // 622949925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBlockWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBlockWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextBlockWidgetStyle_Statics::ClassParams = {
		&UTextBlockWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton, Z_Construct_UClass_UTextBlockWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextBlockWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UTextBlockWidgetStyle>()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	UTextBlockWidgetStyle::UTextBlockWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlockWidgetStyle);
	UTextBlockWidgetStyle::~UTextBlockWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextBlockWidgetStyle, UTextBlockWidgetStyle::StaticClass, TEXT("UTextBlockWidgetStyle"), &Z_Registration_Info_UClass_UTextBlockWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextBlockWidgetStyle), 3192629788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h_944462201(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_TextBlockWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
