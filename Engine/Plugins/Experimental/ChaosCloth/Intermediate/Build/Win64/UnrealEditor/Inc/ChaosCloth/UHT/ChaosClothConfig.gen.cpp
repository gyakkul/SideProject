// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCloth/ChaosClothConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothConfig() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothConfig();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothConfig_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothSharedSimConfig();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothSharedSimConfig_NoRegister();
	CHAOSCLOTH_API UEnum* Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode();
	CHAOSCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothWeightedValue();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue;
class UScriptStruct* FChaosClothWeightedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothWeightedValue, (UObject*)Z_Construct_UPackage__Script_ChaosCloth(), TEXT("ChaosClothWeightedValue"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.OuterSingleton;
}
template<> CHAOSCLOTH_API UScriptStruct* StaticStruct<FChaosClothWeightedValue>()
{
	return FChaosClothWeightedValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_High;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothWeightedValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_Low_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothShortName", "Lo" },
		{ "Comment", "/**\n\x09 * Parameter value corresponding to the lower bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "Low Weight" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Parameter value corresponding to the lower bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothWeightedValue, Low), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_Low_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_High_MetaData[] = {
		{ "Category", "Weighted Value" },
		{ "ChaosClothShortName", "Hi" },
		{ "Comment", "/**\n\x09 * Parameter value corresponding to the upper bound of the Weight Map.\n\x09 * A Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\n\x09 * The weights are used to interpolate the individual values from Low to High assigned to each different point.\n\x09 * A Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\n\x09 * The value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map.\n\x09 */" },
		{ "DisplayName", "High Weight" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Parameter value corresponding to the upper bound of the Weight Map.\nA Weight Map stores a series of Weight values assigned to each point, all between 0 and 1.\nThe weights are used to interpolate the individual values from Low to High assigned to each different point.\nA Weight of 0 always corresponds to the Low parameter value, and a Weight of 1 to the High parameter value.\nThe value for Low can be set to be bigger than for High in order to reverse the effect of the Weight Map." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothWeightedValue, High), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_High_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_High_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewProp_High,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
		nullptr,
		&NewStructOps,
		"ChaosClothWeightedValue",
		sizeof(FChaosClothWeightedValue),
		alignof(FChaosClothWeightedValue),
		Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothWeightedValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosClothTetherMode;
	static UEnum* EChaosClothTetherMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothTetherMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosClothTetherMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode, (UObject*)Z_Construct_UPackage__Script_ChaosCloth(), TEXT("EChaosClothTetherMode"));
		}
		return Z_Registration_Info_UEnum_EChaosClothTetherMode.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosClothTetherMode>()
	{
		return EChaosClothTetherMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enumerators[] = {
		{ "EChaosClothTetherMode::FastTetherFastLength", (int64)EChaosClothTetherMode::FastTetherFastLength },
		{ "EChaosClothTetherMode::AccurateTetherFastLength", (int64)EChaosClothTetherMode::AccurateTetherFastLength },
		{ "EChaosClothTetherMode::AccurateTetherAccurateLength", (int64)EChaosClothTetherMode::AccurateTetherAccurateLength },
		{ "EChaosClothTetherMode::MaxChaosClothTetherMode", (int64)EChaosClothTetherMode::MaxChaosClothTetherMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enum_MetaDataParams[] = {
		{ "AccurateTetherAccurateLength.Comment", "// Accurate Tether Accurate Length: Use accurate geodesic method to both setup the tethers and calculate their lengths. Slow initialization and simulation times, but this is the most accurate setting showing the less artifacts.\n" },
		{ "AccurateTetherAccurateLength.Hidden", "" },
		{ "AccurateTetherAccurateLength.Name", "EChaosClothTetherMode::AccurateTetherAccurateLength" },
		{ "AccurateTetherAccurateLength.ToolTip", "Accurate Tether Accurate Length: Use accurate geodesic method to both setup the tethers and calculate their lengths. Slow initialization and simulation times, but this is the most accurate setting showing the less artifacts." },
		{ "AccurateTetherFastLength.Comment", "// Accurate Tether Fast Length: Use the accurate geodesic method to setup the tethers and a fast euclidean method to calculate their lengths. Slow initialization times and fast simulation times, but can still be prone to artifacts.\n" },
		{ "AccurateTetherFastLength.Name", "EChaosClothTetherMode::AccurateTetherFastLength" },
		{ "AccurateTetherFastLength.ToolTip", "Accurate Tether Fast Length: Use the accurate geodesic method to setup the tethers and a fast euclidean method to calculate their lengths. Slow initialization times and fast simulation times, but can still be prone to artifacts." },
		{ "Comment", "/**\n * Long range attachment options.\n * Deprecated.\n */" },
		{ "FastTetherFastLength.Comment", "// Fast Tether Fast Length: Use fast euclidean methods to both setup the tethers and calculate their lengths. Fast initialization and simulation times, but is very prone to artifacts.\n" },
		{ "FastTetherFastLength.Name", "EChaosClothTetherMode::FastTetherFastLength" },
		{ "FastTetherFastLength.ToolTip", "Fast Tether Fast Length: Use fast euclidean methods to both setup the tethers and calculate their lengths. Fast initialization and simulation times, but is very prone to artifacts." },
		{ "MaxChaosClothTetherMode.Hidden", "" },
		{ "MaxChaosClothTetherMode.Name", "EChaosClothTetherMode::MaxChaosClothTetherMode" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Long range attachment options.\nDeprecated." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosCloth,
		nullptr,
		"EChaosClothTetherMode",
		"EChaosClothTetherMode",
		Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothTetherMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosClothTetherMode.InnerSingleton, Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosClothTetherMode.InnerSingleton;
	}
	void UChaosClothConfig::StaticRegisterNativesUChaosClothConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothConfig);
	UClass* Z_Construct_UClass_UChaosClothConfig_NoRegister()
	{
		return UChaosClothConfig::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MassMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MassMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPerParticleMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPerParticleMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffnessWeighted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeStiffnessWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendingStiffnessWeighted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendingStiffnessWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBendingElements_MetaData[];
#endif
		static void NewProp_bUseBendingElements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBendingElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BucklingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BucklingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BucklingStiffnessWeighted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BucklingStiffnessWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaStiffnessWeighted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaStiffnessWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeodesicDistance_MetaData[];
#endif
		static void NewProp_bUseGeodesicDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeodesicDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeTargetStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapeTargetStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrictionCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[];
#endif
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelfCollisions_MetaData[];
#endif
		static void NewProp_bUseSelfCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelfCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelfIntersections_MetaData[];
#endif
		static void NewProp_bUseSelfIntersections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelfIntersections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyBackstop_MetaData[];
#endif
		static void NewProp_bUseLegacyBackstop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyBackstop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalDampingCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalDampingCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePointBasedWindModel_MetaData[];
#endif
		static void NewProp_bUsePointBasedWindModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePointBasedWindModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pressure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimDriveStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimDriveDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FictitiousAngularScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FictitiousAngularScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTetrahedralConstraints_MetaData[];
#endif
		static void NewProp_bUseTetrahedralConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTetrahedralConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseThinShellVolumeConstraints_MetaData[];
#endif
		static void NewProp_bUseThinShellVolumeConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseThinShellVolumeConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseContinuousCollisionDetection_MetaData[];
#endif
		static void NewProp_bUseContinuousCollisionDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContinuousCollisionDetection;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendingStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendingStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaStiffness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TetherMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TetherMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiftCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrainLimitingStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrainLimitingStiffness;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds initial, asset level config for clothing actors. */// Hiding categories that will be used in the future\n" },
		{ "HideCategories", "Collision" },
		{ "IncludePath", "ChaosCloth/ChaosClothConfig.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Holds initial, asset level config for clothing actors. // Hiding categories that will be used in the future" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "Comment", "/**\n\x09 * How cloth particle mass is determined\n\x09 * -\x09Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n\x09 * -\x09Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n\x09 * -\x09""Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "How cloth particle mass is determined\n-    Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n-    Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n-    Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode = { "MassMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, MassMode), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData)) }; // 2134438965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value used when the Mass Mode is set to Uniform Mass. */" },
		{ "EditCondition", "MassMode == EClothMassMode::UniformMass" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when the Mass Mode is set to Uniform Mass." },
		{ "UIMax", "0.001" },
		{ "UIMin", "0.000001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass = { "UniformMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, UniformMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value used when Mass Mode is set to TotalMass. */" },
		{ "EditCondition", "MassMode == EClothMassMode::TotalMass" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when Mass Mode is set to TotalMass." },
		{ "UIMax", "10" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, TotalMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The value used when Mass Mode is set to Density.\n\x09 * Melton Wool: 0.7\n\x09 * Heavy leather: 0.6\n\x09 * Polyurethane: 0.5\n\x09 * Denim: 0.4\n\x09 * Light leather: 0.3\n\x09 * Cotton: 0.2\n\x09 * Silk: 0.1\n\x09 */" },
		{ "EditCondition", "MassMode == EClothMassMode::Density" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when Mass Mode is set to Density.\nMelton Wool: 0.7\nHeavy leather: 0.6\nPolyurethane: 0.5\nDenim: 0.4\nLight leather: 0.3\nCotton: 0.2\nSilk: 0.1" },
		{ "UIMax", "1" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, Density), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData[] = {
		{ "Comment", "/** This is a lower bound to cloth particle masses. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "This is a lower bound to cloth particle masses." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass = { "MinPerParticleMass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, MinPerParticleMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffnessWeighted_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Stiffness of segments constraints. Increase the iteration count for stiffer materials.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Edge Stiffness\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09 */" },
		{ "DisplayName", "Edge Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The Stiffness of segments constraints. Increase the iteration count for stiffer materials.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Edge Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffnessWeighted = { "EdgeStiffnessWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, EdgeStiffnessWeighted), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffnessWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffnessWeighted_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffnessWeighted_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Stiffness of cross segments and bending elements constraints. Increase the iteration count for stiffer materials.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Bend Stiffness\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09 */" },
		{ "DisplayName", "Bending Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The Stiffness of cross segments and bending elements constraints. Increase the iteration count for stiffer materials.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Bend Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffnessWeighted = { "BendingStiffnessWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, BendingStiffnessWeighted), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffnessWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffnessWeighted_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "Comment", "/** Enable the more accurate bending element constraints instead of the faster cross-edge spring constraints used for controlling bending stiffness. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable the more accurate bending element constraints instead of the faster cross-edge spring constraints used for controlling bending stiffness." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseBendingElements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements = { "bUseBendingElements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingRatio_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of Bending Stiffness.\n\x09* When Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration.\n\x09*/" },
		{ "DisplayName", "Buckling Ratio" },
		{ "EditCondition", "bUseBendingElements" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of Bending Stiffness.\nWhen Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingRatio = { "BucklingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, BucklingRatio), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingStiffnessWeighted_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Bending will use this stiffness instead of Bending Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09* Typically, Buckling Stiffness is set to be less than Bending Stiffness. Buckling Ratio determines the switch point between using Bending Stiffness and Buckling Stiffness.\n\x09* If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Buckling Stiffness\" is added to the cloth, \n\x09* then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\n\x09* Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09*/" },
		{ "DisplayName", "Buckling Stiffness" },
		{ "EditCondition", "bUseBendingElements" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Bending will use this stiffness instead of Bending Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than Bending Stiffness. Buckling Ratio determines the switch point between using Bending Stiffness and Buckling Stiffness.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Buckling Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingStiffnessWeighted = { "BucklingStiffnessWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, BucklingStiffnessWeighted), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingStiffnessWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingStiffnessWeighted_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffnessWeighted_MetaData[] = {
		{ "Category", "Material Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the surface area preservation constraints. Increase the iteration count for stiffer materials.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Bend Stiffness\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09 */" },
		{ "DisplayName", "Area Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the surface area preservation constraints. Increase the iteration count for stiffer materials.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Bend Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffnessWeighted = { "AreaStiffnessWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AreaStiffnessWeighted), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffnessWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffnessWeighted_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData[] = {
		{ "Comment", "/** The stiffness of the volume preservation constraints. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the volume preservation constraints." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness = { "VolumeStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, VolumeStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The tethers' stiffness of the long range attachment constraints.\n\x09 * The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\n\x09 * This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\n\x09 * Can lead to an unnatural pull string puppet like behavior.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Tether Stiffness\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09 * Use 0, 0 to disable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The tethers' stiffness of the long range attachment constraints.\nThe long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\nThis can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\nCan lead to an unnatural pull string puppet like behavior.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Tether Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint.\nUse 0, 0 to disable." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, TetherStiffness), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherStiffness_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherScale_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 * The limit scale of the long range attachment constraints (aka tether limit).\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Tether Scale\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to set the tethers' scale.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The limit scale of the long range attachment constraints (aka tether limit).\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Tether Scale\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to set the tethers' scale." },
		{ "UIMax", "1.1" },
		{ "UIMin", "1." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherScale = { "TetherScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, TetherScale), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherScale_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "Comment", "/**\n\x09 * Use geodesic instead of euclidean distance calculations for the Long Range Attachment constraint,\n\x09 * which is slower at setup but more accurate at establishing the correct position and length of the tethers,\n\x09 * and therefore is less prone to artifacts during the simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use geodesic instead of euclidean distance calculations for the Long Range Attachment constraint,\nwhich is slower at setup but more accurate at establishing the correct position and length of the tethers,\nand therefore is less prone to artifacts during the simulation." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseGeodesicDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance = { "bUseGeodesicDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData[] = {
		{ "Comment", "/** The stiffness of the shape target constraints. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the shape target constraints." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness = { "ShapeTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, ShapeTargetStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The added thickness of collision shapes. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The added thickness of collision shapes." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction coefficient for cloth - collider interaction. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Friction coefficient for cloth - collider interaction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient = { "FrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, FrictionCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "Comment", "/**\n\x09 * Use continuous collision detection (CCD) to prevent any missed collisions between fast moving particles and colliders.\n\x09 * This has a negative effect on performance compared to when resolving collision without using CCD.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use continuous collision detection (CCD) to prevent any missed collisions between fast moving particles and colliders.\nThis has a negative effect on performance compared to when resolving collision without using CCD." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseCCD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "Comment", "/** Enable self collision repulsion forces (point-face). */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable self collision repulsion forces (point-face)." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseSelfCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions = { "bUseSelfCollisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The radius of the spheres used in self collision. (i.e., offset per side. total thickness of cloth is 2x this value) */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of the spheres used in self collision. (i.e., offset per side. total thickness of cloth is 2x this value)" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, SelfCollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionFriction_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Friction coefficient for cloth - cloth interaction. */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Friction coefficient for cloth - cloth interaction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionFriction = { "SelfCollisionFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, SelfCollisionFriction), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "Comment", "/** Enable self intersection resolution. This will try to fix any cloth intersections that are not handled by collision repulsions. */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable self intersection resolution. This will try to fix any cloth intersections that are not handled by collision repulsions." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseSelfIntersections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections = { "bUseSelfIntersections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop_MetaData[] = {
		{ "Category", "Collision Properties" },
		{ "Comment", "/**\n\x09 * This parameter is automatically set by the migration code. It can be overridden here to use the old way of authoring the backstop distances.\n\x09 * The legacy backstop requires the sphere radius to be included within the painted distance mask, making it difficult to author correctly. In this case the backstop distance is the distance from the animated mesh to the center of the corresponding backstop collision sphere.\n\x09 * The non legacy backstop automatically adds the matching sphere's radius to the distance calculations at runtime to make for a simpler authoring of the backstop distances. In this case the backstop distance is the distance from the animated mesh to the surface of the backstop collision sphere.\n\x09 * In both cases, a positive backstop distance goes against the corresponding animated mesh's normal, and a negative backstop distance goes along the corresponding animated mesh's normal.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "This parameter is automatically set by the migration code. It can be overridden here to use the old way of authoring the backstop distances.\nThe legacy backstop requires the sphere radius to be included within the painted distance mask, making it difficult to author correctly. In this case the backstop distance is the distance from the animated mesh to the center of the corresponding backstop collision sphere.\nThe non legacy backstop automatically adds the matching sphere's radius to the distance calculations at runtime to make for a simpler authoring of the backstop distances. In this case the backstop distance is the distance from the animated mesh to the surface of the backstop collision sphere.\nIn both cases, a positive backstop distance goes against the corresponding animated mesh's normal, and a negative backstop distance goes along the corresponding animated mesh's normal." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseLegacyBackstop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop = { "bUseLegacyBackstop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of global damping applied to the cloth velocities, also known as point damping.\n\x09 * Point damping improves simulation stability, but can also cause an overall slow-down effect and therefore is best left to very small percentage amounts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of global damping applied to the cloth velocities, also known as point damping.\nPoint damping improves simulation stability, but can also cause an overall slow-down effect and therefore is best left to very small percentage amounts." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient = { "DampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, DampingCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LocalDampingCoefficient_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of local damping applied to the cloth velocities.\n\x09 * This type of damping only damps individual deviations of the particles velocities from the global motion.\n\x09 * It makes the cloth deformations more cohesive and reduces jitter without affecting the overall movement.\n\x09 * It can also produce synchronization artifacts where part of the cloth mesh are disconnected (which might well be desirable, or not), and is more expensive than global damping.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of local damping applied to the cloth velocities.\nThis type of damping only damps individual deviations of the particles velocities from the global motion.\nIt makes the cloth deformations more cohesive and reduces jitter without affecting the overall movement.\nIt can also produce synchronization artifacts where part of the cloth mesh are disconnected (which might well be desirable, or not), and is more expensive than global damping." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LocalDampingCoefficient = { "LocalDampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, LocalDampingCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LocalDampingCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LocalDampingCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "Comment", "/**\n\x09 * This parameter is automatically set by the migration code. It can be overridden here to use the old deprecated \"Legacy\" wind model in order to preserve behavior with previous versions of the engine.\n\x09 * The old wind model is not an accurate aerodynamic model and as such should be avoided. Being point based, it doesn't take into account the surface area that gets hit by the wind.\n\x09 * Using this model makes the simulation slightly slower, disables the aerodynamically accurate wind model, and prevents the cloth to interact with the surrounding environment (air, water, ...etc.) even when there is no wind.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "This parameter is automatically set by the migration code. It can be overridden here to use the old deprecated \"Legacy\" wind model in order to preserve behavior with previous versions of the engine.\nThe old wind model is not an accurate aerodynamic model and as such should be avoided. Being point based, it doesn't take into account the surface area that gets hit by the wind.\nUsing this model makes the simulation slightly slower, disables the aerodynamically accurate wind model, and prevents the cloth to interact with the surrounding environment (air, water, ...etc.) even when there is no wind." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUsePointBasedWindModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel = { "bUsePointBasedWindModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Drag_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The aerodynamic coefficient of drag applying on each particle.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Drag\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to set the aerodynamic drag.\n\x09 */" },
		{ "EditCondition", "!bUsePointBasedWindModel" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The aerodynamic coefficient of drag applying on each particle.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Drag\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to set the aerodynamic drag." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, Drag), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Drag_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Lift_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The aerodynamic coefficient of lift applying on each particle.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Lift\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to set the aerodynamic lift.\n\x09 */" },
		{ "EditCondition", "!bUsePointBasedWindModel" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The aerodynamic coefficient of lift applying on each particle.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Lift\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to set the aerodynamic lift." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Lift = { "Lift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, Lift), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Lift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Lift_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "Comment", "// Use the config gravity value instead of world gravity.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use the config gravity value instead of world gravity." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseGravityOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "Comment", "// Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "Comment", "// The gravitational acceleration vector [cm/s^2]\n" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The gravitational acceleration vector [cm/s^2]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Pressure_MetaData[] = {
		{ "Category", "Environmental Properties" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** \n\x09 * Pressure force strength applied in the normal direction(use negative value to push toward backface)\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Pressure\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to set the pressure.\x09 \n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Pressure force strength applied in the normal direction(use negative value to push toward backface)\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Pressure\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to set the pressure." },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Pressure = { "Pressure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, Pressure), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Pressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Pressure_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveStiffness_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the constraint driving the cloth towards the animated goal mesh.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Anim Drive Stiffness\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is meaningful and sufficient to enable this constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The strength of the constraint driving the cloth towards the animated goal mesh.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Anim Drive Stiffness\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is meaningful and sufficient to enable this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveStiffness = { "AnimDriveStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AnimDriveStiffness), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveStiffness_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveDamping_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The damping amount of the anim drive.\n\x09 * If an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Anim Drive Damping\" is added to the cloth, \n\x09 * then both the Low and High values will be used in conjunction with the per particle Weight stored\n\x09 * in the Weight Map to interpolate the final value from them.\n\x09 * Otherwise only the Low value is sufficient to work on this constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The damping amount of the anim drive.\nIf an enabled Weight Map (Mask with values in the range [0;1]) targeting the \"Anim Drive Damping\" is added to the cloth,\nthen both the Low and High values will be used in conjunction with the per particle Weight stored\nin the Weight Map to interpolate the final value from them.\nOtherwise only the Low value is sufficient to work on this constraint." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveDamping = { "AnimDriveDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AnimDriveDamping), Z_Construct_UScriptStruct_FChaosClothWeightedValue, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveDamping_MetaData)) }; // 3603585635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of linear velocities sent to the local cloth space from the reference bone\n\x09 * (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of linear velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, LinearVelocityScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of angular velocities sent to the local cloth space from the reference bone\n\x09 * (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of angular velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AngularVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FictitiousAngularScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force).\n\x09 * This parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the\n\x09 * simulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which\n\x09 * case the cloth is simulated with full world space angular velocities and subjected to the true physical world inertial forces.\n\x09 * Values range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force).\nThis parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the\nsimulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which\ncase the cloth is simulated with full world space angular velocities and subjected to the true physical world inertial forces.\nValues range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FictitiousAngularScale = { "FictitiousAngularScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, FictitiousAngularScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FictitiousAngularScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FictitiousAngularScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData[] = {
		{ "Comment", "/** Enable tetrahedral constraints. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable tetrahedral constraints." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseTetrahedralConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints = { "bUseTetrahedralConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData[] = {
		{ "Comment", "/** Enable thin shell volume constraints. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable thin shell volume constraints." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseThinShellVolumeConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints = { "bUseThinShellVolumeConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData[] = {
		{ "Comment", "/** Enable continuous collision detection. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable continuous collision detection." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseContinuousCollisionDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection = { "bUseContinuousCollisionDetection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, EdgeStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData[] = {
		{ "Comment", "/** The Stiffness of the bending constraints. Increase the iteration count for stiffer materials. Increase the iteration count for stiffer materials. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The Stiffness of the bending constraints. Increase the iteration count for stiffer materials. Increase the iteration count for stiffer materials." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness = { "BendingStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, BendingStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData[] = {
		{ "Comment", "/** The stiffness of the area preservation constraints. Increase the iteration count for stiffer materials. */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the area preservation constraints. Increase the iteration count for stiffer materials." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness = { "AreaStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AreaStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode = { "TetherMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, TetherMode_DEPRECATED), Z_Construct_UEnum_ChaosCloth_EChaosClothTetherMode, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode_MetaData)) }; // 1208612339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale = { "LimitScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, LimitScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, DragCoefficient_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LiftCoefficient_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LiftCoefficient = { "LiftCoefficient", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, LiftCoefficient_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LiftCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, AnimDriveSpringStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness = { "StrainLimitingStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothConfig, StrainLimitingStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffnessWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffnessWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BucklingStiffnessWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffnessWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseCCD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_SelfCollisionFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfIntersections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseLegacyBackstop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LocalDampingCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUsePointBasedWindModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Lift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FictitiousAngularScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TetherMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LiftCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothConfig_Statics::ClassParams = {
		&UChaosClothConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothConfig()
	{
		if (!Z_Registration_Info_UClass_UChaosClothConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothConfig.OuterSingleton, Z_Construct_UClass_UChaosClothConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothConfig.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothConfig>()
	{
		return UChaosClothConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothConfig)
	void UChaosClothSharedSimConfig::StaticRegisterNativesUChaosClothSharedSimConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothSharedSimConfig);
	UClass* Z_Construct_UClass_UChaosClothSharedSimConfig_NoRegister()
	{
		return UChaosClothSharedSimConfig::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothSharedSimConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivisionCount;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDampingOverride_MetaData[];
#endif
		static void NewProp_bUseDampingOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDampingOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpaceSimulation_MetaData[];
#endif
		static void NewProp_bUseLocalSpaceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpaceSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseXPBDConstraints_MetaData[];
#endif
		static void NewProp_bUseXPBDConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseXPBDConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothSharedConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Chaos config settings shared between all instances of a skeletal mesh.\n * Unlike UChaosClothConfig, these settings contain common cloth simulation\n * parameters that cannot change between the various clothing assets assigned\n * to a specific skeletal mesh. @seealso UChaosClothConfig.\n */" },
		{ "IncludePath", "ChaosCloth/ChaosClothConfig.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Chaos config settings shared between all instances of a skeletal mesh.\nUnlike UChaosClothConfig, these settings contain common cloth simulation\nparameters that cannot change between the various clothing assets assigned\nto a specific skeletal mesh. @seealso UChaosClothConfig." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The number of time step dependent solver iterations. This sets iterations at 60fps. \n\x09 * This will increase the stiffness of all constraints but will increase the CPU cost.\n\x09 * If the frame rate is higher, the actual number of iterations used by the solver might be less, if the frame rate is lower it might be more.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The number of time step dependent solver iterations. This sets iterations at 60fps.\nThis will increase the stiffness of all constraints but will increase the CPU cost.\nIf the frame rate is higher, the actual number of iterations used by the solver might be less, if the frame rate is lower it might be more." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, IterationCount), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_MaxIterationCount_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The maximum number of solver iterations.\n\x09 * This is the upper limit of the number of iterations set in solver, when the frame rate is lower than 60fps.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The maximum number of solver iterations.\nThis is the upper limit of the number of iterations set in solver, when the frame rate is lower than 60fps." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_MaxIterationCount = { "MaxIterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, MaxIterationCount), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_MaxIterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_MaxIterationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The number of solver substeps.\n\x09 * This will increase the precision of the collision inputs and help with constraint resolutions but will increase the CPU cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The number of solver substeps.\nThis will increase the precision of the collision inputs and help with constraint resolutions but will increase the CPU cost." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount = { "SubdivisionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, SubdivisionCount), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "Comment", "// The radius of the spheres used in self collision \n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of the spheres used in self collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, SelfCollisionThickness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Comment", "// The radius of cloth points when considering collisions against collider shapes.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of cloth points when considering collisions against collider shapes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, CollisionThickness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData[] = {
		{ "Comment", "// Use shared config damping rather than per cloth damping.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use shared config damping rather than per cloth damping." },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseDampingOverride_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride = { "bUseDampingOverride", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData[] = {
		{ "Comment", "// The amount of cloth damping. Override the per cloth damping coefficients.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of cloth damping. Override the per cloth damping coefficients." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, Damping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Comment", "// Use the config gravity value instead of world gravity.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use the config gravity value instead of world gravity." },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseGravityOverride_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Comment", "// Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, GravityScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData[] = {
		{ "Comment", "// The gravitational acceleration vector [cm/s^2]\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The gravitational acceleration vector [cm/s^2]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothSharedSimConfig, Gravity_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData[] = {
		{ "Comment", "// Enable local space simulation to help with jitter due to floating point precision errors if the character is far away from the world origin\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable local space simulation to help with jitter due to floating point precision errors if the character is far away from the world origin" },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseLocalSpaceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation = { "bUseLocalSpaceSimulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData[] = {
		{ "Comment", "// Enable the XPBD constraints that resolve stiffness independently from the number of iterations\n// Experimental, this feature might be removed without warning, not for production use\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable the XPBD constraints that resolve stiffness independently from the number of iterations\nExperimental, this feature might be removed without warning, not for production use" },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseXPBDConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints = { "bUseXPBDConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_MaxIterationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothSharedSimConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::ClassParams = {
		&UChaosClothSharedSimConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothSharedSimConfig()
	{
		if (!Z_Registration_Info_UClass_UChaosClothSharedSimConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothSharedSimConfig.OuterSingleton, Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothSharedSimConfig.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothSharedSimConfig>()
	{
		return UChaosClothSharedSimConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothSharedSimConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothSharedSimConfig)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::EnumInfo[] = {
		{ EChaosClothTetherMode_StaticEnum, TEXT("EChaosClothTetherMode"), &Z_Registration_Info_UEnum_EChaosClothTetherMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1208612339U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothWeightedValue::StaticStruct, Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics::NewStructOps, TEXT("ChaosClothWeightedValue"), &Z_Registration_Info_UScriptStruct_ChaosClothWeightedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothWeightedValue), 3603585635U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothConfig, UChaosClothConfig::StaticClass, TEXT("UChaosClothConfig"), &Z_Registration_Info_UClass_UChaosClothConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothConfig), 1125504179U) },
		{ Z_Construct_UClass_UChaosClothSharedSimConfig, UChaosClothSharedSimConfig::StaticClass, TEXT("UChaosClothSharedSimConfig"), &Z_Registration_Info_UClass_UChaosClothSharedSimConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothSharedSimConfig), 2278218363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_1543993165(TEXT("/Script/ChaosCloth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
