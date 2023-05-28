// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Notifications/SProgressBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProgressBar() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillStyle();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProgressBarFillType;
	static UEnum* EProgressBarFillType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EProgressBarFillType"));
		}
		return Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EProgressBarFillType::Type>()
	{
		return EProgressBarFillType_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EProgressBarFillType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enumerators[] = {
		{ "EProgressBarFillType::LeftToRight", (int64)EProgressBarFillType::LeftToRight },
		{ "EProgressBarFillType::RightToLeft", (int64)EProgressBarFillType::RightToLeft },
		{ "EProgressBarFillType::FillFromCenter", (int64)EProgressBarFillType::FillFromCenter },
		{ "EProgressBarFillType::FillFromCenterHorizontal", (int64)EProgressBarFillType::FillFromCenterHorizontal },
		{ "EProgressBarFillType::FillFromCenterVertical", (int64)EProgressBarFillType::FillFromCenterVertical },
		{ "EProgressBarFillType::TopToBottom", (int64)EProgressBarFillType::TopToBottom },
		{ "EProgressBarFillType::BottomToTop", (int64)EProgressBarFillType::BottomToTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomToTop.Comment", "// will fill up from the bottom to the the top\n" },
		{ "BottomToTop.Name", "EProgressBarFillType::BottomToTop" },
		{ "BottomToTop.ToolTip", "will fill up from the bottom to the the top" },
		{ "Comment", "/**\n * SProgressBar Fill Type \n */" },
		{ "FillFromCenter.Comment", "// will scale up from the midpoint to the outer edges both vertically and horizontally\n" },
		{ "FillFromCenter.Name", "EProgressBarFillType::FillFromCenter" },
		{ "FillFromCenter.ToolTip", "will scale up from the midpoint to the outer edges both vertically and horizontally" },
		{ "FillFromCenterHorizontal.Comment", "// will fill up from the centerline to the outer edges horizontally\n" },
		{ "FillFromCenterHorizontal.Name", "EProgressBarFillType::FillFromCenterHorizontal" },
		{ "FillFromCenterHorizontal.ToolTip", "will fill up from the centerline to the outer edges horizontally" },
		{ "FillFromCenterVertical.Comment", "// will fill up from the centerline to the outer edges vertically\n" },
		{ "FillFromCenterVertical.Name", "EProgressBarFillType::FillFromCenterVertical" },
		{ "FillFromCenterVertical.ToolTip", "will fill up from the centerline to the outer edges vertically" },
		{ "LeftToRight.Comment", "// will fill up from the left side to the right\n" },
		{ "LeftToRight.Name", "EProgressBarFillType::LeftToRight" },
		{ "LeftToRight.ToolTip", "will fill up from the left side to the right" },
		{ "ModuleRelativePath", "Public/Widgets/Notifications/SProgressBar.h" },
		{ "RightToLeft.Comment", "// will fill up from the right side to the left side\n" },
		{ "RightToLeft.Name", "EProgressBarFillType::RightToLeft" },
		{ "RightToLeft.ToolTip", "will fill up from the right side to the left side" },
		{ "ToolTip", "SProgressBar Fill Type" },
		{ "TopToBottom.Comment", "// will fill up from the top to the the bottom\n" },
		{ "TopToBottom.Name", "EProgressBarFillType::TopToBottom" },
		{ "TopToBottom.ToolTip", "will fill up from the top to the the bottom" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EProgressBarFillType",
		"EProgressBarFillType::Type",
		Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType()
	{
		if (!Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton, Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProgressBarFillStyle;
	static UEnum* EProgressBarFillStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillStyle, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EProgressBarFillStyle"));
		}
		return Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EProgressBarFillStyle::Type>()
	{
		return EProgressBarFillStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enumerators[] = {
		{ "EProgressBarFillStyle::Mask", (int64)EProgressBarFillStyle::Mask },
		{ "EProgressBarFillStyle::Scale", (int64)EProgressBarFillStyle::Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SProgressBar Fill Style\n */" },
		{ "Mask.Comment", "// a mask is used to paint the fill image\n" },
		{ "Mask.Name", "EProgressBarFillStyle::Mask" },
		{ "Mask.ToolTip", "a mask is used to paint the fill image" },
		{ "ModuleRelativePath", "Public/Widgets/Notifications/SProgressBar.h" },
		{ "Scale.Comment", "// the fill image is scaled to the fill percentage\n" },
		{ "Scale.Name", "EProgressBarFillStyle::Scale" },
		{ "Scale.ToolTip", "the fill image is scaled to the fill percentage" },
		{ "ToolTip", "SProgressBar Fill Style" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EProgressBarFillStyle",
		"EProgressBarFillStyle::Type",
		Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EProgressBarFillStyle()
	{
		if (!Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton, Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h_Statics::EnumInfo[] = {
		{ EProgressBarFillType_StaticEnum, TEXT("EProgressBarFillType"), &Z_Registration_Info_UEnum_EProgressBarFillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 438747145U) },
		{ EProgressBarFillStyle_StaticEnum, TEXT("EProgressBarFillStyle"), &Z_Registration_Info_UEnum_EProgressBarFillStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1326948045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h_1122028963(TEXT("/Script/Slate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
