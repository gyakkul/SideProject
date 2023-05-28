// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/ComboBoxWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UComboBoxWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UComboBoxWidgetStyle::StaticRegisterNativesUComboBoxWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxWidgetStyle);
	UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister()
	{
		return UComboBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UComboBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ComboBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the combo box's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the combo box's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle = { "ComboBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboBoxWidgetStyle, ComboBoxStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle_MetaData)) }; // 3435964422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxWidgetStyle_Statics::ClassParams = {
		&UComboBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBoxWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UComboBoxWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UComboBoxWidgetStyle>()
	{
		return UComboBoxWidgetStyle::StaticClass();
	}
	UComboBoxWidgetStyle::UComboBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxWidgetStyle);
	UComboBoxWidgetStyle::~UComboBoxWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxWidgetStyle, UComboBoxWidgetStyle::StaticClass, TEXT("UComboBoxWidgetStyle"), &Z_Registration_Info_UClass_UComboBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxWidgetStyle), 99235030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_2957930628(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
