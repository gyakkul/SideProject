// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintDrives() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAngularDriveMode;
	static UEnum* EAngularDriveMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAngularDriveMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAngularDriveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAngularDriveMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAngularDriveMode"));
		}
		return Z_Registration_Info_UEnum_EAngularDriveMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAngularDriveMode::Type>()
	{
		return EAngularDriveMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAngularDriveMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enumerators[] = {
		{ "EAngularDriveMode::SLERP", (int64)EAngularDriveMode::SLERP },
		{ "EAngularDriveMode::TwistAndSwing", (int64)EAngularDriveMode::TwistAndSwing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "SLERP.Comment", "/** Spherical lerp between the current orientation/velocity and the target orientation/velocity. NOTE: This will NOT work if any angular constraints are set to Locked. */" },
		{ "SLERP.Name", "EAngularDriveMode::SLERP" },
		{ "SLERP.ToolTip", "Spherical lerp between the current orientation/velocity and the target orientation/velocity. NOTE: This will NOT work if any angular constraints are set to Locked." },
		{ "TwistAndSwing.Comment", "/** Path is decomposed into twist (roll constraint) and swing (cone constraint). Doesn't follow shortest arc and may experience gimbal lock. Does work with locked angular constraints. */" },
		{ "TwistAndSwing.Name", "EAngularDriveMode::TwistAndSwing" },
		{ "TwistAndSwing.ToolTip", "Path is decomposed into twist (roll constraint) and swing (cone constraint). Doesn't follow shortest arc and may experience gimbal lock. Does work with locked angular constraints." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAngularDriveMode",
		"EAngularDriveMode::Type",
		Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode()
	{
		if (!Z_Registration_Info_UEnum_EAngularDriveMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAngularDriveMode.InnerSingleton, Z_Construct_UEnum_Engine_EAngularDriveMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAngularDriveMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDrive;
class UScriptStruct* FConstraintDrive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDrive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDrive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDrive, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintDrive"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDrive.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintDrive>()
{
	return FConstraintDrive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintDrive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[];
#endif
		static void NewProp_bEnablePositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVelocityDrive_MetaData[];
#endif
		static void NewProp_bEnableVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVelocityDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDrive>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The spring strength of the drive. Force proportional to the position error. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The spring strength of the drive. Force proportional to the position error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDrive, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The damping strength of the drive. Force proportional to the velocity error. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The damping strength of the drive. Force proportional to the velocity error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDrive, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The force limit of the drive. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The force limit of the drive." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDrive, MaxForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Enables/Disables position drive (orientation if using angular drive)*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Enables/Disables position drive (orientation if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_SetBit(void* Obj)
	{
		((FConstraintDrive*)Obj)->bEnablePositionDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive = { "bEnablePositionDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FConstraintDrive), &Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Enables/Disables velocity drive (angular velocity if using angular drive) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Enables/Disables velocity drive (angular velocity if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintDrive*)Obj)->bEnableVelocityDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive = { "bEnableVelocityDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FConstraintDrive), &Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintDrive",
		sizeof(FConstraintDrive),
		alignof(FConstraintDrive),
		Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintDrive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDrive.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDrive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintDrive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinearDriveConstraint;
class UScriptStruct* FLinearDriveConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinearDriveConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinearDriveConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearDriveConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LinearDriveConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_LinearDriveConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinearDriveConstraint>()
{
	return FLinearDriveConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[];
#endif
		static void NewProp_bEnablePositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Linear Drive */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Linear Drive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearDriveConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "Comment", "/** Target position the linear drive.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target position the linear drive." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget = { "PositionTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, PositionTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "Comment", "/** Target velocity the linear drive. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target velocity the linear drive." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget = { "VelocityTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, VelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive = { "XDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, XDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive = { "YDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, YDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive = { "ZDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, ZDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_SetBit(void* Obj)
	{
		((FLinearDriveConstraint*)Obj)->bEnablePositionDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive = { "bEnablePositionDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLinearDriveConstraint), &Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LinearDriveConstraint",
		sizeof(FLinearDriveConstraint),
		alignof(FLinearDriveConstraint),
		Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_LinearDriveConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinearDriveConstraint.InnerSingleton, Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LinearDriveConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AngularDriveConstraint;
class UScriptStruct* FAngularDriveConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AngularDriveConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AngularDriveConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularDriveConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AngularDriveConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_AngularDriveConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAngularDriveConstraint>()
{
	return FAngularDriveConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwingDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlerpDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlerpDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Angular Drive */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Angular Drive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularDriveConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "Comment", "/** Controls the twist (roll) constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as the twist limit is set to free or limited.*/" },
		{ "DisplayName", "Twist" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the twist (roll) constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as the twist limit is set to free or limited." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive = { "TwistDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, TwistDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "Comment", "/** Controls the cone constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as there is at least one swing limit set to free or limited. */" },
		{ "DisplayName", "Swing" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the cone constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as there is at least one swing limit set to free or limited." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive = { "SwingDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, SwingDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "Comment", "/** Controls the SLERP (spherical lerp) drive between current orientation/velocity and target orientation/velocity. NOTE: This is only available when all three angular limits are either free or limited. Locking any angular limit will turn off the drive implicitly.*/" },
		{ "DisplayName", "SLERP" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the SLERP (spherical lerp) drive between current orientation/velocity and target orientation/velocity. NOTE: This is only available when all three angular limits are either free or limited. Locking any angular limit will turn off the drive implicitly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive = { "SlerpDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, SlerpDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData)) }; // 3701796963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "Comment", "/** Target orientation relative to the the body reference frame.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target orientation relative to the the body reference frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget = { "OrientationTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, OrientationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "Comment", "/** Target angular velocity relative to the body reference frame in revolutions per second. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target angular velocity relative to the body reference frame in revolutions per second." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget = { "AngularVelocityTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, AngularVelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "Comment", "/** Whether motors use SLERP (spherical lerp) or decompose into a Swing motor (cone constraints) and Twist motor (roll constraints). NOTE: SLERP will NOT work if any of the angular constraints are locked. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Whether motors use SLERP (spherical lerp) or decompose into a Swing motor (cone constraints) and Twist motor (roll constraints). NOTE: SLERP will NOT work if any of the angular constraints are locked." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode = { "AngularDriveMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, AngularDriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData)) }; // 315531254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AngularDriveConstraint",
		sizeof(FAngularDriveConstraint),
		alignof(FAngularDriveConstraint),
		Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_AngularDriveConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AngularDriveConstraint.InnerSingleton, Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AngularDriveConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::EnumInfo[] = {
		{ EAngularDriveMode_StaticEnum, TEXT("EAngularDriveMode"), &Z_Registration_Info_UEnum_EAngularDriveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 315531254U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::ScriptStructInfo[] = {
		{ FConstraintDrive::StaticStruct, Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewStructOps, TEXT("ConstraintDrive"), &Z_Registration_Info_UScriptStruct_ConstraintDrive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDrive), 3701796963U) },
		{ FLinearDriveConstraint::StaticStruct, Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewStructOps, TEXT("LinearDriveConstraint"), &Z_Registration_Info_UScriptStruct_LinearDriveConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinearDriveConstraint), 2750077612U) },
		{ FAngularDriveConstraint::StaticStruct, Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewStructOps, TEXT("AngularDriveConstraint"), &Z_Registration_Info_UScriptStruct_AngularDriveConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAngularDriveConstraint), 1449635560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_2689615916(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
