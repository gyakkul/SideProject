// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/LimbSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbSolver() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbLink();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbSolver();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbSolverSettings();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbSolverSettings;
class UScriptStruct* FLimbSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolverSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbSolverSettings>()
{
	return FLimbSolverSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimbSolverSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLimit_MetaData[];
#endif
		static void NewProp_bEnableLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAveragePull_MetaData[];
#endif
		static void NewProp_bAveragePull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAveragePull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachStepAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachStepAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistCorrection_MetaData[];
#endif
		static void NewProp_bEnableTwistCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndBoneForwardAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbSolverSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Limb Solver Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Precision (distance to the target) */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Precision (distance to the target)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, ReachPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Limb Solver Settings|Two Bones" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Max Iterations to reach the target */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Number of Max Iterations to reach the target" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Limits" },
		{ "Comment", "/** Enable/Disable rotational limits */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Enable/Disable rotational limits" },
	};
#endif
	void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_SetBit(void* Obj)
	{
		((FLimbSolverSettings*)Obj)->bEnableLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit = { "bEnableLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Limits" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "EditCondition", "bEnableLimit" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, MinRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "Comment", "/** Pull averaging only has a visual impact when we have more than 2 bones (3 links). */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Pull averaging only has a visual impact when we have more than 2 bones (3 links)." },
	};
#endif
	void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_SetBit(void* Obj)
	{
		((FLimbSolverSettings*)Obj)->bAveragePull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull = { "bAveragePull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution = { "PullDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, PullDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Move end effector towards target. If we are compressing the chain, limit displacement.*/" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Move end effector towards target. If we are compressing the chain, limit displacement." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha = { "ReachStepAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, ReachStepAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_MetaData[] = {
		{ "Category", "Limb Solver Settings|Twist" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
#endif
	void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_SetBit(void* Obj)
	{
		((FLimbSolverSettings*)Obj)->bEnableTwistCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection = { "bEnableTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis_MetaData[] = {
		{ "Category", "Limb Solver Settings|Twist" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "EditCondition", "bEnableTwistCorrection" },
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis = { "EndBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimbSolverSettings, EndBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis_MetaData)) }; // 2376982772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"LimbSolverSettings",
		sizeof(FLimbSolverSettings),
		alignof(FLimbSolverSettings),
		Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimbSolverSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbLink;
class UScriptStruct* FLimbLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbLink, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbLink"));
	}
	return Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbLink>()
{
	return FLimbLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimbLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimbLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"LimbLink",
		sizeof(FLimbLink),
		alignof(FLimbLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimbLink()
	{
		if (!Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton, Z_Construct_UScriptStruct_FLimbLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbSolver;
class UScriptStruct* FLimbSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolver, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbSolver"));
	}
	return Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbSolver>()
{
	return FLimbSolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimbSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimbSolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solvers/LimbSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimbSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbSolver>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"LimbSolver",
		sizeof(FLimbSolver),
		alignof(FLimbSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimbSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimbSolver()
	{
		if (!Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton, Z_Construct_UScriptStruct_FLimbSolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_LimbSolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_LimbSolver_h_Statics::ScriptStructInfo[] = {
		{ FLimbSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewStructOps, TEXT("LimbSolverSettings"), &Z_Registration_Info_UScriptStruct_LimbSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbSolverSettings), 2324900775U) },
		{ FLimbLink::StaticStruct, Z_Construct_UScriptStruct_FLimbLink_Statics::NewStructOps, TEXT("LimbLink"), &Z_Registration_Info_UScriptStruct_LimbLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbLink), 1324277049U) },
		{ FLimbSolver::StaticStruct, Z_Construct_UScriptStruct_FLimbSolver_Statics::NewStructOps, TEXT("LimbSolver"), &Z_Registration_Info_UScriptStruct_LimbSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbSolver), 4163537061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_LimbSolver_h_4152983369(TEXT("/Script/IKRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_LimbSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_LimbSolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
