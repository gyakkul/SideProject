// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintActionMenuUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintActionMenuUtils() {}
// Cross Module References
	KISMET_API UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextTargetFlags;
	static UEnum* EContextTargetFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextTargetFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextTargetFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Kismet_EContextTargetFlags, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("EContextTargetFlags"));
		}
		return Z_Registration_Info_UEnum_EContextTargetFlags.OuterSingleton;
	}
	template<> KISMET_API UEnum* StaticEnum<EContextTargetFlags::Type>()
	{
		return EContextTargetFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enumerators[] = {
		{ "EContextTargetFlags::TARGET_Blueprint", (int64)EContextTargetFlags::TARGET_Blueprint },
		{ "EContextTargetFlags::TARGET_SubComponents", (int64)EContextTargetFlags::TARGET_SubComponents },
		{ "EContextTargetFlags::TARGET_NodeTarget", (int64)EContextTargetFlags::TARGET_NodeTarget },
		{ "EContextTargetFlags::TARGET_PinObject", (int64)EContextTargetFlags::TARGET_PinObject },
		{ "EContextTargetFlags::TARGET_SiblingPinObjects", (int64)EContextTargetFlags::TARGET_SiblingPinObjects },
		{ "EContextTargetFlags::TARGET_BlueprintLibraries", (int64)EContextTargetFlags::TARGET_BlueprintLibraries },
		{ "EContextTargetFlags::TARGET_NonImportedTypes", (int64)EContextTargetFlags::TARGET_NonImportedTypes },
		{ "EContextTargetFlags::ContextTargetFlagsEnd", (int64)EContextTargetFlags::ContextTargetFlagsEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enum_MetaDataParams[] = {
		{ "ContextTargetFlagsEnd.Comment", "// +1 to the last flag (so we can easily iterate these flags)\n" },
		{ "ContextTargetFlagsEnd.Hidden", "" },
		{ "ContextTargetFlagsEnd.Name", "EContextTargetFlags::ContextTargetFlagsEnd" },
		{ "ContextTargetFlagsEnd.ToolTip", "+1 to the last flag (so we can easily iterate these flags)" },
		{ "ModuleRelativePath", "Public/BlueprintActionMenuUtils.h" },
		{ "TARGET_Blueprint.DisplayName", "This Blueprint" },
		{ "TARGET_Blueprint.Name", "EContextTargetFlags::TARGET_Blueprint" },
		{ "TARGET_Blueprint.ToolTip", "Include functions and variables that belong to this Blueprint." },
		{ "TARGET_BlueprintLibraries.DisplayName", "Libraries" },
		{ "TARGET_BlueprintLibraries.Name", "EContextTargetFlags::TARGET_BlueprintLibraries" },
		{ "TARGET_BlueprintLibraries.ToolTip", "Include static functions that are globally accessible (belonging to function/macro libraries, etc.)." },
		{ "TARGET_NodeTarget.DisplayName", "Node Target" },
		{ "TARGET_NodeTarget.Name", "EContextTargetFlags::TARGET_NodeTarget" },
		{ "TARGET_NodeTarget.ToolTip", "Include functions and variables that belong to the same class that the pin's node does." },
		{ "TARGET_NonImportedTypes.DisplayName", "Non-Imported Types" },
		{ "TARGET_NonImportedTypes.Name", "EContextTargetFlags::TARGET_NonImportedTypes" },
		{ "TARGET_NonImportedTypes.ToolTip", "Include functions from loaded types that are not imported by this Blueprint." },
		{ "TARGET_PinObject.DisplayName", "Pin Type Class" },
		{ "TARGET_PinObject.Name", "EContextTargetFlags::TARGET_PinObject" },
		{ "TARGET_PinObject.ToolTip", "Include functions and variables that belong to this pin type." },
		{ "TARGET_SiblingPinObjects.DisplayName", "Other Object Outputs" },
		{ "TARGET_SiblingPinObjects.Name", "EContextTargetFlags::TARGET_SiblingPinObjects" },
		{ "TARGET_SiblingPinObjects.ToolTip", "Include functions and variables that belong to any of this node's output types." },
		{ "TARGET_SubComponents.DisplayName", "Components" },
		{ "TARGET_SubComponents.Name", "EContextTargetFlags::TARGET_SubComponents" },
		{ "TARGET_SubComponents.ToolTip", "Include functions that belong to components of this Blueprint and/or the other target classes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		"EContextTargetFlags",
		"EContextTargetFlags::Type",
		Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags()
	{
		if (!Z_Registration_Info_UEnum_EContextTargetFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextTargetFlags.InnerSingleton, Z_Construct_UEnum_Kismet_EContextTargetFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextTargetFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h_Statics::EnumInfo[] = {
		{ EContextTargetFlags_StaticEnum, TEXT("EContextTargetFlags"), &Z_Registration_Info_UEnum_EContextTargetFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2782386065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h_3529317031(TEXT("/Script/Kismet"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
