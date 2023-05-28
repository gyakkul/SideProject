// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/IKRig_LimbSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_LimbSolver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbEffector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbEffector_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbSolver();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbSolver_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRig_LimbEffector::StaticRegisterNativesUIKRig_LimbEffector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_LimbEffector);
	UClass* Z_Construct_UClass_UIKRig_LimbEffector_NoRegister()
	{
		return UIKRig_LimbEffector::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_LimbEffector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_LimbEffector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbEffector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Solvers/IKRig_LimbSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Limb IK Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbEffector, GoalName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Limb IK Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbEffector, BoneName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_LimbEffector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_LimbEffector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::ClassParams = {
		&UIKRig_LimbEffector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbEffector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_LimbEffector()
	{
		if (!Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton, Z_Construct_UClass_UIKRig_LimbEffector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_LimbEffector>()
	{
		return UIKRig_LimbEffector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_LimbEffector);
	UIKRig_LimbEffector::~UIKRig_LimbEffector() {}
	void UIKRig_LimbSolver::StaticRegisterNativesUIKRig_LimbSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_LimbSolver);
	UClass* Z_Construct_UClass_UIKRig_LimbSolver_NoRegister()
	{
		return UIKRig_LimbSolver::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_LimbSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootName;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Effector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_LimbSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Solvers/IKRig_LimbSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName_MetaData[] = {
		{ "Category", "Limb IK Settings" },
		{ "DisplayName", "Root Bone" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, RootName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Limb IK Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Precision (distance to the target) */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Precision (distance to the target)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, ReachPrecision), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Limb IK Settings|Two Bones" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Max Iterations to reach the target */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Number of Max Iterations to reach the target" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, MaxIterations), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Limits" },
		{ "Comment", "/** Enable/Disable rotational limits */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Enable/Disable rotational limits" },
	};
#endif
	void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_SetBit(void* Obj)
	{
		((UIKRig_LimbSolver*)Obj)->bEnableLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit = { "bEnableLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Limits" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "EditCondition", "bEnableLimit" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, MinRotationAngle), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "Comment", "/** Pull averaging only has a visual impact when we have more than 2 bones (3 links). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Pull averaging only has a visual impact when we have more than 2 bones (3 links)." },
	};
#endif
	void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_SetBit(void* Obj)
	{
		((UIKRig_LimbSolver*)Obj)->bAveragePull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull = { "bAveragePull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution = { "PullDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, PullDistribution), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Move end effector towards target. If we are compressing the chain, limit displacement.*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Move end effector towards target. If we are compressing the chain, limit displacement." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha = { "ReachStepAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, ReachStepAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_MetaData[] = {
		{ "Category", "Limb IK Settings|Twist" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
#endif
	void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_SetBit(void* Obj)
	{
		((UIKRig_LimbSolver*)Obj)->bEnableTwistCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection = { "bEnableTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis_MetaData[] = {
		{ "Category", "Limb IK Settings|Twist" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "EditCondition", "bEnableTwistCorrection" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis = { "EndBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, EndBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_LimbSolver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_LimbSolver, Effector), Z_Construct_UClass_UIKRig_LimbEffector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_LimbSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_LimbSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::ClassParams = {
		&UIKRig_LimbSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_LimbSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_LimbSolver()
	{
		if (!Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton, Z_Construct_UClass_UIKRig_LimbSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_LimbSolver>()
	{
		return UIKRig_LimbSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_LimbSolver);
	UIKRig_LimbSolver::~UIKRig_LimbSolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_LimbSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_LimbSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_LimbEffector, UIKRig_LimbEffector::StaticClass, TEXT("UIKRig_LimbEffector"), &Z_Registration_Info_UClass_UIKRig_LimbEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_LimbEffector), 1378172676U) },
		{ Z_Construct_UClass_UIKRig_LimbSolver, UIKRig_LimbSolver::StaticClass, TEXT("UIKRig_LimbSolver"), &Z_Registration_Info_UClass_UIKRig_LimbSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_LimbSolver), 1406246158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_LimbSolver_h_3022048555(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_LimbSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_LimbSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
