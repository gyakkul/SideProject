// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosRemovalEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosRemovalEventFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosRemovalEventData;
class UScriptStruct* FChaosRemovalEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEventData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosRemovalEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosRemovalEventData>()
{
	return FChaosRemovalEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A Removal event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "A Removal event data structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosRemovalEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Current removal location. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "Current removal location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The mass of the removal. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The mass of the removal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The particle index of the removal. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The particle index of the removal." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventData, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_ParticleIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewProp_ParticleIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosRemovalEventData",
		sizeof(FChaosRemovalEventData),
		alignof(FChaosRemovalEventData),
		Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.InnerSingleton, Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosRemovalEventData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosRemovalSortMethod;
	static UEnum* EChaosRemovalSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosRemovalSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosRemovalSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosRemovalSortMethod"));
		}
		return Z_Registration_Info_UEnum_EChaosRemovalSortMethod.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosRemovalSortMethod>()
	{
		return EChaosRemovalSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enumerators[] = {
		{ "EChaosRemovalSortMethod::SortNone", (int64)EChaosRemovalSortMethod::SortNone },
		{ "EChaosRemovalSortMethod::SortByHighestMass", (int64)EChaosRemovalSortMethod::SortByHighestMass },
		{ "EChaosRemovalSortMethod::SortByNearestFirst", (int64)EChaosRemovalSortMethod::SortByNearestFirst },
		{ "EChaosRemovalSortMethod::Count", (int64)EChaosRemovalSortMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enumeration defining how to sort removal results\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EChaosRemovalSortMethod::Count" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "SortByHighestMass.Name", "EChaosRemovalSortMethod::SortByHighestMass" },
		{ "SortByNearestFirst.Name", "EChaosRemovalSortMethod::SortByNearestFirst" },
		{ "SortNone.Name", "EChaosRemovalSortMethod::SortNone" },
		{ "ToolTip", "Enumeration defining how to sort removal results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"EChaosRemovalSortMethod",
		"EChaosRemovalSortMethod",
		Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod()
	{
		if (!Z_Registration_Info_UEnum_EChaosRemovalSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosRemovalSortMethod.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosRemovalSortMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings;
class UScriptStruct* FChaosRemovalEventRequestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosRemovalEventRequestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosRemovalEventRequestSettings>()
{
	return FChaosRemovalEventRequestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfResults_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosRemovalEventRequestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass treshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The minimum mass treshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results (if location is set on destruction event listener). */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results (if location is set on destruction event listener)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the removal events. */" },
		{ "ModuleRelativePath", "Public/ChaosRemovalEventFilter.h" },
		{ "ToolTip", "The method used to sort the removal events." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosRemovalEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) }; // 2139137213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewProp_SortMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosRemovalEventRequestSettings",
		sizeof(FChaosRemovalEventRequestSettings),
		alignof(FChaosRemovalEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::EnumInfo[] = {
		{ EChaosRemovalSortMethod_StaticEnum, TEXT("EChaosRemovalSortMethod"), &Z_Registration_Info_UEnum_EChaosRemovalSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2139137213U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::ScriptStructInfo[] = {
		{ FChaosRemovalEventData::StaticStruct, Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics::NewStructOps, TEXT("ChaosRemovalEventData"), &Z_Registration_Info_UScriptStruct_ChaosRemovalEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosRemovalEventData), 2059567885U) },
		{ FChaosRemovalEventRequestSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics::NewStructOps, TEXT("ChaosRemovalEventRequestSettings"), &Z_Registration_Info_UScriptStruct_ChaosRemovalEventRequestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosRemovalEventRequestSettings), 3772828862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_1047408179(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
