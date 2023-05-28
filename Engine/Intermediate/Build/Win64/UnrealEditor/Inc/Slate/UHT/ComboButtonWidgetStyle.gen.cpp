// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/ComboButtonWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboButtonWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboButtonWidgetStyle);
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UComboButtonWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboButtonWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ComboButtonWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the combo button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the combo button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComboButtonWidgetStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData)) }; // 3302369615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboButtonWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboButtonWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboButtonWidgetStyle_Statics::ClassParams = {
		&UComboButtonWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton, Z_Construct_UClass_UComboButtonWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboButtonWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UComboButtonWidgetStyle>()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	UComboButtonWidgetStyle::UComboButtonWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboButtonWidgetStyle);
	UComboButtonWidgetStyle::~UComboButtonWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboButtonWidgetStyle, UComboButtonWidgetStyle::StaticClass, TEXT("UComboButtonWidgetStyle"), &Z_Registration_Info_UClass_UComboButtonWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboButtonWidgetStyle), 2700521442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h_122862328(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboButtonWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
