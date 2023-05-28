// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layout/FlowDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowDirection() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFlowDirectionPreference();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowDirectionPreference;
	static UEnum* EFlowDirectionPreference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFlowDirectionPreference"));
		}
		return Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFlowDirectionPreference>()
	{
		return EFlowDirectionPreference_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enumerators[] = {
		{ "EFlowDirectionPreference::Inherit", (int64)EFlowDirectionPreference::Inherit },
		{ "EFlowDirectionPreference::Culture", (int64)EFlowDirectionPreference::Culture },
		{ "EFlowDirectionPreference::LeftToRight", (int64)EFlowDirectionPreference::LeftToRight },
		{ "EFlowDirectionPreference::RightToLeft", (int64)EFlowDirectionPreference::RightToLeft },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "Culture.Comment", "/** Begins laying out widgets using the current cultures layout direction preference, flipping the directionality of flows. */" },
		{ "Culture.Name", "EFlowDirectionPreference::Culture" },
		{ "Culture.ToolTip", "Begins laying out widgets using the current cultures layout direction preference, flipping the directionality of flows." },
		{ "Inherit.Comment", "/** Inherits the flow direction set by the parent widget. */" },
		{ "Inherit.Name", "EFlowDirectionPreference::Inherit" },
		{ "Inherit.ToolTip", "Inherits the flow direction set by the parent widget." },
		{ "LeftToRight.Comment", "/** Forces a Left to Right layout flow. */" },
		{ "LeftToRight.Name", "EFlowDirectionPreference::LeftToRight" },
		{ "LeftToRight.ToolTip", "Forces a Left to Right layout flow." },
		{ "ModuleRelativePath", "Public/Layout/FlowDirection.h" },
		{ "RightToLeft.Comment", "/** Forces a Right to Left layout flow. */" },
		{ "RightToLeft.Name", "EFlowDirectionPreference::RightToLeft" },
		{ "RightToLeft.ToolTip", "Forces a Right to Left layout flow." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EFlowDirectionPreference",
		"EFlowDirectionPreference",
		Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EFlowDirectionPreference()
	{
		if (!Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton, Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h_Statics::EnumInfo[] = {
		{ EFlowDirectionPreference_StaticEnum, TEXT("EFlowDirectionPreference"), &Z_Registration_Info_UEnum_EFlowDirectionPreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4238195596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h_85166429(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
