// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Kismet2/KismetDebugUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetDebugUtilities() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod;
	static UEnum* EBlueprintBreakpointReloadMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EBlueprintBreakpointReloadMethod"));
		}
		return Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EBlueprintBreakpointReloadMethod>()
	{
		return EBlueprintBreakpointReloadMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enumerators[] = {
		{ "EBlueprintBreakpointReloadMethod::RestoreAll", (int64)EBlueprintBreakpointReloadMethod::RestoreAll },
		{ "EBlueprintBreakpointReloadMethod::RestoreAllAndDisable", (int64)EBlueprintBreakpointReloadMethod::RestoreAllAndDisable },
		{ "EBlueprintBreakpointReloadMethod::DiscardAll", (int64)EBlueprintBreakpointReloadMethod::DiscardAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Indicates how to restore breakpoints when a Blueprint asset is reloaded. */" },
		{ "DiscardAll.Comment", "/** Discard all breakpoints on reload. */" },
		{ "DiscardAll.Name", "EBlueprintBreakpointReloadMethod::DiscardAll" },
		{ "DiscardAll.ToolTip", "Discard all breakpoints on reload." },
		{ "ModuleRelativePath", "Public/Kismet2/KismetDebugUtilities.h" },
		{ "RestoreAll.Comment", "/** Restore all breakpoints and keep their saved enabled/disabled state. */" },
		{ "RestoreAll.Name", "EBlueprintBreakpointReloadMethod::RestoreAll" },
		{ "RestoreAll.ToolTip", "Restore all breakpoints and keep their saved enabled/disabled state." },
		{ "RestoreAllAndDisable.Comment", "/** Restore all breakpoints and disable on reload. */" },
		{ "RestoreAllAndDisable.Name", "EBlueprintBreakpointReloadMethod::RestoreAllAndDisable" },
		{ "RestoreAllAndDisable.ToolTip", "Restore all breakpoints and disable on reload." },
		{ "ToolTip", "Indicates how to restore breakpoints when a Blueprint asset is reloaded." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EBlueprintBreakpointReloadMethod",
		"EBlueprintBreakpointReloadMethod",
		Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h_Statics::EnumInfo[] = {
		{ EBlueprintBreakpointReloadMethod_StaticEnum, TEXT("EBlueprintBreakpointReloadMethod"), &Z_Registration_Info_UEnum_EBlueprintBreakpointReloadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3238173322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h_300754072(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
