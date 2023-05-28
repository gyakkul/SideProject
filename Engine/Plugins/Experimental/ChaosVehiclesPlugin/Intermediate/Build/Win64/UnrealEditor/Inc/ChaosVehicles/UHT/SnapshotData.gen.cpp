// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotData() {}
// Cross Module References
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSnapshotData();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheeledSnaphotData();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseSnapshotData;
class UScriptStruct* FBaseSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseSnapshotData, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("BaseSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_BaseSnapshotData.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FBaseSnapshotData>()
{
	return FBaseSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//: public UObject\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", ": public UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBaseSnapshotData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "// world coords\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "world coords" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBaseSnapshotData, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "// world coords\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "world coords" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBaseSnapshotData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"BaseSnapshotData",
		sizeof(FBaseSnapshotData),
		alignof(FBaseSnapshotData),
		Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseSnapshotData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WheelSnapshot;
class UScriptStruct* FWheelSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheelSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WheelSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSnapshot, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("WheelSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_WheelSnapshot.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FWheelSnapshot>()
{
	return FWheelSnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWheelSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset = { "SuspensionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelSnapshot, SuspensionOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData[] = {
		{ "Comment", "// suspension location\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "suspension location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle = { "WheelRotationAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelSnapshot, WheelRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData[] = {
		{ "Comment", "// wheel rotation angle, rotated position\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "wheel rotation angle, rotated position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle = { "SteeringAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelSnapshot, SteeringAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData[] = {
		{ "Comment", "// steering position\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "steering position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelSnapshot, WheelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData[] = {
		{ "Comment", "// radius of the wheel can be changed dynamically, to sim damaged ot flat\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "radius of the wheel can be changed dynamically, to sim damaged ot flat" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity = { "WheelAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelSnapshot, WheelAngularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"WheelSnapshot",
		sizeof(FWheelSnapshot),
		alignof(FWheelSnapshot),
		Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_WheelSnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheelSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FWheelSnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WheelSnapshot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWheeledSnaphotData>() == std::is_polymorphic<FBaseSnapshotData>(), "USTRUCT FWheeledSnaphotData cannot be polymorphic unless super FBaseSnapshotData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WheeledSnaphotData;
class UScriptStruct* FWheeledSnaphotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheeledSnaphotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WheeledSnaphotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheeledSnaphotData, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("WheeledSnaphotData"));
	}
	return Z_Registration_Info_UScriptStruct_WheeledSnaphotData.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FWheeledSnaphotData>()
{
	return FWheeledSnaphotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGear_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRPM;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelSnapshots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSnapshots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelSnapshots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheeledSnaphotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear = { "SelectedGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheeledSnaphotData, SelectedGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData[] = {
		{ "Comment", "// -ve reverse gear(s), 0 neutral, +ve forward gears\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "-ve reverse gear(s), 0 neutral, +ve forward gears" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheeledSnaphotData, EngineRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_Inner = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(nullptr, 0) }; // 2402090897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData[] = {
		{ "Comment", "// Engine Revolutions Per Minute\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "Engine Revolutions Per Minute" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheeledSnaphotData, WheelSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData)) }; // 2402090897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FBaseSnapshotData,
		&NewStructOps,
		"WheeledSnaphotData",
		sizeof(FWheeledSnaphotData),
		alignof(FWheeledSnaphotData),
		Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheeledSnaphotData()
	{
		if (!Z_Registration_Info_UScriptStruct_WheeledSnaphotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheeledSnaphotData.InnerSingleton, Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WheeledSnaphotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_SnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_SnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FBaseSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewStructOps, TEXT("BaseSnapshotData"), &Z_Registration_Info_UScriptStruct_BaseSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseSnapshotData), 1229274824U) },
		{ FWheelSnapshot::StaticStruct, Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewStructOps, TEXT("WheelSnapshot"), &Z_Registration_Info_UScriptStruct_WheelSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheelSnapshot), 2402090897U) },
		{ FWheeledSnaphotData::StaticStruct, Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewStructOps, TEXT("WheeledSnaphotData"), &Z_Registration_Info_UScriptStruct_WheeledSnaphotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheeledSnaphotData), 607684448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_SnapshotData_h_2207164116(TEXT("/Script/ChaosVehicles"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_SnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_SnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
