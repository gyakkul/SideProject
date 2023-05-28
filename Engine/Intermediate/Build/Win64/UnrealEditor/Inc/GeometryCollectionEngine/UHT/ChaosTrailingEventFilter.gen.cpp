// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosTrailingEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosTrailingEventFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosTrailingEventData;
class UScriptStruct* FChaosTrailingEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosTrailingEventData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosTrailingEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosTrailingEventData>()
{
	return FChaosTrailingEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A trailing event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "A trailing event data structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosTrailingEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Current trail location. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "Current trail location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The velocity of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The velocity of the trail." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The angular velocity of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The angular velocity of the trail." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The mass of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The mass of the trail." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The particle index of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The particle index of the trail." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventData, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosTrailingEventData",
		sizeof(FChaosTrailingEventData),
		alignof(FChaosTrailingEventData),
		Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.InnerSingleton, Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosTrailingEventData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosTrailingSortMethod;
	static UEnum* EChaosTrailingSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosTrailingSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosTrailingSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosTrailingSortMethod"));
		}
		return Z_Registration_Info_UEnum_EChaosTrailingSortMethod.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosTrailingSortMethod>()
	{
		return EChaosTrailingSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enumerators[] = {
		{ "EChaosTrailingSortMethod::SortNone", (int64)EChaosTrailingSortMethod::SortNone },
		{ "EChaosTrailingSortMethod::SortByHighestMass", (int64)EChaosTrailingSortMethod::SortByHighestMass },
		{ "EChaosTrailingSortMethod::SortByHighestSpeed", (int64)EChaosTrailingSortMethod::SortByHighestSpeed },
		{ "EChaosTrailingSortMethod::SortByNearestFirst", (int64)EChaosTrailingSortMethod::SortByNearestFirst },
		{ "EChaosTrailingSortMethod::Count", (int64)EChaosTrailingSortMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enumeration defining how to sort trailing results\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EChaosTrailingSortMethod::Count" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "SortByHighestMass.Name", "EChaosTrailingSortMethod::SortByHighestMass" },
		{ "SortByHighestSpeed.Name", "EChaosTrailingSortMethod::SortByHighestSpeed" },
		{ "SortByNearestFirst.Name", "EChaosTrailingSortMethod::SortByNearestFirst" },
		{ "SortNone.Name", "EChaosTrailingSortMethod::SortNone" },
		{ "ToolTip", "Enumeration defining how to sort trailing results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"EChaosTrailingSortMethod",
		"EChaosTrailingSortMethod",
		Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod()
	{
		if (!Z_Registration_Info_UEnum_EChaosTrailingSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosTrailingSortMethod.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosTrailingSortMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings;
class UScriptStruct* FChaosTrailingEventRequestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosTrailingEventRequestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosTrailingEventRequestSettings>()
{
	return FChaosTrailingEventRequestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngularSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngularSpeed;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosTrailingEventRequestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass treshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum mass treshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum speed threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum angular speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum angular speed threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed = { "MinAngularSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinAngularSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results (if location is set on destruction event listener). */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results (if location is set on destruction event listener)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the breaking events. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The method used to sort the breaking events." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) }; // 2571979225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosTrailingEventRequestSettings",
		sizeof(FChaosTrailingEventRequestSettings),
		alignof(FChaosTrailingEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::EnumInfo[] = {
		{ EChaosTrailingSortMethod_StaticEnum, TEXT("EChaosTrailingSortMethod"), &Z_Registration_Info_UEnum_EChaosTrailingSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2571979225U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::ScriptStructInfo[] = {
		{ FChaosTrailingEventData::StaticStruct, Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewStructOps, TEXT("ChaosTrailingEventData"), &Z_Registration_Info_UScriptStruct_ChaosTrailingEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosTrailingEventData), 4089737838U) },
		{ FChaosTrailingEventRequestSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewStructOps, TEXT("ChaosTrailingEventRequestSettings"), &Z_Registration_Info_UScriptStruct_ChaosTrailingEventRequestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosTrailingEventRequestSettings), 1279528263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_2666309508(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosTrailingEventFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
