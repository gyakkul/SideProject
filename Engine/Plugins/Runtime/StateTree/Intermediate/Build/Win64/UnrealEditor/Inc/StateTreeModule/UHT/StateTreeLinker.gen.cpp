// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeLinker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeLinker() {}
// Cross Module References
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeLinkerStatus;
	static UEnum* EStateTreeLinkerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeLinkerStatus"));
		}
		return Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeLinkerStatus>()
	{
		return EStateTreeLinkerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enumerators[] = {
		{ "EStateTreeLinkerStatus::Succeeded", (int64)EStateTreeLinkerStatus::Succeeded },
		{ "EStateTreeLinkerStatus::Failed", (int64)EStateTreeLinkerStatus::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Name", "EStateTreeLinkerStatus::Failed" },
		{ "ModuleRelativePath", "Public/StateTreeLinker.h" },
		{ "Succeeded.Name", "EStateTreeLinkerStatus::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeLinkerStatus",
		"EStateTreeLinkerStatus",
		Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h_Statics::EnumInfo[] = {
		{ EStateTreeLinkerStatus_StaticEnum, TEXT("EStateTreeLinkerStatus"), &Z_Registration_Info_UEnum_EStateTreeLinkerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3601956927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h_2295791194(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
