// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothConfigNv.h"
#include "ClothConfig_Legacy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv_NoRegister();
	CLOTHINGSYSTEMRUNTIMENV_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv();
	CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv;
class UScriptStruct* FClothConstraintSetupNv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetupNv, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("ClothConstraintSetupNv"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* StaticStruct<FClothConstraintSetupNv>()
{
	return FClothConstraintSetupNv::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for a constraint setup, these can be horizontal, vertical, shear and bend. */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Container for a constraint setup, these can be horizontal, vertical, shear and bend." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetupNv>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetupNv, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetupNv, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetupNv, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetupNv, CompressionLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
		nullptr,
		&NewStructOps,
		"ClothConstraintSetupNv",
		sizeof(FClothConstraintSetupNv),
		alignof(FClothConstraintSetupNv),
		Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton, Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothingWindMethodNv;
	static UEnum* EClothingWindMethodNv_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("EClothingWindMethodNv"));
		}
		return Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMENV_API UEnum* StaticEnum<EClothingWindMethodNv>()
	{
		return EClothingWindMethodNv_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enumerators[] = {
		{ "EClothingWindMethodNv::Legacy", (int64)EClothingWindMethodNv::Legacy },
		{ "EClothingWindMethodNv::Accurate", (int64)EClothingWindMethodNv::Accurate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enum_MetaDataParams[] = {
		{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
		{ "Accurate.Name", "EClothingWindMethodNv::Accurate" },
		{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
		{ "Comment", "/** Cloth wind method. */" },
		{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
		{ "Legacy.Name", "EClothingWindMethodNv::Legacy" },
		{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Cloth wind method." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
		nullptr,
		"EClothingWindMethodNv",
		"EClothingWindMethodNv",
		Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv()
	{
		if (!Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton;
	}
	void UClothConfigNv::StaticRegisterNativesUClothConfigNv()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigNv);
	UClass* Z_Construct_UClass_UClothConfigNv_NoRegister()
	{
		return UClothConfigNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClothingWindMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingWindMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClothingWindMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShearConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShearConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionCullScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindLiftCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearInertiaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularInertiaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CentrifugalInertiaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamperStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveDamperStiffness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothConfigNv.h" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod = { "ClothingWindMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, ClothingWindMethod), Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData)) }; // 2435829033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint = { "VerticalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, VerticalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData)) }; // 4969671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint = { "HorizontalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData)) }; // 4969671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint = { "BendConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, BendConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData)) }; // 4969671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint = { "ShearConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, ShearConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData)) }; // 4969671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, SelfCollisionRadius), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * Scale to use for the radius of the culling checks for self collisions.\n\x09 * Any other self collision body within the radius of this check will be culled.\n\x09 * This helps performance with higher resolution meshes by reducing the number\n\x09 * of colliding bodies within the cloth. Reducing this will have a negative\n\x09 * effect on performance!\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, SelfCollisionCullScale), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, Friction), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, WindDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, WindLiftCoefficient), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "30" },
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
		{ "UIMax", "240" },
		{ "UIMin", "30" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, SolverFrequency), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Direct gravity override value\n" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "/** Use gravity override value vs gravity scale */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UClothConfigNv*)Obj)->bUseGravityOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClothConfigNv), &Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, TetherStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, TetherLimit), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, AnimDriveDamperStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// Deprecated properties using old legacy structure and enum that couldn't be redirected\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Deprecated properties using old legacy structure and enum that couldn't be redirected" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, WindMethod_DEPRECATED), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData)) }; // 74274292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, VerticalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, BendConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothConfigNv, ShearConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData)) }; // 973938463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothConfigNv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigNv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigNv_Statics::ClassParams = {
		&UClothConfigNv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothConfigNv_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigNv()
	{
		if (!Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton, Z_Construct_UClass_UClothConfigNv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothConfigNv>()
	{
		return UClothConfigNv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigNv);
	UClothConfigNv::~UClothConfigNv() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::EnumInfo[] = {
		{ EClothingWindMethodNv_StaticEnum, TEXT("EClothingWindMethodNv"), &Z_Registration_Info_UEnum_EClothingWindMethodNv, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2435829033U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ScriptStructInfo[] = {
		{ FClothConstraintSetupNv::StaticStruct, Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewStructOps, TEXT("ClothConstraintSetupNv"), &Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConstraintSetupNv), 4969671U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigNv, UClothConfigNv::StaticClass, TEXT("UClothConfigNv"), &Z_Registration_Info_UClass_UClothConfigNv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigNv), 2949393862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_3847095146(TEXT("/Script/ClothingSystemRuntimeNv"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
