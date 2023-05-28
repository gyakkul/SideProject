// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetCarouselStyle.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetCarouselStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_WidgetCarousel();
	WIDGETCAROUSEL_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle();
	WIDGETCAROUSEL_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle();
// End Cross Module References

static_assert(std::is_polymorphic<FWidgetCarouselNavigationButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FWidgetCarouselNavigationButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle;
class UScriptStruct* FWidgetCarouselNavigationButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle, (UObject*)Z_Construct_UPackage__Script_WidgetCarousel(), TEXT("WidgetCarouselNavigationButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.OuterSingleton;
}
template<> WIDGETCAROUSEL_API UScriptStruct* StaticStruct<FWidgetCarouselNavigationButtonStyle>()
{
	return FWidgetCarouselNavigationButtonStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonLeftImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationButtonLeftImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonRightImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationButtonRightImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationButtonStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle = { "InnerButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage = { "NavigationButtonLeftImage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage = { "NavigationButtonRightImage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetCarousel,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WidgetCarouselNavigationButtonStyle",
		sizeof(FWidgetCarouselNavigationButtonStyle),
		alignof(FWidgetCarouselNavigationButtonStyle),
		Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWidgetCarouselNavigationBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FWidgetCarouselNavigationBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle;
class UScriptStruct* FWidgetCarouselNavigationBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle, (UObject*)Z_Construct_UPackage__Script_WidgetCarousel(), TEXT("WidgetCarouselNavigationBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.OuterSingleton;
}
template<> WIDGETCAROUSEL_API UScriptStruct* StaticStruct<FWidgetCarouselNavigationBarStyle>()
{
	return FWidgetCarouselNavigationBarStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationBarStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush = { "HighlightBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, HighlightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle = { "LeftButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, LeftButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle = { "CenterButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, CenterButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle = { "RightButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, RightButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData)) }; // 2024050934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetCarousel,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WidgetCarouselNavigationBarStyle",
		sizeof(FWidgetCarouselNavigationBarStyle),
		alignof(FWidgetCarouselNavigationBarStyle),
		Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h_Statics::ScriptStructInfo[] = {
		{ FWidgetCarouselNavigationButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewStructOps, TEXT("WidgetCarouselNavigationButtonStyle"), &Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetCarouselNavigationButtonStyle), 2628684491U) },
		{ FWidgetCarouselNavigationBarStyle::StaticStruct, Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewStructOps, TEXT("WidgetCarouselNavigationBarStyle"), &Z_Registration_Info_UScriptStruct_WidgetCarouselNavigationBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetCarouselNavigationBarStyle), 2371035573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h_1670823509(TEXT("/Script/WidgetCarousel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
