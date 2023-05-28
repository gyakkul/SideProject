// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/SCommonAnimatedSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCommonAnimatedSwitcher() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonSwitcherTransition;
	static UEnum* ECommonSwitcherTransition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonSwitcherTransition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonSwitcherTransition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("ECommonSwitcherTransition"));
		}
		return Z_Registration_Info_UEnum_ECommonSwitcherTransition.OuterSingleton;
	}
	template<> COMMONUI_API UEnum* StaticEnum<ECommonSwitcherTransition>()
	{
		return ECommonSwitcherTransition_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enumerators[] = {
		{ "ECommonSwitcherTransition::FadeOnly", (int64)ECommonSwitcherTransition::FadeOnly },
		{ "ECommonSwitcherTransition::Horizontal", (int64)ECommonSwitcherTransition::Horizontal },
		{ "ECommonSwitcherTransition::Vertical", (int64)ECommonSwitcherTransition::Vertical },
		{ "ECommonSwitcherTransition::Zoom", (int64)ECommonSwitcherTransition::Zoom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FadeOnly.Comment", "/** Fade transition only with no movement */" },
		{ "FadeOnly.Name", "ECommonSwitcherTransition::FadeOnly" },
		{ "FadeOnly.ToolTip", "Fade transition only with no movement" },
		{ "Horizontal.Comment", "/** Increasing the active index goes right, decreasing goes left */" },
		{ "Horizontal.Name", "ECommonSwitcherTransition::Horizontal" },
		{ "Horizontal.ToolTip", "Increasing the active index goes right, decreasing goes left" },
		{ "ModuleRelativePath", "Public/Slate/SCommonAnimatedSwitcher.h" },
		{ "Vertical.Comment", "/** Increasing the active index goes up, decreasing goes down */" },
		{ "Vertical.Name", "ECommonSwitcherTransition::Vertical" },
		{ "Vertical.ToolTip", "Increasing the active index goes up, decreasing goes down" },
		{ "Zoom.Comment", "/** Increasing the active index zooms in, decreasing zooms out */" },
		{ "Zoom.Name", "ECommonSwitcherTransition::Zoom" },
		{ "Zoom.ToolTip", "Increasing the active index zooms in, decreasing zooms out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		"ECommonSwitcherTransition",
		"ECommonSwitcherTransition",
		Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition()
	{
		if (!Z_Registration_Info_UEnum_ECommonSwitcherTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonSwitcherTransition.InnerSingleton, Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonSwitcherTransition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionCurve;
	static UEnum* ETransitionCurve_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionCurve.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionCurve.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ETransitionCurve, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("ETransitionCurve"));
		}
		return Z_Registration_Info_UEnum_ETransitionCurve.OuterSingleton;
	}
	template<> COMMONUI_API UEnum* StaticEnum<ETransitionCurve>()
	{
		return ETransitionCurve_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enumerators[] = {
		{ "ETransitionCurve::Linear", (int64)ETransitionCurve::Linear },
		{ "ETransitionCurve::QuadIn", (int64)ETransitionCurve::QuadIn },
		{ "ETransitionCurve::QuadOut", (int64)ETransitionCurve::QuadOut },
		{ "ETransitionCurve::QuadInOut", (int64)ETransitionCurve::QuadInOut },
		{ "ETransitionCurve::CubicIn", (int64)ETransitionCurve::CubicIn },
		{ "ETransitionCurve::CubicOut", (int64)ETransitionCurve::CubicOut },
		{ "ETransitionCurve::CubicInOut", (int64)ETransitionCurve::CubicInOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CubicIn.Comment", "/** Cubic ease in */" },
		{ "CubicIn.Name", "ETransitionCurve::CubicIn" },
		{ "CubicIn.ToolTip", "Cubic ease in" },
		{ "CubicInOut.Comment", "/** Cubic ease in, cubic ease out */" },
		{ "CubicInOut.Name", "ETransitionCurve::CubicInOut" },
		{ "CubicInOut.ToolTip", "Cubic ease in, cubic ease out" },
		{ "CubicOut.Comment", "/** Cubic ease out */" },
		{ "CubicOut.Name", "ETransitionCurve::CubicOut" },
		{ "CubicOut.ToolTip", "Cubic ease out" },
		{ "Linear.Comment", "/** Linear interpolation, with no easing */" },
		{ "Linear.Name", "ETransitionCurve::Linear" },
		{ "Linear.ToolTip", "Linear interpolation, with no easing" },
		{ "ModuleRelativePath", "Public/Slate/SCommonAnimatedSwitcher.h" },
		{ "QuadIn.Comment", "/** Quadratic ease in */" },
		{ "QuadIn.Name", "ETransitionCurve::QuadIn" },
		{ "QuadIn.ToolTip", "Quadratic ease in" },
		{ "QuadInOut.Comment", "/** Quadratic ease in, quadratic ease out */" },
		{ "QuadInOut.Name", "ETransitionCurve::QuadInOut" },
		{ "QuadInOut.ToolTip", "Quadratic ease in, quadratic ease out" },
		{ "QuadOut.Comment", "/** Quadratic ease out */" },
		{ "QuadOut.Name", "ETransitionCurve::QuadOut" },
		{ "QuadOut.ToolTip", "Quadratic ease out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		"ETransitionCurve",
		"ETransitionCurve",
		Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve()
	{
		if (!Z_Registration_Info_UEnum_ETransitionCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionCurve.InnerSingleton, Z_Construct_UEnum_CommonUI_ETransitionCurve_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h_Statics::EnumInfo[] = {
		{ ECommonSwitcherTransition_StaticEnum, TEXT("ECommonSwitcherTransition"), &Z_Registration_Info_UEnum_ECommonSwitcherTransition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 509553621U) },
		{ ETransitionCurve_StaticEnum, TEXT("ETransitionCurve"), &Z_Registration_Info_UEnum_ETransitionCurve, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3436855353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h_2028542908(TEXT("/Script/CommonUI"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
