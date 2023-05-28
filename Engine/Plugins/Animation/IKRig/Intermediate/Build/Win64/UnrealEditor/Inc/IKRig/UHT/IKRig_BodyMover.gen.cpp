// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/IKRig_BodyMover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_BodyMover() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMover();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMover_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRig_BodyMoverEffector::StaticRegisterNativesUIKRig_BodyMoverEffector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_BodyMoverEffector);
	UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister()
	{
		return UIKRig_BodyMoverEffector::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Solvers/IKRig_BodyMover.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMoverEffector, GoalName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMoverEffector, BoneName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Scale the influence this effector has on the body. Range is 0-10. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Scale the influence this effector has on the body. Range is 0-10. Default is 1.0." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier = { "InfluenceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMoverEffector, InfluenceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_BodyMoverEffector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::ClassParams = {
		&UIKRig_BodyMoverEffector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector()
	{
		if (!Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton, Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_BodyMoverEffector>()
	{
		return UIKRig_BodyMoverEffector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_BodyMoverEffector);
	UIKRig_BodyMoverEffector::~UIKRig_BodyMoverEffector() {}
	void UIKRig_BodyMover::StaticRegisterNativesUIKRig_BodyMover()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_BodyMover);
	UClass* Z_Construct_UClass_UIKRig_BodyMover_NoRegister()
	{
		return UIKRig_BodyMover::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_BodyMover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateXAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateXAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateYAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateYAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateZAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateZAlpha;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_BodyMover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Solvers/IKRig_BodyMover.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** The target bone to move with the effectors. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "The target bone to move with the effectors." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, RootBone), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the translational effect of this solver on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the translational effect of this solver on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE X translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE X translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX = { "PositionPositiveX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveX), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE X translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE X translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX = { "PositionNegativeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeX), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE Y translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE Y translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY = { "PositionPositiveY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveY), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE Y translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE Y translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY = { "PositionNegativeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeY), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE Z translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE Z translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ = { "PositionPositiveZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveZ), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE Z translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE Z translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ = { "PositionNegativeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeZ), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the total rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the total rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, RotationAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the X-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the X-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha = { "RotateXAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, RotateXAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the Y-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the Y-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha = { "RotateYAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, RotateYAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the Z-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the Z-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha = { "RotateZAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, RotateZAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_BodyMover.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_BodyMover, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_BodyMover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_BodyMover>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_BodyMover_Statics::ClassParams = {
		&UIKRig_BodyMover::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_BodyMover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_BodyMover()
	{
		if (!Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton, Z_Construct_UClass_UIKRig_BodyMover_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_BodyMover>()
	{
		return UIKRig_BodyMover::StaticClass();
	}
	UIKRig_BodyMover::UIKRig_BodyMover() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_BodyMover);
	UIKRig_BodyMover::~UIKRig_BodyMover() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_BodyMover_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_BodyMover_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_BodyMoverEffector, UIKRig_BodyMoverEffector::StaticClass, TEXT("UIKRig_BodyMoverEffector"), &Z_Registration_Info_UClass_UIKRig_BodyMoverEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_BodyMoverEffector), 4158296781U) },
		{ Z_Construct_UClass_UIKRig_BodyMover, UIKRig_BodyMover::StaticClass, TEXT("UIKRig_BodyMover"), &Z_Registration_Info_UClass_UIKRig_BodyMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_BodyMover), 507872516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_BodyMover_h_1510756445(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_BodyMover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_BodyMover_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
