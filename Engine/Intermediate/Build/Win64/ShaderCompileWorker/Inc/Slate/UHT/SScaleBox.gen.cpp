// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Layout/SScaleBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSScaleBox() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStretchDirection;
	static UEnum* EStretchDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretchDirection, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EStretchDirection"));
		}
		return Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EStretchDirection::Type>()
	{
		return EStretchDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EStretchDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enumerators[] = {
		{ "EStretchDirection::Both", (int64)EStretchDirection::Both },
		{ "EStretchDirection::DownOnly", (int64)EStretchDirection::DownOnly },
		{ "EStretchDirection::UpOnly", (int64)EStretchDirection::UpOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "/** Will scale the content up or down. */" },
		{ "Both.Name", "EStretchDirection::Both" },
		{ "Both.ToolTip", "Will scale the content up or down." },
		{ "DownOnly.Comment", "/** Will only make the content smaller, will never scale it larger than the content's desired size. */" },
		{ "DownOnly.Name", "EStretchDirection::DownOnly" },
		{ "DownOnly.ToolTip", "Will only make the content smaller, will never scale it larger than the content's desired size." },
		{ "ModuleRelativePath", "Public/Widgets/Layout/SScaleBox.h" },
		{ "UpOnly.Comment", "/** Will only make the content larger, will never scale it smaller than the content's desired size. */" },
		{ "UpOnly.Name", "EStretchDirection::UpOnly" },
		{ "UpOnly.ToolTip", "Will only make the content larger, will never scale it smaller than the content's desired size." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EStretchDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EStretchDirection",
		"EStretchDirection::Type",
		Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EStretchDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EStretchDirection()
	{
		if (!Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton, Z_Construct_UEnum_Slate_EStretchDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStretch;
	static UEnum* EStretch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStretch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStretch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EStretch, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EStretch"));
		}
		return Z_Registration_Info_UEnum_EStretch.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EStretch::Type>()
	{
		return EStretch_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EStretch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EStretch_Statics::Enumerators[] = {
		{ "EStretch::None", (int64)EStretch::None },
		{ "EStretch::Fill", (int64)EStretch::Fill },
		{ "EStretch::ScaleToFit", (int64)EStretch::ScaleToFit },
		{ "EStretch::ScaleToFitX", (int64)EStretch::ScaleToFitX },
		{ "EStretch::ScaleToFitY", (int64)EStretch::ScaleToFitY },
		{ "EStretch::ScaleToFill", (int64)EStretch::ScaleToFill },
		{ "EStretch::ScaleBySafeZone", (int64)EStretch::ScaleBySafeZone },
		{ "EStretch::UserSpecified", (int64)EStretch::UserSpecified },
		{ "EStretch::UserSpecifiedWithClipping", (int64)EStretch::UserSpecifiedWithClipping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EStretch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fill.Comment", "/** Scales the content non-uniformly filling the entire space of the area. */" },
		{ "Fill.Name", "EStretch::Fill" },
		{ "Fill.ToolTip", "Scales the content non-uniformly filling the entire space of the area." },
		{ "ModuleRelativePath", "Public/Widgets/Layout/SScaleBox.h" },
		{ "None.Comment", "/** Does not scale the content. */" },
		{ "None.Name", "EStretch::None" },
		{ "None.ToolTip", "Does not scale the content." },
		{ "ScaleBySafeZone.Comment", "/** Scales the content according to the size of the safe zone currently applied to the viewport. */" },
		{ "ScaleBySafeZone.Name", "EStretch::ScaleBySafeZone" },
		{ "ScaleBySafeZone.ToolTip", "Scales the content according to the size of the safe zone currently applied to the viewport." },
		{ "ScaleToFill.Comment", "/**\n\x09\x09 * Scales the content uniformly (preserving aspect ratio), until all sides meet \n\x09\x09 * or exceed the size of the area.  Will result in clipping the longer side.\n\x09\x09 */" },
		{ "ScaleToFill.Name", "EStretch::ScaleToFill" },
		{ "ScaleToFill.ToolTip", "Scales the content uniformly (preserving aspect ratio), until all sides meet\nor exceed the size of the area.  Will result in clipping the longer side." },
		{ "ScaleToFit.Comment", "/**\n\x09\x09 * Scales the content uniformly (preserving aspect ratio) \n\x09\x09 * until it can no longer scale the content without clipping it.\n\x09\x09 */" },
		{ "ScaleToFit.Name", "EStretch::ScaleToFit" },
		{ "ScaleToFit.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it." },
		{ "ScaleToFitX.Comment", "/**\n\x09\x09 * Scales the content uniformly (preserving aspect ratio) \n\x09\x09 * until it can no longer scale the content without clipping it along the x-axis, \n\x09\x09 * the y-axis can/will be clipped.\n\x09\x09 */" },
		{ "ScaleToFitX.Name", "EStretch::ScaleToFitX" },
		{ "ScaleToFitX.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the x-axis,\nthe y-axis can/will be clipped." },
		{ "ScaleToFitY.Comment", "/**\n\x09\x09 * Scales the content uniformly (preserving aspect ratio) \n\x09\x09 * until it can no longer scale the content without clipping it along the y-axis, \n\x09\x09 * the x-axis can/will be clipped.\n\x09\x09 */" },
		{ "ScaleToFitY.Name", "EStretch::ScaleToFitY" },
		{ "ScaleToFitY.ToolTip", "Scales the content uniformly (preserving aspect ratio)\nuntil it can no longer scale the content without clipping it along the y-axis,\nthe x-axis can/will be clipped." },
		{ "UserSpecified.Comment", "/** Scales the content by the scale specified by the user. */" },
		{ "UserSpecified.Name", "EStretch::UserSpecified" },
		{ "UserSpecified.ToolTip", "Scales the content by the scale specified by the user." },
		{ "UserSpecifiedWithClipping.Comment", "/** Scales the content by the scale specified by the user and also clips. */" },
		{ "UserSpecifiedWithClipping.Name", "EStretch::UserSpecifiedWithClipping" },
		{ "UserSpecifiedWithClipping.ToolTip", "Scales the content by the scale specified by the user and also clips." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EStretch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EStretch",
		"EStretch::Type",
		Z_Construct_UEnum_Slate_EStretch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EStretch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EStretch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EStretch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EStretch()
	{
		if (!Z_Registration_Info_UEnum_EStretch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStretch.InnerSingleton, Z_Construct_UEnum_Slate_EStretch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStretch.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h_Statics::EnumInfo[] = {
		{ EStretchDirection_StaticEnum, TEXT("EStretchDirection"), &Z_Registration_Info_UEnum_EStretchDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 231333316U) },
		{ EStretch_StaticEnum, TEXT("EStretch"), &Z_Registration_Info_UEnum_EStretch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4029848301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h_4245426103(TEXT("/Script/Slate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
