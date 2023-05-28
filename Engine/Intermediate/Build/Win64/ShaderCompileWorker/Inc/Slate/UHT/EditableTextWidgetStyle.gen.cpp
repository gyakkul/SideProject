// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/EditableTextWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UEditableTextWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UEditableTextWidgetStyle::StaticRegisterNativesUEditableTextWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableTextWidgetStyle);
	UClass* Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister()
	{
		return UEditableTextWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UEditableTextWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableTextWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/EditableTextWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextWidgetStyle_Statics::NewProp_EditableTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextWidgetStyle_Statics::NewProp_EditableTextStyle = { "EditableTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableTextWidgetStyle, EditableTextStyle), Z_Construct_UScriptStruct_FEditableTextStyle, METADATA_PARAMS(Z_Construct_UClass_UEditableTextWidgetStyle_Statics::NewProp_EditableTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidgetStyle_Statics::NewProp_EditableTextStyle_MetaData)) }; // 2363878413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableTextWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextWidgetStyle_Statics::NewProp_EditableTextStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableTextWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableTextWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableTextWidgetStyle_Statics::ClassParams = {
		&UEditableTextWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableTextWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableTextWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableTextWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton, Z_Construct_UClass_UEditableTextWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableTextWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UEditableTextWidgetStyle>()
	{
		return UEditableTextWidgetStyle::StaticClass();
	}
	UEditableTextWidgetStyle::UEditableTextWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextWidgetStyle);
	UEditableTextWidgetStyle::~UEditableTextWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditableTextWidgetStyle, UEditableTextWidgetStyle::StaticClass, TEXT("UEditableTextWidgetStyle"), &Z_Registration_Info_UClass_UEditableTextWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableTextWidgetStyle), 3075500678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_3122372936(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
