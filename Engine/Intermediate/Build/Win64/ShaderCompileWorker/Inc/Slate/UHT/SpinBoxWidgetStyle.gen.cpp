// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/SpinBoxWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpinBoxWidgetStyle);
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_USpinBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpinBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpinBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle = { "SpinBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpinBoxWidgetStyle, SpinBoxStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData)) }; // 1730320122
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinBoxWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams = {
		&USpinBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<USpinBoxWidgetStyle>()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	USpinBoxWidgetStyle::USpinBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBoxWidgetStyle);
	USpinBoxWidgetStyle::~USpinBoxWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpinBoxWidgetStyle, USpinBoxWidgetStyle::StaticClass, TEXT("USpinBoxWidgetStyle"), &Z_Registration_Info_UClass_USpinBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinBoxWidgetStyle), 2154700974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_2213259485(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
