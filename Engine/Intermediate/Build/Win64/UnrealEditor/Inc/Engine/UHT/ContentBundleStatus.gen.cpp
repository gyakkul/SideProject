// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleStatus() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EContentBundleStatus();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBundleStatus;
	static UEnum* EContentBundleStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EContentBundleStatus"));
		}
		return Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EContentBundleStatus>()
	{
		return EContentBundleStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EContentBundleStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enumerators[] = {
		{ "EContentBundleStatus::Registered", (int64)EContentBundleStatus::Registered },
		{ "EContentBundleStatus::ReadyToInject", (int64)EContentBundleStatus::ReadyToInject },
		{ "EContentBundleStatus::FailedToInject", (int64)EContentBundleStatus::FailedToInject },
		{ "EContentBundleStatus::ContentInjected", (int64)EContentBundleStatus::ContentInjected },
		{ "EContentBundleStatus::Unknown", (int64)EContentBundleStatus::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enum_MetaDataParams[] = {
		{ "ContentInjected.Name", "EContentBundleStatus::ContentInjected" },
		{ "FailedToInject.Name", "EContentBundleStatus::FailedToInject" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleStatus.h" },
		{ "ReadyToInject.Name", "EContentBundleStatus::ReadyToInject" },
		{ "Registered.Name", "EContentBundleStatus::Registered" },
		{ "Unknown.Name", "EContentBundleStatus::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EContentBundleStatus",
		"EContentBundleStatus",
		Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EContentBundleStatus()
	{
		if (!Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton, Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics::EnumInfo[] = {
		{ EContentBundleStatus_StaticEnum, TEXT("EContentBundleStatus"), &Z_Registration_Info_UEnum_EContentBundleStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3989687065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_1633228004(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
