// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosBreakingEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBreakingEventFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakingEventData;
class UScriptStruct* FChaosBreakingEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventData>()
{
	return FChaosBreakingEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A breaking event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "A breaking event data structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Location of the breaking event (centroid)\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Location of the breaking event (centroid)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The velocity of the breaking event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The mass of the breaking event" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakingEventData",
		sizeof(FChaosBreakingEventData),
		alignof(FChaosBreakingEventData),
		Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosBreakingSortMethod;
	static UEnum* EChaosBreakingSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosBreakingSortMethod"));
		}
		return Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosBreakingSortMethod>()
	{
		return EChaosBreakingSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enumerators[] = {
		{ "EChaosBreakingSortMethod::SortNone", (int64)EChaosBreakingSortMethod::SortNone },
		{ "EChaosBreakingSortMethod::SortByHighestMass", (int64)EChaosBreakingSortMethod::SortByHighestMass },
		{ "EChaosBreakingSortMethod::SortByHighestSpeed", (int64)EChaosBreakingSortMethod::SortByHighestSpeed },
		{ "EChaosBreakingSortMethod::SortByNearestFirst", (int64)EChaosBreakingSortMethod::SortByNearestFirst },
		{ "EChaosBreakingSortMethod::Count", (int64)EChaosBreakingSortMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enumeration defining how to sort breaking results\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EChaosBreakingSortMethod::Count" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "SortByHighestMass.Name", "EChaosBreakingSortMethod::SortByHighestMass" },
		{ "SortByHighestSpeed.Name", "EChaosBreakingSortMethod::SortByHighestSpeed" },
		{ "SortByNearestFirst.Name", "EChaosBreakingSortMethod::SortByNearestFirst" },
		{ "SortNone.Name", "EChaosBreakingSortMethod::SortNone" },
		{ "ToolTip", "Enumeration defining how to sort breaking results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"EChaosBreakingSortMethod",
		"EChaosBreakingSortMethod",
		Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod()
	{
		if (!Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings;
class UScriptStruct* FChaosBreakingEventRequestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventRequestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventRequestSettings>()
{
	return FChaosBreakingEventRequestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used to refine breaking event requests\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Settings used to refine breaking event requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventRequestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum breaking radius threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum breaking radius threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum speed threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum mass threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the breaking events. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The method used to sort the breaking events." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) }; // 3489048511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakingEventRequestSettings",
		sizeof(FChaosBreakingEventRequestSettings),
		alignof(FChaosBreakingEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::EnumInfo[] = {
		{ EChaosBreakingSortMethod_StaticEnum, TEXT("EChaosBreakingSortMethod"), &Z_Registration_Info_UEnum_EChaosBreakingSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3489048511U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::ScriptStructInfo[] = {
		{ FChaosBreakingEventData::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewStructOps, TEXT("ChaosBreakingEventData"), &Z_Registration_Info_UScriptStruct_ChaosBreakingEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakingEventData), 3951236017U) },
		{ FChaosBreakingEventRequestSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewStructOps, TEXT("ChaosBreakingEventRequestSettings"), &Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakingEventRequestSettings), 517881730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_1516764306(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
