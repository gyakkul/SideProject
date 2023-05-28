// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCollisionEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosCollisionEventFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosCollisionEventData;
class UScriptStruct* FChaosCollisionEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosCollisionEventData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosCollisionEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosCollisionEventData>()
{
	return FChaosCollisionEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A collision event data structure\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "A collision event data structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosCollisionEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Location of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Location of the collision event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Normal of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Normal of the collision event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of object 1 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The velocity of object 1 of the collision event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1 = { "Velocity1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Velocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of object 2 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The velocity of object 2 of the collision event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2 = { "Velocity2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Velocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of object 1 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The mass of object 1 of the collision event" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1 = { "Mass1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Mass1), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of object 2 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The mass of object 2 of the collision event" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2 = { "Mass2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Mass2), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The accumulated impulse vector of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The accumulated impulse vector of the collision event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventData, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosCollisionEventData",
		sizeof(FChaosCollisionEventData),
		alignof(FChaosCollisionEventData),
		Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.InnerSingleton, Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosCollisionEventData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosCollisionSortMethod;
	static UEnum* EChaosCollisionSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosCollisionSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosCollisionSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosCollisionSortMethod"));
		}
		return Z_Registration_Info_UEnum_EChaosCollisionSortMethod.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosCollisionSortMethod>()
	{
		return EChaosCollisionSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enumerators[] = {
		{ "EChaosCollisionSortMethod::SortNone", (int64)EChaosCollisionSortMethod::SortNone },
		{ "EChaosCollisionSortMethod::SortByHighestMass", (int64)EChaosCollisionSortMethod::SortByHighestMass },
		{ "EChaosCollisionSortMethod::SortByHighestSpeed", (int64)EChaosCollisionSortMethod::SortByHighestSpeed },
		{ "EChaosCollisionSortMethod::SortByHighestImpulse", (int64)EChaosCollisionSortMethod::SortByHighestImpulse },
		{ "EChaosCollisionSortMethod::SortByNearestFirst", (int64)EChaosCollisionSortMethod::SortByNearestFirst },
		{ "EChaosCollisionSortMethod::Count", (int64)EChaosCollisionSortMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enumeration defining how to sort collision results\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EChaosCollisionSortMethod::Count" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "SortByHighestImpulse.Name", "EChaosCollisionSortMethod::SortByHighestImpulse" },
		{ "SortByHighestMass.Name", "EChaosCollisionSortMethod::SortByHighestMass" },
		{ "SortByHighestSpeed.Name", "EChaosCollisionSortMethod::SortByHighestSpeed" },
		{ "SortByNearestFirst.Name", "EChaosCollisionSortMethod::SortByNearestFirst" },
		{ "SortNone.Name", "EChaosCollisionSortMethod::SortNone" },
		{ "ToolTip", "Enumeration defining how to sort collision results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"EChaosCollisionSortMethod",
		"EChaosCollisionSortMethod",
		Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod()
	{
		if (!Z_Registration_Info_UEnum_EChaosCollisionSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosCollisionSortMethod.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosCollisionSortMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings;
class UScriptStruct* FChaosCollisionEventRequestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosCollisionEventRequestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosCollisionEventRequestSettings>()
{
	return FChaosCollisionEventRequestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberResults_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinImpulse;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used to define collision event requests\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Settings used to define collision event requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosCollisionEventRequestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults = { "MaxNumberResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MaxNumberResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The min speed threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The min speed threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum impulse threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The minimum impulse threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse = { "MinImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the collision events. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The method used to sort the collision events." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) }; // 3126634927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosCollisionEventRequestSettings",
		sizeof(FChaosCollisionEventRequestSettings),
		alignof(FChaosCollisionEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::EnumInfo[] = {
		{ EChaosCollisionSortMethod_StaticEnum, TEXT("EChaosCollisionSortMethod"), &Z_Registration_Info_UEnum_EChaosCollisionSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3126634927U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::ScriptStructInfo[] = {
		{ FChaosCollisionEventData::StaticStruct, Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewStructOps, TEXT("ChaosCollisionEventData"), &Z_Registration_Info_UScriptStruct_ChaosCollisionEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosCollisionEventData), 3875229756U) },
		{ FChaosCollisionEventRequestSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewStructOps, TEXT("ChaosCollisionEventRequestSettings"), &Z_Registration_Info_UScriptStruct_ChaosCollisionEventRequestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosCollisionEventRequestSettings), 4030984931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_1850603797(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
