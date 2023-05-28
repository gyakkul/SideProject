// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionConvexUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionConvexUtility() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexOverlapRemoval;
	static UEnum* EConvexOverlapRemoval_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EConvexOverlapRemoval"));
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EConvexOverlapRemoval>()
	{
		return EConvexOverlapRemoval_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enumerators[] = {
		{ "EConvexOverlapRemoval::None", (int64)EConvexOverlapRemoval::None },
		{ "EConvexOverlapRemoval::All", (int64)EConvexOverlapRemoval::All },
		{ "EConvexOverlapRemoval::OnlyClusters", (int64)EConvexOverlapRemoval::OnlyClusters },
		{ "EConvexOverlapRemoval::OnlyClustersVsClusters", (int64)EConvexOverlapRemoval::OnlyClustersVsClusters },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Remove all overlaps between neighboring convex hulls\n" },
		{ "All.Name", "EConvexOverlapRemoval::All" },
		{ "All.ToolTip", "Remove all overlaps between neighboring convex hulls" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionConvexUtility.h" },
		{ "None.Comment", "// Do not remove overlaps between convex hulls\n" },
		{ "None.Name", "EConvexOverlapRemoval::None" },
		{ "None.ToolTip", "Do not remove overlaps between convex hulls" },
		{ "OnlyClusters.Comment", "// Only remove overlaps on convex hulls of clusters, ignoring leaf-leaf overlaps\n" },
		{ "OnlyClusters.Name", "EConvexOverlapRemoval::OnlyClusters" },
		{ "OnlyClusters.ToolTip", "Only remove overlaps on convex hulls of clusters, ignoring leaf-leaf overlaps" },
		{ "OnlyClustersVsClusters.Comment", "// Only remove overlaps between overlapping clusters, ignoring leaf-leaf and cluster-leaf overlaps\n" },
		{ "OnlyClustersVsClusters.Name", "EConvexOverlapRemoval::OnlyClustersVsClusters" },
		{ "OnlyClustersVsClusters.ToolTip", "Only remove overlaps between overlapping clusters, ignoring leaf-leaf and cluster-leaf overlaps" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EConvexOverlapRemoval",
		"EConvexOverlapRemoval",
		Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton, Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics::EnumInfo[] = {
		{ EConvexOverlapRemoval_StaticEnum, TEXT("EConvexOverlapRemoval"), &Z_Registration_Info_UEnum_EConvexOverlapRemoval, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572742885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_3108904681(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
