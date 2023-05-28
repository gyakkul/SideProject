// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualGraphEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualGraphEdge() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VisualGraphUtils();
	VISUALGRAPHUTILS_API UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisualGraphEdgeDirection;
	static UEnum* EVisualGraphEdgeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection, (UObject*)Z_Construct_UPackage__Script_VisualGraphUtils(), TEXT("EVisualGraphEdgeDirection"));
		}
		return Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.OuterSingleton;
	}
	template<> VISUALGRAPHUTILS_API UEnum* StaticEnum<EVisualGraphEdgeDirection>()
	{
		return EVisualGraphEdgeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enumerators[] = {
		{ "EVisualGraphEdgeDirection::SourceToTarget", (int64)EVisualGraphEdgeDirection::SourceToTarget },
		{ "EVisualGraphEdgeDirection::TargetToSource", (int64)EVisualGraphEdgeDirection::TargetToSource },
		{ "EVisualGraphEdgeDirection::BothWays", (int64)EVisualGraphEdgeDirection::BothWays },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enum_MetaDataParams[] = {
		{ "BothWays.Name", "EVisualGraphEdgeDirection::BothWays" },
		{ "ModuleRelativePath", "Public/VisualGraphEdge.h" },
		{ "SourceToTarget.Name", "EVisualGraphEdgeDirection::SourceToTarget" },
		{ "TargetToSource.Name", "EVisualGraphEdgeDirection::TargetToSource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VisualGraphUtils,
		nullptr,
		"EVisualGraphEdgeDirection",
		"EVisualGraphEdgeDirection",
		Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.InnerSingleton, Z_Construct_UEnum_VisualGraphUtils_EVisualGraphEdgeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisualGraphEdgeDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h_Statics::EnumInfo[] = {
		{ EVisualGraphEdgeDirection_StaticEnum, TEXT("EVisualGraphEdgeDirection"), &Z_Registration_Info_UEnum_EVisualGraphEdgeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3594252806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h_3157386569(TEXT("/Script/VisualGraphUtils"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
