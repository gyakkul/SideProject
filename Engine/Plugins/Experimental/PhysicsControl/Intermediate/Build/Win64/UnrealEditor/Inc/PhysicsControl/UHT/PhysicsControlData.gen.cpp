// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	PHYSICSCONTROL_API UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControl();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlMultiplier();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlSettings();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlTarget();
	UPackage* Z_Construct_UPackage__Script_PhysicsControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsMovementType;
	static UEnum* EPhysicsMovementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("EPhysicsMovementType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UEnum* StaticEnum<EPhysicsMovementType>()
	{
		return EPhysicsMovementType_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enumerators[] = {
		{ "EPhysicsMovementType::Static", (int64)EPhysicsMovementType::Static },
		{ "EPhysicsMovementType::Kinematic", (int64)EPhysicsMovementType::Kinematic },
		{ "EPhysicsMovementType::Simulated", (int64)EPhysicsMovementType::Simulated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Used by Body Modifiers to specify how the physical bodies should move.  \n */" },
		{ "Kinematic.Comment", "// Kinematic means that the object won't be simulated, but will be moved according to the\n// kinematic target set in the Body Modifier.\n" },
		{ "Kinematic.Name", "EPhysicsMovementType::Kinematic" },
		{ "Kinematic.ToolTip", "Kinematic means that the object won't be simulated, but will be moved according to the\nkinematic target set in the Body Modifier." },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "Simulated.Comment", "// Simulated means that the object will be controlled by the physics solver\n" },
		{ "Simulated.Name", "EPhysicsMovementType::Simulated" },
		{ "Simulated.ToolTip", "Simulated means that the object will be controlled by the physics solver" },
		{ "Static.Comment", "// Static means that the object won't be simulated, and it won't be moved according to the\n// kinematic target set in the Body Modifier (though something else might move it)\n" },
		{ "Static.Name", "EPhysicsMovementType::Static" },
		{ "Static.ToolTip", "Static means that the object won't be simulated, and it won't be moved according to the\nkinematic target set in the Body Modifier (though something else might move it)" },
		{ "ToolTip", "Used by Body Modifiers to specify how the physical bodies should move." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		"EPhysicsMovementType",
		"EPhysicsMovementType",
		Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton, Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlData;
class UScriptStruct* FPhysicsControlData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlData, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlData.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlData>()
{
	return FPhysicsControlData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearExtraDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearExtraDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularExtraDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularExtraDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTorque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains data associated with how physical bodies should be controlled/directed towards their targets. \n * The underlying control is done through damped springs, so the parameters here relate to that.\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Contains data associated with how physical bodies should be controlled/directed towards their targets.\nThe underlying control is done through damped springs, so the parameters here relate to that." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearStrength_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength used to drive linear motion */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The strength used to drive linear motion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearStrength = { "LinearStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, LinearStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearDampingRatio_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The amount of damping associated with the linear strength. A value of 1 Results in critically \n\x09 * damped motion where the control drives as quickly as possible to the target without overshooting. \n\x09 * Values > 1 result in more damped motion, and values below 1 result in faster, but more \"wobbly\" motion.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The amount of damping associated with the linear strength. A value of 1 Results in critically\ndamped motion where the control drives as quickly as possible to the target without overshooting.\nValues > 1 result in more damped motion, and values below 1 result in faster, but more \"wobbly\" motion." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearDampingRatio = { "LinearDampingRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, LinearDampingRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearDampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearDampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearExtraDamping_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The amount of additional linear damping. This is added to the damping that comes from LinearDampingRatio\n\x09 * and can be useful when you want damping even when LinearStrength is zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The amount of additional linear damping. This is added to the damping that comes from LinearDampingRatio\nand can be useful when you want damping even when LinearStrength is zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearExtraDamping = { "LinearExtraDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, LinearExtraDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearExtraDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearExtraDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The maximum force used to drive the linear motion. Zero indicates no limit. */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The maximum force used to drive the linear motion. Zero indicates no limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, MaxForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularStrength_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength used to drive angular motion */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The strength used to drive angular motion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularStrength = { "AngularStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, AngularStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularDampingRatio_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The amount of damping associated with the angular strength. A value of 1 Results in critically \n\x09 * damped motion where the control drives as quickly as possible to the target without overshooting. \n\x09 * Values > 1 result in more damped motion, and values below 1 result in faster, but more \"wobbly\" motion.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The amount of damping associated with the angular strength. A value of 1 Results in critically\ndamped motion where the control drives as quickly as possible to the target without overshooting.\nValues > 1 result in more damped motion, and values below 1 result in faster, but more \"wobbly\" motion." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularDampingRatio = { "AngularDampingRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, AngularDampingRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularDampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularDampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularExtraDamping_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The amount of additional angular damping. This is added to the damping that comes from AngularDampingRatio\n\x09 * and can be useful when you want damping even when AngularStrength is zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The amount of additional angular damping. This is added to the damping that comes from AngularDampingRatio\nand can be useful when you want damping even when AngularStrength is zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularExtraDamping = { "AngularExtraDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, AngularExtraDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularExtraDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularExtraDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxTorque_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The maximum torque used to drive the angular motion. Zero indicates no limit. */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The maximum torque used to drive the angular motion. Zero indicates no limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxTorque = { "MaxTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlData, MaxTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxTorque_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearDampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_LinearExtraDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularDampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_AngularExtraDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_MaxTorque,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlData",
		sizeof(FPhysicsControlData),
		alignof(FPhysicsControlData),
		Z_Construct_UScriptStruct_FPhysicsControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier;
class UScriptStruct* FPhysicsControlMultiplier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlMultiplier, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlMultiplier"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlMultiplier>()
{
	return FPhysicsControlMultiplier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearStrengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearStrengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearExtraDampingMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearExtraDampingMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxForceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularStrengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularStrengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularExtraDampingMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularExtraDampingMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTorqueMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTorqueMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * These parameters allow modification of the parameters in FPhysicsControlData for two reasons:\n * 1. They allow per-axis settings for the linear components (e.g. so you can drive an object \n *    horizontally but still let it fall under gravity)\n * 2. They make it easy to create the controls with \"default\" strength/damping (e.g. taken from the\n *    physics asset) in FPhysicsControlData, and then the strength/damping etc can be scaled every \n *    tick (typically between 0 and 1, though that is up to the user).\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "These parameters allow modification of the parameters in FPhysicsControlData for two reasons:\n1. They allow per-axis settings for the linear components (e.g. so you can drive an object\n   horizontally but still let it fall under gravity)\n2. They make it easy to create the controls with \"default\" strength/damping (e.g. taken from the\n   physics asset) in FPhysicsControlData, and then the strength/damping etc can be scaled every\n   tick (typically between 0 and 1, though that is up to the user)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlMultiplier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearStrengthMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Per-direction multiplier on the linear strength.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Per-direction multiplier on the linear strength." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearStrengthMultiplier = { "LinearStrengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, LinearStrengthMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearStrengthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearStrengthMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearExtraDampingMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Per-direction multiplier on the linear extra damping.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Per-direction multiplier on the linear extra damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearExtraDampingMultiplier = { "LinearExtraDampingMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, LinearExtraDampingMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearExtraDampingMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearExtraDampingMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxForceMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Per-direction multiplier on the maximum force that can be applied. Note that zero means zero force.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Per-direction multiplier on the maximum force that can be applied. Note that zero means zero force." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxForceMultiplier = { "MaxForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, MaxForceMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxForceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularStrengthMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Multiplier on the angular strength.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Multiplier on the angular strength." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularStrengthMultiplier = { "AngularStrengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, AngularStrengthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularStrengthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularStrengthMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularExtraDampingMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Multiplier on the angular extra damping.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Multiplier on the angular extra damping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularExtraDampingMultiplier = { "AngularExtraDampingMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, AngularExtraDampingMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularExtraDampingMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularExtraDampingMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxTorqueMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Per-direction multiplier on the maximum torque that can be applied. Note that zero means zero torque.\n" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Per-direction multiplier on the maximum torque that can be applied. Note that zero means zero torque." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxTorqueMultiplier = { "MaxTorqueMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlMultiplier, MaxTorqueMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxTorqueMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxTorqueMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearStrengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_LinearExtraDampingMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxForceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularStrengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_AngularExtraDampingMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewProp_MaxTorqueMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlMultiplier",
		sizeof(FPhysicsControlMultiplier),
		alignof(FPhysicsControlMultiplier),
		Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlMultiplier()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlTarget;
class UScriptStruct* FPhysicsControlTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlTarget, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlTarget"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlTarget.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlTarget>()
{
	return FPhysicsControlTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyControlPointToTarget_MetaData[];
#endif
		static void NewProp_bApplyControlPointToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyControlPointToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a target position and orientation, and also the target velocity and angular velocity.\n * In many cases the velocities will be calculated automatically (e.g. when setting the target position,\n * the component will optionally calculate an implied velocity. However, the user can also specify a \n * target velocity directly. Note that the velocity influences the control through the damping parameters\n * in FPhysicsControlData\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Defines a target position and orientation, and also the target velocity and angular velocity.\nIn many cases the velocities will be calculated automatically (e.g. when setting the target position,\nthe component will optionally calculate an implied velocity. However, the user can also specify a\ntarget velocity directly. Note that the velocity influences the control through the damping parameters\nin FPhysicsControlData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The target position of the child body, relative to the parent body */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The target position of the child body, relative to the parent body" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlTarget, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The target velocity of the child body, relative to the parent body */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The target velocity of the child body, relative to the parent body" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlTarget, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetOrientation_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The target orientation of the child body, relative to the parent body */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The target orientation of the child body, relative to the parent body" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetOrientation = { "TargetOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlTarget, TargetOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetAngularVelocity_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The target angular velocity (revolutions per second) of the child body, relative to the parent body */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The target angular velocity (revolutions per second) of the child body, relative to the parent body" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetAngularVelocity = { "TargetAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlTarget, TargetAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * Whether to use the ControlPoint as an offset for the target transform, as well as the \n\x09 * physical body. If true then the target TM is treated as a target transform for the actual \n\x09 * object, though the control is still applied through the control point (which is at the \n\x09 * center of mass by default). If false then it is treated as a target transform for the \n\x09 * control point on the object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Whether to use the ControlPoint as an offset for the target transform, as well as the\nphysical body. If true then the target TM is treated as a target transform for the actual\nobject, though the control is still applied through the control point (which is at the\ncenter of mass by default). If false then it is treated as a target transform for the\ncontrol point on the object." },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_SetBit(void* Obj)
	{
		((FPhysicsControlTarget*)Obj)->bApplyControlPointToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget = { "bApplyControlPointToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsControlTarget), &Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_TargetAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlTarget",
		sizeof(FPhysicsControlTarget),
		alignof(FPhysicsControlTarget),
		Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlTarget.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControlSettings;
class UScriptStruct* FPhysicsControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlSettings, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControlSettings.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControlSettings>()
{
	return FPhysicsControlSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationVelocityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkeletalAnimationVelocityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * General settings for a control\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "General settings for a control" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControlSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_ControlPoint_MetaData[] = {
		{ "Comment", "/**\n\x09 * The position of the control point relative to the child mesh. Note that this can't be authored\n\x09 * directly here/on creation - it needs to be set after creation in UPhysicsControlComponent::SetControlPoint\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The position of the control point relative to the child mesh. Note that this can't be authored\ndirectly here/on creation - it needs to be set after creation in UPhysicsControlComponent::SetControlPoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_ControlPoint = { "ControlPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlSettings, ControlPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_ControlPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_ControlPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** If true then the target will be applied on top of the skeletal animation (if there is any) */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "If true then the target will be applied on top of the skeletal animation (if there is any)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((FPhysicsControlSettings*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsControlSettings), &Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The amount of skeletal animation velocity to use in the targets */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The amount of skeletal animation velocity to use in the targets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_SkeletalAnimationVelocityMultiplier = { "SkeletalAnimationVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControlSettings, SkeletalAnimationVelocityMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Whether or not this control should disable collision between the parent and child bodies (only\n\x09 * has an effect if there is a parent body)\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Whether or not this control should disable collision between the parent and child bodies (only\nhas an effect if there is a parent body)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FPhysicsControlSettings*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsControlSettings), &Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Whether or not this control should automatically disable itself at the end of each tick. This\n\x09 * can be useful when it is more convenient to have a branch that handles some condition (e.g. character \n\x09 * is flailing) by updating/enabling the control, and to then have the control automatically get \n\x09 * disabled when the branch is no longer taken.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Whether or not this control should automatically disable itself at the end of each tick. This\ncan be useful when it is more convenient to have a branch that handles some condition (e.g. character\nis flailing) by updating/enabling the control, and to then have the control automatically get\ndisabled when the branch is no longer taken." },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((FPhysicsControlSettings*)Obj)->bAutoDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsControlSettings), &Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_ControlPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_SkeletalAnimationVelocityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewProp_bAutoDisable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControlSettings",
		sizeof(FPhysicsControlSettings),
		alignof(FPhysicsControlSettings),
		Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControlSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControlSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsControl;
class UScriptStruct* FPhysicsControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControl, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("PhysicsControl"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsControl.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FPhysicsControl>()
{
	return FPhysicsControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure that determines a \"control\" - this contains all the information needed to drive (with spring-dampers)\n * a child body relative to a parent body. These bodies will be associated with either a static or skeletal mesh.\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Structure that determines a \"control\" - this contains all the information needed to drive (with spring-dampers)\na child body relative to a parent body. These bodies will be associated with either a static or skeletal mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentMeshComponent_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**  The mesh that will be doing the driving. Blank/non-existent means it will happen in world space */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The mesh that will be doing the driving. Blank/non-existent means it will happen in world space" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentMeshComponent = { "ParentMeshComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ParentMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentBoneName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The name of the skeletal mesh bone or the name of the static mesh body that will be doing the driving. */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The name of the skeletal mesh bone or the name of the static mesh body that will be doing the driving." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ParentBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildMeshComponent_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The mesh that the control will be driving. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The mesh that the control will be driving." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildMeshComponent = { "ChildMeshComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ChildMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildBoneName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * The name of the skeletal mesh bone or the name of the static mesh body that the control \n\x09 * will be driving. */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The name of the skeletal mesh bone or the name of the static mesh body that the control\nwill be driving." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ChildBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlData_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * Strength and damping parameters. Can be modified at any time, but will sometimes have \n\x09 * been set once during initialization \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Strength and damping parameters. Can be modified at any time, but will sometimes have\nbeen set once during initialization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Multiplier for the ControlData. This will typically be modified dynamically, and also expose the ability\n\x09 * to set directional strengths\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "Multiplier for the ControlData. This will typically be modified dynamically, and also expose the ability\nto set directional strengths" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData)) }; // 2703942446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * The position/orientation etc targets for the controls. These are procedural/explicit control targets -\n\x09 * skeletal meshes have the option to use skeletal animation as well, in which case these targets are \n\x09 * expressed as relative to that animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "The position/orientation etc targets for the controls. These are procedural/explicit control targets -\nskeletal meshes have the option to use skeletal animation as well, in which case these targets are\nexpressed as relative to that animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * More general settings for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlData.h" },
		{ "ToolTip", "More general settings for the control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsControl, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ParentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ChildBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewProp_ControlSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"PhysicsControl",
		sizeof(FPhysicsControl),
		alignof(FPhysicsControl),
		Z_Construct_UScriptStruct_FPhysicsControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControl()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsControl.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsControl.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::EnumInfo[] = {
		{ EPhysicsMovementType_StaticEnum, TEXT("EPhysicsMovementType"), &Z_Registration_Info_UEnum_EPhysicsMovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3841797257U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsControlData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewStructOps, TEXT("PhysicsControlData"), &Z_Registration_Info_UScriptStruct_PhysicsControlData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlData), 255878212U) },
		{ FPhysicsControlMultiplier::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewStructOps, TEXT("PhysicsControlMultiplier"), &Z_Registration_Info_UScriptStruct_PhysicsControlMultiplier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlMultiplier), 2703942446U) },
		{ FPhysicsControlTarget::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewStructOps, TEXT("PhysicsControlTarget"), &Z_Registration_Info_UScriptStruct_PhysicsControlTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlTarget), 2672511800U) },
		{ FPhysicsControlSettings::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics::NewStructOps, TEXT("PhysicsControlSettings"), &Z_Registration_Info_UScriptStruct_PhysicsControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControlSettings), 4003162626U) },
		{ FPhysicsControl::StaticStruct, Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewStructOps, TEXT("PhysicsControl"), &Z_Registration_Info_UScriptStruct_PhysicsControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsControl), 2443219655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_1966615523(TEXT("/Script/PhysicsControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
