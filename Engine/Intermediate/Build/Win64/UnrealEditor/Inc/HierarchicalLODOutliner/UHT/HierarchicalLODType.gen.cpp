// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HierarchicalLODType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLODType() {}
// Cross Module References
	HIERARCHICALLODOUTLINER_API UEnum* Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType();
	UPackage* Z_Construct_UPackage__Script_HierarchicalLODOutliner();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHierarchicalLODActionType;
	static UEnum* EHierarchicalLODActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHierarchicalLODActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHierarchicalLODActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType, (UObject*)Z_Construct_UPackage__Script_HierarchicalLODOutliner(), TEXT("EHierarchicalLODActionType"));
		}
		return Z_Registration_Info_UEnum_EHierarchicalLODActionType.OuterSingleton;
	}
	template<> HIERARCHICALLODOUTLINER_API UEnum* StaticEnum<EHierarchicalLODActionType>()
	{
		return EHierarchicalLODActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enumerators[] = {
		{ "EHierarchicalLODActionType::InvalidAction", (int64)EHierarchicalLODActionType::InvalidAction },
		{ "EHierarchicalLODActionType::CreateCluster", (int64)EHierarchicalLODActionType::CreateCluster },
		{ "EHierarchicalLODActionType::AddActorToCluster", (int64)EHierarchicalLODActionType::AddActorToCluster },
		{ "EHierarchicalLODActionType::MoveActorToCluster", (int64)EHierarchicalLODActionType::MoveActorToCluster },
		{ "EHierarchicalLODActionType::RemoveActorFromCluster", (int64)EHierarchicalLODActionType::RemoveActorFromCluster },
		{ "EHierarchicalLODActionType::MergeClusters", (int64)EHierarchicalLODActionType::MergeClusters },
		{ "EHierarchicalLODActionType::ChildCluster", (int64)EHierarchicalLODActionType::ChildCluster },
		{ "EHierarchicalLODActionType::MAX", (int64)EHierarchicalLODActionType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enum_MetaDataParams[] = {
		{ "AddActorToCluster.Name", "EHierarchicalLODActionType::AddActorToCluster" },
		{ "ChildCluster.Name", "EHierarchicalLODActionType::ChildCluster" },
		{ "CreateCluster.Name", "EHierarchicalLODActionType::CreateCluster" },
		{ "InvalidAction.Name", "EHierarchicalLODActionType::InvalidAction" },
		{ "MAX.Name", "EHierarchicalLODActionType::MAX" },
		{ "MergeClusters.Name", "EHierarchicalLODActionType::MergeClusters" },
		{ "ModuleRelativePath", "Private/HierarchicalLODType.h" },
		{ "MoveActorToCluster.Name", "EHierarchicalLODActionType::MoveActorToCluster" },
		{ "RemoveActorFromCluster.Name", "EHierarchicalLODActionType::RemoveActorFromCluster" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HierarchicalLODOutliner,
		nullptr,
		"EHierarchicalLODActionType",
		"EHierarchicalLODActionType",
		Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType()
	{
		if (!Z_Registration_Info_UEnum_EHierarchicalLODActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHierarchicalLODActionType.InnerSingleton, Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHierarchicalLODActionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h_Statics::EnumInfo[] = {
		{ EHierarchicalLODActionType_StaticEnum, TEXT("EHierarchicalLODActionType"), &Z_Registration_Info_UEnum_EHierarchicalLODActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1003605097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h_3149070869(TEXT("/Script/HierarchicalLODOutliner"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
