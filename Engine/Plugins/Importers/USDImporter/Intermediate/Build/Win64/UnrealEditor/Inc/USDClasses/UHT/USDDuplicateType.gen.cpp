// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDDuplicateType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDDuplicateType() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdDuplicateType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdDuplicateType;
	static UEnum* EUsdDuplicateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdDuplicateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdDuplicateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdDuplicateType, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdDuplicateType"));
		}
		return Z_Registration_Info_UEnum_EUsdDuplicateType.OuterSingleton;
	}
	template<> USDCLASSES_API UEnum* StaticEnum<EUsdDuplicateType>()
	{
		return EUsdDuplicateType_StaticEnum();
	}
	struct Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enumerators[] = {
		{ "EUsdDuplicateType::FlattenComposedPrim", (int64)EUsdDuplicateType::FlattenComposedPrim },
		{ "EUsdDuplicateType::SingleLayerSpecs", (int64)EUsdDuplicateType::SingleLayerSpecs },
		{ "EUsdDuplicateType::AllLocalLayerSpecs", (int64)EUsdDuplicateType::AllLocalLayerSpecs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enum_MetaDataParams[] = {
		{ "AllLocalLayerSpecs.Comment", "/** Duplicate each of the prim's specs across the entire stage */" },
		{ "AllLocalLayerSpecs.Name", "EUsdDuplicateType::AllLocalLayerSpecs" },
		{ "AllLocalLayerSpecs.ToolTip", "Duplicate each of the prim's specs across the entire stage" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the different types of \"prim duplication\" operations we support with UsdUtils::DuplicatePrims\n */" },
		{ "FlattenComposedPrim.Comment", "/** Generate a flattened duplicate of the composed prim onto the current edit target */" },
		{ "FlattenComposedPrim.Name", "EUsdDuplicateType::FlattenComposedPrim" },
		{ "FlattenComposedPrim.ToolTip", "Generate a flattened duplicate of the composed prim onto the current edit target" },
		{ "ModuleRelativePath", "Public/USDDuplicateType.h" },
		{ "SingleLayerSpecs.Comment", "/** Duplicate the prim's specs on the current edit target only */" },
		{ "SingleLayerSpecs.Name", "EUsdDuplicateType::SingleLayerSpecs" },
		{ "SingleLayerSpecs.ToolTip", "Duplicate the prim's specs on the current edit target only" },
		{ "ToolTip", "Describes the different types of \"prim duplication\" operations we support with UsdUtils::DuplicatePrims" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		"EUsdDuplicateType",
		"EUsdDuplicateType",
		Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_USDClasses_EUsdDuplicateType()
	{
		if (!Z_Registration_Info_UEnum_EUsdDuplicateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdDuplicateType.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdDuplicateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdDuplicateType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h_Statics::EnumInfo[] = {
		{ EUsdDuplicateType_StaticEnum, TEXT("EUsdDuplicateType"), &Z_Registration_Info_UEnum_EUsdDuplicateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 718176014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h_2826989891(TEXT("/Script/USDClasses"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
