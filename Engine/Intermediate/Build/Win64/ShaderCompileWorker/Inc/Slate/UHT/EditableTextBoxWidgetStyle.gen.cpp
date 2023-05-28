// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/EditableTextBoxWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UEditableTextBoxWidgetStyle::StaticRegisterNativesUEditableTextBoxWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableTextBoxWidgetStyle);
	UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister()
	{
		return UEditableTextBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/EditableTextBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle = { "EditableTextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableTextBoxWidgetStyle, EditableTextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle_MetaData)) }; // 255857817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableTextBoxWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::ClassParams = {
		&UEditableTextBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UEditableTextBoxWidgetStyle>()
	{
		return UEditableTextBoxWidgetStyle::StaticClass();
	}
	UEditableTextBoxWidgetStyle::UEditableTextBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextBoxWidgetStyle);
	UEditableTextBoxWidgetStyle::~UEditableTextBoxWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditableTextBoxWidgetStyle, UEditableTextBoxWidgetStyle::StaticClass, TEXT("UEditableTextBoxWidgetStyle"), &Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableTextBoxWidgetStyle), 34795980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_2997394548(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
