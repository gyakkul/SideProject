// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/RigUnit_AimConstraint.h"
#include "Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AimConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EAimMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAimTarget();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAimMode;
	static UEnum* EAimMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAimMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAimMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EAimMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EAimMode"));
		}
		return Z_Registration_Info_UEnum_EAimMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EAimMode>()
	{
		return EAimMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EAimMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enumerators[] = {
		{ "EAimMode::AimAtTarget", (int64)EAimMode::AimAtTarget },
		{ "EAimMode::OrientToTarget", (int64)EAimMode::OrientToTarget },
		{ "EAimMode::MAX", (int64)EAimMode::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enum_MetaDataParams[] = {
		{ "AimAtTarget.Comment", "/** Aim at Target Transform*/" },
		{ "AimAtTarget.Name", "EAimMode::AimAtTarget" },
		{ "AimAtTarget.ToolTip", "Aim at Target Transform" },
		{ "Comment", "/*\n ENUM: Aim Mode (Default: Aim At Target Transform )  # How to perform an aim\n Aim At Target Transforms\n Orient To Target Transforms\n */" },
		{ "MAX.Comment", "/** MAX - invalid */" },
		{ "MAX.Name", "EAimMode::MAX" },
		{ "MAX.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "OrientToTarget.Comment", "/** Orient to Target Transform */" },
		{ "OrientToTarget.Name", "EAimMode::OrientToTarget" },
		{ "OrientToTarget.ToolTip", "Orient to Target Transform" },
		{ "ToolTip", "ENUM: Aim Mode (Default: Aim At Target Transform )  # How to perform an aim\nAim At Target Transforms\nOrient To Target Transforms" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EAimMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EAimMode",
		"EAimMode",
		Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EAimMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EAimMode()
	{
		if (!Z_Registration_Info_UEnum_EAimMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAimMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EAimMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAimMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AimTarget;
class UScriptStruct* FAimTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AimTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AimTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AimTarget"));
	}
	return Z_Registration_Info_UScriptStruct_AimTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAimTarget>()
{
	return FAimTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAimTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FAimTarget" },
		{ "Comment", "// # Target Weight\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# Target Weight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimTarget, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "FAimTarget" },
		{ "Comment", "// # Aim at/Align to this Transform\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# Aim at/Align to this Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_AlignVector_MetaData[] = {
		{ "Category", "FAimTarget" },
		{ "Comment", "//# Orient To Target Transforms mode only : Vector in the space of Target Transform to which the Aim Vector will be aligned\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# Orient To Target Transforms mode only : Vector in the space of Target Transform to which the Aim Vector will be aligned" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_AlignVector = { "AlignVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimTarget, AlignVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_AlignVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_AlignVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimTarget_Statics::NewProp_AlignVector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"AimTarget",
		sizeof(FAimTarget),
		alignof(FAimTarget),
		Z_Construct_UScriptStruct_FAimTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_AimTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AimTarget.InnerSingleton, Z_Construct_UScriptStruct_FAimTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AimTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData;
class UScriptStruct* FRigUnit_AimConstraint_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimConstraint_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimConstraint_WorkData>()
{
	return FRigUnit_AimConstraint_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimConstraint_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData_Inner = { "ConstraintData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintData, METADATA_PARAMS(nullptr, 0) }; // 2348633886
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData[] = {
		{ "Comment", "// note that Targets.Num () != ConstraintData.Num()\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "note that Targets.Num () != ConstraintData.Num()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData = { "ConstraintData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint_WorkData, ConstraintData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData)) }; // 2348633886
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewProp_ConstraintData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_AimConstraint_WorkData",
		sizeof(FRigUnit_AimConstraint_WorkData),
		alignof(FRigUnit_AimConstraint_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AimConstraint>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_AimConstraint cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint;
class UScriptStruct* FRigUnit_AimConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AimConstraint_Execute;
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("Joint"), TEXT("FName"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("AimMode"), TEXT("EAimMode"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("UpMode"), TEXT("EAimMode"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("AimVector"), TEXT("FVector"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("UpVector"), TEXT("FVector"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("AimTargets"), TEXT("TArray<FAimTarget>"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("UpTargets"), TEXT("TArray<FAimTarget>"));
		Arguments_FRigUnit_AimConstraint_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_AimConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimConstraint::Execute"), &FRigUnit_AimConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.OuterSingleton, Arguments_FRigUnit_AimConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimConstraint>()
{
	return FRigUnit_AimConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Joint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AimMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AimMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AimTargets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Aim Constraint" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_Joint_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, Joint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_Joint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_Joint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Comment", "//# How to perform an aim\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# How to perform an aim" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode = { "AimMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, AimMode), Z_Construct_UEnum_ControlRig_EAimMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode_MetaData)) }; // 268088777
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Comment", "//# How to perform an upvector stabilization\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# How to perform an upvector stabilization" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode = { "UpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, UpMode), Z_Construct_UEnum_ControlRig_EAimMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode_MetaData)) }; // 268088777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimVector_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Comment", "// # Vector in the space of Named joint which will be aligned to the aim target\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# Vector in the space of Named joint which will be aligned to the aim target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimVector = { "AimVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, AimVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Comment", "//# Vector in the space of Named joint which will be aligned to the up target for stabilization\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "# Vector in the space of Named joint which will be aligned to the up target for stabilization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpVector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets_Inner = { "AimTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAimTarget, METADATA_PARAMS(nullptr, 0) }; // 1233960767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets = { "AimTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, AimTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets_MetaData)) }; // 1233960767
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets_Inner = { "UpTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAimTarget, METADATA_PARAMS(nullptr, 0) }; // 1233960767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets_MetaData[] = {
		{ "Category", "FRigUnit_AimConstraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets = { "UpTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, UpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets_MetaData)) }; // 1233960767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_WorkData_MetaData[] = {
		{ "Comment", "// note that Targets.Num () != ConstraintData.Num()\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_AimConstraint.h" },
		{ "ToolTip", "note that Targets.Num () != ConstraintData.Num()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AimConstraint, WorkData), Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_WorkData_MetaData)) }; // 2769754960
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_Joint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_AimTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_UpTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_AimConstraint",
		sizeof(FRigUnit_AimConstraint),
		alignof(FRigUnit_AimConstraint),
		Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint.InnerSingleton;
	}

void FRigUnit_AimConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AimConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FAimTarget> AimTargets_5_Array(AimTargets);
	TArrayView<const FAimTarget> UpTargets_6_Array(UpTargets);
	
	StaticExecute(
		InExecuteContext,
		Joint,
		AimMode,
		UpMode,
		AimVector,
		UpVector,
		AimTargets_5_Array,
		UpTargets_6_Array,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::EnumInfo[] = {
		{ EAimMode_StaticEnum, TEXT("EAimMode"), &Z_Registration_Info_UEnum_EAimMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 268088777U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::ScriptStructInfo[] = {
		{ FAimTarget::StaticStruct, Z_Construct_UScriptStruct_FAimTarget_Statics::NewStructOps, TEXT("AimTarget"), &Z_Registration_Info_UScriptStruct_AimTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimTarget), 1233960767U) },
		{ FRigUnit_AimConstraint_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics::NewStructOps, TEXT("RigUnit_AimConstraint_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimConstraint_WorkData), 2769754960U) },
		{ FRigUnit_AimConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::NewStructOps, TEXT("RigUnit_AimConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_AimConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimConstraint), 236666343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_2092479356(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
