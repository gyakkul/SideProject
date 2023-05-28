// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Styling/ProgressWidgetStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle();
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgressWidgetStyle);
	UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UProgressWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressBarStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ProgressWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle = { "ProgressBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProgressWidgetStyle, ProgressBarStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData)) }; // 3431683467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams = {
		&UProgressWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton, Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UProgressWidgetStyle>()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	UProgressWidgetStyle::UProgressWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressWidgetStyle);
	UProgressWidgetStyle::~UProgressWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProgressWidgetStyle, UProgressWidgetStyle::StaticClass, TEXT("UProgressWidgetStyle"), &Z_Registration_Info_UClass_UProgressWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressWidgetStyle), 3153034820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_1263524973(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
