// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyTypes() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UEnum* Z_Construct_UEnum_Water_EWaterBodyType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaterBodyType;
	static UEnum* EWaterBodyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaterBodyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaterBodyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Water_EWaterBodyType, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("EWaterBodyType"));
		}
		return Z_Registration_Info_UEnum_EWaterBodyType.OuterSingleton;
	}
	template<> WATER_API UEnum* StaticEnum<EWaterBodyType>()
	{
		return EWaterBodyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Water_EWaterBodyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enumerators[] = {
		{ "EWaterBodyType::River", (int64)EWaterBodyType::River },
		{ "EWaterBodyType::Lake", (int64)EWaterBodyType::Lake },
		{ "EWaterBodyType::Ocean", (int64)EWaterBodyType::Ocean },
		{ "EWaterBodyType::Transition", (int64)EWaterBodyType::Transition },
		{ "EWaterBodyType::Num", (int64)EWaterBodyType::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lake.Comment", "/** Lakes defined by a close loop spline around the shore with water in the middle*/" },
		{ "Lake.Name", "EWaterBodyType::Lake" },
		{ "Lake.ToolTip", "Lakes defined by a close loop spline around the shore with water in the middle" },
		{ "ModuleRelativePath", "Public/WaterBodyTypes.h" },
		{ "Num.Comment", "/** Max value */" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EWaterBodyType::Num" },
		{ "Num.ToolTip", "Max value" },
		{ "Ocean.Comment", "/* Ocean defined by a shoreline spline and rendered out to a far distance */" },
		{ "Ocean.Name", "EWaterBodyType::Ocean" },
		{ "Ocean.ToolTip", "Ocean defined by a shoreline spline and rendered out to a far distance" },
		{ "River.Comment", "/** Rivers defined by a spline down the middle */" },
		{ "River.Name", "EWaterBodyType::River" },
		{ "River.ToolTip", "Rivers defined by a spline down the middle" },
		{ "Transition.Comment", "/** A custom water body that can be used for gameplay reasons.  Uses a spline down the middle to encode gameplay data. Requires a custom mesh to render, doesn't affect landscape */" },
		{ "Transition.DisplayName", "Custom" },
		{ "Transition.Name", "EWaterBodyType::Transition" },
		{ "Transition.ToolTip", "A custom water body that can be used for gameplay reasons.  Uses a spline down the middle to encode gameplay data. Requires a custom mesh to render, doesn't affect landscape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Water_EWaterBodyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		"EWaterBodyType",
		"EWaterBodyType",
		Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBodyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Water_EWaterBodyType()
	{
		if (!Z_Registration_Info_UEnum_EWaterBodyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaterBodyType.InnerSingleton, Z_Construct_UEnum_Water_EWaterBodyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaterBodyType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h_Statics::EnumInfo[] = {
		{ EWaterBodyType_StaticEnum, TEXT("EWaterBodyType"), &Z_Registration_Info_UEnum_EWaterBodyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1902955117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h_4040273014(TEXT("/Script/Water"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
