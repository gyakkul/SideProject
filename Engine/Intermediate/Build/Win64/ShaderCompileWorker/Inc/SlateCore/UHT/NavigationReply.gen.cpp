// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/NavigationReply.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationReply() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUINavigationRule;
	static UEnum* EUINavigationRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUINavigationRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUINavigationRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigationRule, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EUINavigationRule"));
		}
		return Z_Registration_Info_UEnum_EUINavigationRule.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EUINavigationRule>()
	{
		return EUINavigationRule_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enumerators[] = {
		{ "EUINavigationRule::Escape", (int64)EUINavigationRule::Escape },
		{ "EUINavigationRule::Explicit", (int64)EUINavigationRule::Explicit },
		{ "EUINavigationRule::Wrap", (int64)EUINavigationRule::Wrap },
		{ "EUINavigationRule::Stop", (int64)EUINavigationRule::Stop },
		{ "EUINavigationRule::Custom", (int64)EUINavigationRule::Custom },
		{ "EUINavigationRule::CustomBoundary", (int64)EUINavigationRule::CustomBoundary },
		{ "EUINavigationRule::Invalid", (int64)EUINavigationRule::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "/** Custom navigation handled by user code. */" },
		{ "Custom.Name", "EUINavigationRule::Custom" },
		{ "Custom.ToolTip", "Custom navigation handled by user code." },
		{ "CustomBoundary.Comment", "/** Custom navigation handled by user code if the boundary is hit. */" },
		{ "CustomBoundary.Name", "EUINavigationRule::CustomBoundary" },
		{ "CustomBoundary.ToolTip", "Custom navigation handled by user code if the boundary is hit." },
		{ "Escape.Comment", "/** Allow the movement to continue in that direction, seeking the next navigable widget automatically. */" },
		{ "Escape.Name", "EUINavigationRule::Escape" },
		{ "Escape.ToolTip", "Allow the movement to continue in that direction, seeking the next navigable widget automatically." },
		{ "Explicit.Comment", "/** Move to a specific widget. */" },
		{ "Explicit.Name", "EUINavigationRule::Explicit" },
		{ "Explicit.ToolTip", "Move to a specific widget." },
		{ "Invalid.Comment", "/** Invalid Rule */" },
		{ "Invalid.Name", "EUINavigationRule::Invalid" },
		{ "Invalid.ToolTip", "Invalid Rule" },
		{ "ModuleRelativePath", "Public/Input/NavigationReply.h" },
		{ "Stop.Comment", "/** Stops movement in this direction */" },
		{ "Stop.Name", "EUINavigationRule::Stop" },
		{ "Stop.ToolTip", "Stops movement in this direction" },
		{ "Wrap.Comment", "/**\n\x09 * Wrap movement inside this container, causing the movement to cycle around from the opposite side, \n\x09 * if the navigation attempt would have escaped.\n\x09 */" },
		{ "Wrap.Name", "EUINavigationRule::Wrap" },
		{ "Wrap.ToolTip", "Wrap movement inside this container, causing the movement to cycle around from the opposite side,\nif the navigation attempt would have escaped." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EUINavigationRule",
		"EUINavigationRule",
		Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule()
	{
		if (!Z_Registration_Info_UEnum_EUINavigationRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUINavigationRule.InnerSingleton, Z_Construct_UEnum_SlateCore_EUINavigationRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUINavigationRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationReply_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationReply_h_Statics::EnumInfo[] = {
		{ EUINavigationRule_StaticEnum, TEXT("EUINavigationRule"), &Z_Registration_Info_UEnum_EUINavigationRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2992627971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationReply_h_937243982(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationReply_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationReply_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
