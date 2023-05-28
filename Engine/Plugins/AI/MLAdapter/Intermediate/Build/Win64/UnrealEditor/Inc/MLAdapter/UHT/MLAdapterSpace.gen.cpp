// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/MLAdapterSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSpace() {}
// Cross Module References
	MLADAPTER_API UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLAdapterSpaceType;
	static UEnum* EMLAdapterSpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterSpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLAdapterSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("EMLAdapterSpaceType"));
		}
		return Z_Registration_Info_UEnum_EMLAdapterSpaceType.OuterSingleton;
	}
	template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterSpaceType>()
	{
		return EMLAdapterSpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enumerators[] = {
		{ "EMLAdapterSpaceType::Discrete", (int64)EMLAdapterSpaceType::Discrete },
		{ "EMLAdapterSpaceType::MultiDiscrete", (int64)EMLAdapterSpaceType::MultiDiscrete },
		{ "EMLAdapterSpaceType::Box", (int64)EMLAdapterSpaceType::Box },
		{ "EMLAdapterSpaceType::Tuple", (int64)EMLAdapterSpaceType::Tuple },
		{ "EMLAdapterSpaceType::MAX", (int64)EMLAdapterSpaceType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EMLAdapterSpaceType::Box" },
		{ "Discrete.Name", "EMLAdapterSpaceType::Discrete" },
		{ "MAX.Name", "EMLAdapterSpaceType::MAX" },
		{ "ModuleRelativePath", "Public/MLAdapterSpace.h" },
		{ "MultiDiscrete.Name", "EMLAdapterSpaceType::MultiDiscrete" },
		{ "Tuple.Name", "EMLAdapterSpaceType::Tuple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		"EMLAdapterSpaceType",
		"EMLAdapterSpaceType",
		Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterSpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLAdapterSpaceType.InnerSingleton, Z_Construct_UEnum_MLAdapter_EMLAdapterSpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLAdapterSpaceType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h_Statics::EnumInfo[] = {
		{ EMLAdapterSpaceType_StaticEnum, TEXT("EMLAdapterSpaceType"), &Z_Registration_Info_UEnum_EMLAdapterSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2176663329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h_3457408360(TEXT("/Script/MLAdapter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
