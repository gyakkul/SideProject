// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothConfig_Legacy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig_Legacy() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothingWindMethod_Legacy;
	static UEnum* EClothingWindMethod_Legacy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothingWindMethod_Legacy"));
		}
		return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothingWindMethod_Legacy>()
	{
		return EClothingWindMethod_Legacy_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enumerators[] = {
		{ "EClothingWindMethod_Legacy::Legacy", (int64)EClothingWindMethod_Legacy::Legacy },
		{ "EClothingWindMethod_Legacy::Accurate", (int64)EClothingWindMethod_Legacy::Accurate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enum_MetaDataParams[] = {
		{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
		{ "Accurate.Name", "EClothingWindMethod_Legacy::Accurate" },
		{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use EClothingWindMethodNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
		{ "Legacy.Name", "EClothingWindMethod_Legacy::Legacy" },
		{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse EClothingWindMethodNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		"EClothingWindMethod_Legacy",
		"EClothingWindMethod_Legacy",
		Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy()
	{
		if (!Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy;
class UScriptStruct* FClothConstraintSetup_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConstraintSetup_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConstraintSetup_Legacy>()
{
	return FClothConstraintSetup_Legacy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use FClothConstraintSetupNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse FClothConstraintSetupNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetup_Legacy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetup_Legacy, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConstraintSetup_Legacy, CompressionLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothConstraintSetup_Legacy",
		sizeof(FClothConstraintSetup_Legacy),
		alignof(FClothConstraintSetup_Legacy),
		Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConfig_Legacy;
class UScriptStruct* FClothConfig_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConfig_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConfig_Legacy>()
{
	return FClothConfig_Legacy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Inherit new config class from UClothConfigCommon instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nInherit new config class from UClothConfigCommon instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConfig_Legacy>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, WindMethod), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData)) }; // 74274292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, VerticalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, HorizontalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, BendConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, ShearConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData)) }; // 973938463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionCullScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData[] = {
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData[] = {
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData[] = {
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, WindDragCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, WindLiftCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData[] = {
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData[] = {
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Comment", "// Direct gravity override value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Comment", "// Use gravity override value vs gravity scale \n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((FClothConfig_Legacy*)Obj)->bUseGravityOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClothConfig_Legacy), &Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, TetherStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, TetherLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, CollisionThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveDamperStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothConfig_Legacy",
		sizeof(FClothConfig_Legacy),
		alignof(FClothConfig_Legacy),
		Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::EnumInfo[] = {
		{ EClothingWindMethod_Legacy_StaticEnum, TEXT("EClothingWindMethod_Legacy"), &Z_Registration_Info_UEnum_EClothingWindMethod_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 74274292U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::ScriptStructInfo[] = {
		{ FClothConstraintSetup_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewStructOps, TEXT("ClothConstraintSetup_Legacy"), &Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConstraintSetup_Legacy), 973938463U) },
		{ FClothConfig_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewStructOps, TEXT("ClothConfig_Legacy"), &Z_Registration_Info_UScriptStruct_ClothConfig_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConfig_Legacy), 3117859857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_138646523(TEXT("/Script/ClothingSystemRuntimeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
