// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerType() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerType;
	static UEnum* EDataLayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerType"));
		}
		return Z_Registration_Info_UEnum_EDataLayerType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDataLayerType>()
	{
		return EDataLayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDataLayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enumerators[] = {
		{ "EDataLayerType::Runtime", (int64)EDataLayerType::Runtime },
		{ "EDataLayerType::Editor", (int64)EDataLayerType::Editor },
		{ "EDataLayerType::Unknown", (int64)EDataLayerType::Unknown },
		{ "EDataLayerType::Size", (int64)EDataLayerType::Size },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Editor.Name", "EDataLayerType::Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerType.h" },
		{ "Runtime.Name", "EDataLayerType::Runtime" },
		{ "Size.Hidden", "" },
		{ "Size.Name", "EDataLayerType::Size" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EDataLayerType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDataLayerType",
		"EDataLayerType",
		Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDataLayerType()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerType.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataLayerType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h_Statics::EnumInfo[] = {
		{ EDataLayerType_StaticEnum, TEXT("EDataLayerType"), &Z_Registration_Info_UEnum_EDataLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3721880825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h_4056060039(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
