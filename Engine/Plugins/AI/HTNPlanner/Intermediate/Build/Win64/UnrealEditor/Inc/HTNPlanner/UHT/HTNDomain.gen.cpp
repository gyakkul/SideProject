// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTNDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTNDomain() {}
// Cross Module References
	HTNPLANNER_API UEnum* Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck();
	HTNPLANNER_API UEnum* Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation();
	UPackage* Z_Construct_UPackage__Script_HTNPlanner();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHTNWorldStateCheck;
	static UEnum* EHTNWorldStateCheck_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHTNWorldStateCheck.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHTNWorldStateCheck.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck, (UObject*)Z_Construct_UPackage__Script_HTNPlanner(), TEXT("EHTNWorldStateCheck"));
		}
		return Z_Registration_Info_UEnum_EHTNWorldStateCheck.OuterSingleton;
	}
	template<> HTNPLANNER_API UEnum* StaticEnum<EHTNWorldStateCheck>()
	{
		return EHTNWorldStateCheck_StaticEnum();
	}
	struct Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enumerators[] = {
		{ "EHTNWorldStateCheck::Less", (int64)EHTNWorldStateCheck::Less },
		{ "EHTNWorldStateCheck::LessOrEqual", (int64)EHTNWorldStateCheck::LessOrEqual },
		{ "EHTNWorldStateCheck::Equal", (int64)EHTNWorldStateCheck::Equal },
		{ "EHTNWorldStateCheck::NotEqual", (int64)EHTNWorldStateCheck::NotEqual },
		{ "EHTNWorldStateCheck::GreaterOrEqual", (int64)EHTNWorldStateCheck::GreaterOrEqual },
		{ "EHTNWorldStateCheck::Greater", (int64)EHTNWorldStateCheck::Greater },
		{ "EHTNWorldStateCheck::IsTrue", (int64)EHTNWorldStateCheck::IsTrue },
		{ "EHTNWorldStateCheck::MAX", (int64)EHTNWorldStateCheck::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enum_MetaDataParams[] = {
		{ "Equal.Name", "EHTNWorldStateCheck::Equal" },
		{ "Greater.Name", "EHTNWorldStateCheck::Greater" },
		{ "GreaterOrEqual.Name", "EHTNWorldStateCheck::GreaterOrEqual" },
		{ "IsTrue.Name", "EHTNWorldStateCheck::IsTrue" },
		{ "Less.Name", "EHTNWorldStateCheck::Less" },
		{ "LessOrEqual.Name", "EHTNWorldStateCheck::LessOrEqual" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EHTNWorldStateCheck::MAX" },
		{ "ModuleRelativePath", "Public/HTNDomain.h" },
		{ "NotEqual.Name", "EHTNWorldStateCheck::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HTNPlanner,
		nullptr,
		"EHTNWorldStateCheck",
		"EHTNWorldStateCheck",
		Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck()
	{
		if (!Z_Registration_Info_UEnum_EHTNWorldStateCheck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHTNWorldStateCheck.InnerSingleton, Z_Construct_UEnum_HTNPlanner_EHTNWorldStateCheck_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHTNWorldStateCheck.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHTNWorldStateOperation;
	static UEnum* EHTNWorldStateOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHTNWorldStateOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHTNWorldStateOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation, (UObject*)Z_Construct_UPackage__Script_HTNPlanner(), TEXT("EHTNWorldStateOperation"));
		}
		return Z_Registration_Info_UEnum_EHTNWorldStateOperation.OuterSingleton;
	}
	template<> HTNPLANNER_API UEnum* StaticEnum<EHTNWorldStateOperation>()
	{
		return EHTNWorldStateOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enumerators[] = {
		{ "EHTNWorldStateOperation::Set", (int64)EHTNWorldStateOperation::Set },
		{ "EHTNWorldStateOperation::Increase", (int64)EHTNWorldStateOperation::Increase },
		{ "EHTNWorldStateOperation::Decrease", (int64)EHTNWorldStateOperation::Decrease },
		{ "EHTNWorldStateOperation::MAX", (int64)EHTNWorldStateOperation::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enum_MetaDataParams[] = {
		{ "Decrease.Name", "EHTNWorldStateOperation::Decrease" },
		{ "Increase.Name", "EHTNWorldStateOperation::Increase" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EHTNWorldStateOperation::MAX" },
		{ "ModuleRelativePath", "Public/HTNDomain.h" },
		{ "Set.Name", "EHTNWorldStateOperation::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HTNPlanner,
		nullptr,
		"EHTNWorldStateOperation",
		"EHTNWorldStateOperation",
		Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation()
	{
		if (!Z_Registration_Info_UEnum_EHTNWorldStateOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHTNWorldStateOperation.InnerSingleton, Z_Construct_UEnum_HTNPlanner_EHTNWorldStateOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHTNWorldStateOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h_Statics::EnumInfo[] = {
		{ EHTNWorldStateCheck_StaticEnum, TEXT("EHTNWorldStateCheck"), &Z_Registration_Info_UEnum_EHTNWorldStateCheck, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 140283235U) },
		{ EHTNWorldStateOperation_StaticEnum, TEXT("EHTNWorldStateOperation"), &Z_Registration_Info_UEnum_EHTNWorldStateOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2082194477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h_2941708501(TEXT("/Script/HTNPlanner"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
