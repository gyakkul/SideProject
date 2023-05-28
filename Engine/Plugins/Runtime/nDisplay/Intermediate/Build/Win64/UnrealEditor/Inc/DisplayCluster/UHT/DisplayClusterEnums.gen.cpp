// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterEnums() {}
// Cross Module References
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterOperationMode;
	static UEnum* EDisplayClusterOperationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterOperationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterOperationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterOperationMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterOperationMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterOperationMode>()
	{
		return EDisplayClusterOperationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enumerators[] = {
		{ "EDisplayClusterOperationMode::Cluster", (int64)EDisplayClusterOperationMode::Cluster },
		{ "EDisplayClusterOperationMode::Editor", (int64)EDisplayClusterOperationMode::Editor },
		{ "EDisplayClusterOperationMode::Disabled", (int64)EDisplayClusterOperationMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cluster.Name", "EDisplayClusterOperationMode::Cluster" },
		{ "Comment", "/**\n * Display cluster operation mode\n */" },
		{ "Disabled.Name", "EDisplayClusterOperationMode::Disabled" },
		{ "Editor.Name", "EDisplayClusterOperationMode::Editor" },
		{ "ModuleRelativePath", "Public/DisplayClusterEnums.h" },
		{ "ToolTip", "Display cluster operation mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterOperationMode",
		"EDisplayClusterOperationMode",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterOperationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterOperationMode.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterOperationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterNodeRole;
	static UEnum* EDisplayClusterNodeRole_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterNodeRole.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterNodeRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterNodeRole"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterNodeRole.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterNodeRole>()
	{
		return EDisplayClusterNodeRole_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enumerators[] = {
		{ "EDisplayClusterNodeRole::None", (int64)EDisplayClusterNodeRole::None },
		{ "EDisplayClusterNodeRole::Primary", (int64)EDisplayClusterNodeRole::Primary },
		{ "EDisplayClusterNodeRole::Secondary", (int64)EDisplayClusterNodeRole::Secondary },
		{ "EDisplayClusterNodeRole::Backup", (int64)EDisplayClusterNodeRole::Backup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enum_MetaDataParams[] = {
		{ "Backup.Name", "EDisplayClusterNodeRole::Backup" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Display cluster node role\n */" },
		{ "ModuleRelativePath", "Public/DisplayClusterEnums.h" },
		{ "None.Name", "EDisplayClusterNodeRole::None" },
		{ "Primary.Name", "EDisplayClusterNodeRole::Primary" },
		{ "Secondary.Name", "EDisplayClusterNodeRole::Secondary" },
		{ "ToolTip", "Display cluster node role" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterNodeRole",
		"EDisplayClusterNodeRole",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterNodeRole.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterNodeRole.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterNodeRole.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterSyncGroup;
	static UEnum* EDisplayClusterSyncGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterSyncGroup"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterSyncGroup>()
	{
		return EDisplayClusterSyncGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enumerators[] = {
		{ "EDisplayClusterSyncGroup::PreTick", (int64)EDisplayClusterSyncGroup::PreTick },
		{ "EDisplayClusterSyncGroup::Tick", (int64)EDisplayClusterSyncGroup::Tick },
		{ "EDisplayClusterSyncGroup::PostTick", (int64)EDisplayClusterSyncGroup::PostTick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Display cluster synchronization groups\n */" },
		{ "ModuleRelativePath", "Public/DisplayClusterEnums.h" },
		{ "PostTick.Name", "EDisplayClusterSyncGroup::PostTick" },
		{ "PreTick.Name", "EDisplayClusterSyncGroup::PreTick" },
		{ "Tick.Name", "EDisplayClusterSyncGroup::Tick" },
		{ "ToolTip", "Display cluster synchronization groups" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterSyncGroup",
		"EDisplayClusterSyncGroup",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterSyncGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterSyncGroup.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h_Statics::EnumInfo[] = {
		{ EDisplayClusterOperationMode_StaticEnum, TEXT("EDisplayClusterOperationMode"), &Z_Registration_Info_UEnum_EDisplayClusterOperationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 506207516U) },
		{ EDisplayClusterNodeRole_StaticEnum, TEXT("EDisplayClusterNodeRole"), &Z_Registration_Info_UEnum_EDisplayClusterNodeRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1884238287U) },
		{ EDisplayClusterSyncGroup_StaticEnum, TEXT("EDisplayClusterSyncGroup"), &Z_Registration_Info_UEnum_EDisplayClusterSyncGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 365945387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h_4016071729(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
