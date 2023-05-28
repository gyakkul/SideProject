// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionEngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionEngineTypes() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollectionAttributeEnum;
	static UEnum* ECollectionAttributeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectionAttributeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollectionAttributeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ECollectionAttributeEnum"));
		}
		return Z_Registration_Info_UEnum_ECollectionAttributeEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionAttributeEnum>()
	{
		return ECollectionAttributeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enumerators[] = {
		{ "ECollectionAttributeEnum::Chaos_Active", (int64)ECollectionAttributeEnum::Chaos_Active },
		{ "ECollectionAttributeEnum::Chaos_DynamicState", (int64)ECollectionAttributeEnum::Chaos_DynamicState },
		{ "ECollectionAttributeEnum::Chaos_CollisionGroup", (int64)ECollectionAttributeEnum::Chaos_CollisionGroup },
		{ "ECollectionAttributeEnum::Chaos_Max", (int64)ECollectionAttributeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enum_MetaDataParams[] = {
		{ "Chaos_Active.DisplayName", "Active" },
		{ "Chaos_Active.Name", "ECollectionAttributeEnum::Chaos_Active" },
		{ "Chaos_CollisionGroup.DisplayName", "CollisionGroup" },
		{ "Chaos_CollisionGroup.Name", "ECollectionAttributeEnum::Chaos_CollisionGroup" },
		{ "Chaos_DynamicState.DisplayName", "DynamicState" },
		{ "Chaos_DynamicState.Name", "ECollectionAttributeEnum::Chaos_DynamicState" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "ECollectionAttributeEnum::Chaos_Max" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionEngineTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"ECollectionAttributeEnum",
		"ECollectionAttributeEnum",
		Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectionAttributeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollectionAttributeEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollectionAttributeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollectionGroupEnum;
	static UEnum* ECollectionGroupEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectionGroupEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollectionGroupEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ECollectionGroupEnum"));
		}
		return Z_Registration_Info_UEnum_ECollectionGroupEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionGroupEnum>()
	{
		return ECollectionGroupEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enumerators[] = {
		{ "ECollectionGroupEnum::Chaos_Traansform", (int64)ECollectionGroupEnum::Chaos_Traansform },
		{ "ECollectionGroupEnum::Chaos_Max", (int64)ECollectionGroupEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enum_MetaDataParams[] = {
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "ECollectionGroupEnum::Chaos_Max" },
		{ "Chaos_Traansform.DisplayName", "Transform" },
		{ "Chaos_Traansform.Name", "ECollectionGroupEnum::Chaos_Traansform" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionEngineTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"ECollectionGroupEnum",
		"ECollectionGroupEnum",
		Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectionGroupEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollectionGroupEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollectionGroupEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h_Statics::EnumInfo[] = {
		{ ECollectionAttributeEnum_StaticEnum, TEXT("ECollectionAttributeEnum"), &Z_Registration_Info_UEnum_ECollectionAttributeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3020581192U) },
		{ ECollectionGroupEnum_StaticEnum, TEXT("ECollectionGroupEnum"), &Z_Registration_Info_UEnum_ECollectionGroupEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4144299176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h_2611688543(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
