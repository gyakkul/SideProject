// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/FindInBlueprintManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindInBlueprintManager() {}
// Cross Module References
	KISMET_API UEnum* Z_Construct_UEnum_Kismet_EFiBVersion();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFiBVersion;
	static UEnum* EFiBVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFiBVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFiBVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Kismet_EFiBVersion, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("EFiBVersion"));
		}
		return Z_Registration_Info_UEnum_EFiBVersion.OuterSingleton;
	}
	template<> KISMET_API UEnum* StaticEnum<EFiBVersion>()
	{
		return EFiBVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_Kismet_EFiBVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enumerators[] = {
		{ "FIB_VER_NONE", (int64)FIB_VER_NONE },
		{ "FIB_VER_BASE", (int64)FIB_VER_BASE },
		{ "FIB_VER_VARIABLE_REFERENCE", (int64)FIB_VER_VARIABLE_REFERENCE },
		{ "FIB_VER_INTERFACE_GRAPHS", (int64)FIB_VER_INTERFACE_GRAPHS },
		{ "FIB_VER_PLUS_ONE", (int64)FIB_VER_PLUS_ONE },
		{ "FIB_VER_LATEST", (int64)FIB_VER_LATEST },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** FiB data versioning */" },
		{ "FIB_VER_BASE.Comment", "// Unknown version (not set)\n" },
		{ "FIB_VER_BASE.Name", "FIB_VER_BASE" },
		{ "FIB_VER_BASE.ToolTip", "Unknown version (not set)" },
		{ "FIB_VER_INTERFACE_GRAPHS.Comment", "// Variable references (FMemberReference) is collected in FiB\n" },
		{ "FIB_VER_INTERFACE_GRAPHS.Name", "FIB_VER_INTERFACE_GRAPHS" },
		{ "FIB_VER_INTERFACE_GRAPHS.ToolTip", "Variable references (FMemberReference) is collected in FiB" },
		{ "FIB_VER_LATEST.Name", "FIB_VER_LATEST" },
		{ "FIB_VER_NONE.Name", "FIB_VER_NONE" },
		{ "FIB_VER_PLUS_ONE.Comment", "// -----<new versions can be added before this line>-------------------------------------------------\n" },
		{ "FIB_VER_PLUS_ONE.Name", "FIB_VER_PLUS_ONE" },
		{ "FIB_VER_PLUS_ONE.ToolTip", "-----<new versions can be added before this line>-------------------------------------------------" },
		{ "FIB_VER_VARIABLE_REFERENCE.Comment", "// All Blueprints prior to versioning will automatically be assumed to be at 0 if they have FiB data collected\n" },
		{ "FIB_VER_VARIABLE_REFERENCE.Name", "FIB_VER_VARIABLE_REFERENCE" },
		{ "FIB_VER_VARIABLE_REFERENCE.ToolTip", "All Blueprints prior to versioning will automatically be assumed to be at 0 if they have FiB data collected" },
		{ "ModuleRelativePath", "Public/FindInBlueprintManager.h" },
		{ "ToolTip", "FiB data versioning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Kismet_EFiBVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		"EFiBVersion",
		"EFiBVersion",
		Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Kismet_EFiBVersion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Kismet_EFiBVersion()
	{
		if (!Z_Registration_Info_UEnum_EFiBVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFiBVersion.InnerSingleton, Z_Construct_UEnum_Kismet_EFiBVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFiBVersion.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h_Statics::EnumInfo[] = {
		{ EFiBVersion_StaticEnum, TEXT("EFiBVersion"), &Z_Registration_Info_UEnum_EFiBVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 541862324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h_1683759465(TEXT("/Script/Kismet"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
