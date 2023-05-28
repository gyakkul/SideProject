// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/IKRig_FBIKSolver.h"
#include "Core/PBIKSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_FBIKSolver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKBoneSettings();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKEffector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigFBIKSolver();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigFBIKSolver_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	PBIK_API UEnum* Z_Construct_UEnum_PBIK_EPBIKLimitType();
	PBIK_API UEnum* Z_Construct_UEnum_PBIK_EPBIKRootBehavior();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FRootPrePullSettings();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRig_FBIKEffector::StaticRegisterNativesUIKRig_FBIKEffector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_FBIKEffector);
	UClass* Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister()
	{
		return UIKRig_FBIKEffector::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_FBIKEffector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrengthAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullChainAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullChainAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexInSolver_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInSolver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_FBIKEffector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Solvers/IKRig_FBIKSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Full Body IK Effector" },
		{ "Comment", "/** The Goal that is driving this effector's transform. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "The Goal that is driving this effector's transform." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, GoalName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Full Body IK Effector" },
		{ "Comment", "/** The bone that this effector will pull on. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "The bone that this effector will pull on." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, BoneName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_StrengthAlpha_MetaData[] = {
		{ "Category", "Full Body IK Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range 0-1 (default is 1.0). The strength of the effector when pulling the bone towards it's target location.\n\x09* At 0.0, the effector does not pull at all, but the bones between the effector and the root will still slightly resist motion from other effectors.\n\x09* This can thus act as a \"stabilizer\" for parts of the body that you do not want to behave in a pure FK fashion.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0). The strength of the effector when pulling the bone towards it's target location.\nAt 0.0, the effector does not pull at all, but the bones between the effector and the root will still slightly resist motion from other effectors.\nThis can thus act as a \"stabilizer\" for parts of the body that you do not want to behave in a pure FK fashion." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, StrengthAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_StrengthAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_StrengthAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PullChainAlpha_MetaData[] = {
		{ "Category", "Full Body IK Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range 0-1 (default is 1.0). When enabled (greater than 0.0), the solver internally partitions the skeleton into 'chains' which extend from the effector to the nearest fork in the skeleton.\n\x09*These chains are pre-rotated and translated, as a whole, towards the effector targets.\n\x09*This can improve the results for sparse bone chains, and significantly improve convergence on dense bone chains.\n\x09*But it may cause undesirable results in highly constrained bone chains (like robot arms).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0). When enabled (greater than 0.0), the solver internally partitions the skeleton into 'chains' which extend from the effector to the nearest fork in the skeleton.\nThese chains are pre-rotated and translated, as a whole, towards the effector targets.\nThis can improve the results for sparse bone chains, and significantly improve convergence on dense bone chains.\nBut it may cause undesirable results in highly constrained bone chains (like robot arms)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PullChainAlpha = { "PullChainAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, PullChainAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PullChainAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PullChainAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PinRotation_MetaData[] = {
		{ "Category", "Full Body IK Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range 0-1 (default is 1.0).\n\x09*Blends the effector bone rotation between the rotation of the effector transform (1.0) and the rotation of the input bone (0.0).*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0).\nBlends the effector bone rotation between the rotation of the effector transform (1.0) and the rotation of the input bone (0.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PinRotation = { "PinRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, PinRotation), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PinRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PinRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_IndexInSolver_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_IndexInSolver = { "IndexInSolver", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKEffector, IndexInSolver), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_IndexInSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_IndexInSolver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_FBIKEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_StrengthAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PullChainAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_PinRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKEffector_Statics::NewProp_IndexInSolver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_FBIKEffector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_FBIKEffector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_FBIKEffector_Statics::ClassParams = {
		&UIKRig_FBIKEffector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_FBIKEffector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKEffector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_FBIKEffector()
	{
		if (!Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton, Z_Construct_UClass_UIKRig_FBIKEffector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_FBIKEffector.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_FBIKEffector>()
	{
		return UIKRig_FBIKEffector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_FBIKEffector);
	UIKRig_FBIKEffector::~UIKRig_FBIKEffector() {}
	void UIKRig_FBIKBoneSettings::StaticRegisterNativesUIKRig_FBIKBoneSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_FBIKBoneSettings);
	UClass* Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister()
	{
		return UIKRig_FBIKBoneSettings::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStiffness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_X_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Y_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Z_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreferredAngles_MetaData[];
#endif
		static void NewProp_bUsePreferredAngles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreferredAngles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredAngles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredAngles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Solvers/IKRig_FBIKSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** The bone these settings are applied to. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "The bone these settings are applied to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, Bone), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_RotationStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range is 0 to 1 (Default is 0). At higher values, the bone will resist rotating (forcing other bones to compensate). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is 0 to 1 (Default is 0). At higher values, the bone will resist rotating (forcing other bones to compensate)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, RotationStiffness), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_RotationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_RotationStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PositionStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range is 0 to 1 (Default is 0). At higher values, the bone will resist translational motion (forcing other bones to compensate). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is 0 to 1 (Default is 0). At higher values, the bone will resist translational motion (forcing other bones to compensate)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PositionStiffness = { "PositionStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, PositionStiffness), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PositionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PositionStiffness_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the X axis.\n\x09 *Free: can rotate freely in this axis.\n\x09 *Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09 *Locked: no rotation is allowed in this axis (will remain at reference pose angle). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the X axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at reference pose angle)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, X), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X_MetaData)) }; // 1039346427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinX_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative X direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative X direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MinX), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxX_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive X direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive X direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MaxX), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxX_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the Y axis.\n\x09*Free: can rotate freely in this axis.\n\x09*Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09*Locked: no rotation is allowed in this axis (will remain at input pose angle). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the Y axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at input pose angle)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, Y), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y_MetaData)) }; // 1039346427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinY_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Y direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Y direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MinY), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxY_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Y direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Y direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MaxY), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxY_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the Z axis.\n\x09*Free: can rotate freely in this axis.\n\x09*Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09*Locked: no rotation is allowed in this axis (will remain at input pose angle). */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the Z axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at input pose angle)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, Z), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z_MetaData)) }; // 1039346427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinZ_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Z direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Z direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MinZ), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxZ_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Z direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Z direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, MaxZ), METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_MetaData[] = {
		{ "Category", "PreferredAngles" },
		{ "Comment", "/**When true, this bone will \"prefer\" to rotate in the direction specified by the Preferred Angles when the chain it belongs to is compressed.\n\x09 * Preferred Angles should be the first method used to fix bones that bend in the wrong direction (rather than limits).\n\x09 * The resulting angles can be visualized on their own by temporarily setting the Solver iterations to 0 and moving the effectors.*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "When true, this bone will \"prefer\" to rotate in the direction specified by the Preferred Angles when the chain it belongs to is compressed.\nPreferred Angles should be the first method used to fix bones that bend in the wrong direction (rather than limits).\nThe resulting angles can be visualized on their own by temporarily setting the Solver iterations to 0 and moving the effectors." },
	};
#endif
	void Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_SetBit(void* Obj)
	{
		((UIKRig_FBIKBoneSettings*)Obj)->bUsePreferredAngles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles = { "bUsePreferredAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_FBIKBoneSettings), &Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PreferredAngles_MetaData[] = {
		{ "Category", "PreferredAngles" },
		{ "Comment", "/**The local Euler angles (in degrees) used to rotate this bone when the chain it belongs to is squashed.\n\x09 * This happens by moving the effector at the tip of the chain towards the root of the chain.\n\x09 * This can be used to coerce knees and elbows to bend in the anatomically \"correct\" direction without resorting to limits (which may require more iterations to converge).*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "The local Euler angles (in degrees) used to rotate this bone when the chain it belongs to is squashed.\nThis happens by moving the effector at the tip of the chain towards the root of the chain.\nThis can be used to coerce knees and elbows to bend in the anatomically \"correct\" direction without resorting to limits (which may require more iterations to converge)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PreferredAngles = { "PreferredAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_FBIKBoneSettings, PreferredAngles), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PreferredAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PreferredAngles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_RotationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PositionStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MinZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_MaxZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_bUsePreferredAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::NewProp_PreferredAngles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_FBIKBoneSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::ClassParams = {
		&UIKRig_FBIKBoneSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_FBIKBoneSettings()
	{
		if (!Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton, Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_FBIKBoneSettings>()
	{
		return UIKRig_FBIKBoneSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_FBIKBoneSettings);
	UIKRig_FBIKBoneSettings::~UIKRig_FBIKBoneSettings() {}
	void UIKRigFBIKSolver::StaticRegisterNativesUIKRigFBIKSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigFBIKSolver);
	UClass* Z_Construct_UClass_UIKRigFBIKSolver_NoRegister()
	{
		return UIKRigFBIKSolver::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigFBIKSolver_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStretch_MetaData[];
#endif
		static void NewProp_bAllowStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStretch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrePullRootSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrePullRootSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullChainAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullChainAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverRelaxation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverRelaxation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartSolveFromInputPose_MetaData[];
#endif
		static void NewProp_bStartSolveFromInputPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartSolveFromInputPose;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigFBIKSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject UObject" },
		{ "IncludePath", "Solvers/IKRig_FBIKSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Full Body IK Settings" },
		{ "Comment", "/** All bones above this bone in the hierarchy will be completely ignored by the solver. Typically this is set to\n\x09 * the top-most skinned bone in the Skeletal Mesh (ie Pelvis, Hips etc), NOT the actual root of the entire skeleton.\n\x09 *\n\x09 * If you want to use the solver on a single chain of bones, and NOT translate the chain, ensure that \"PinRoot\" is\n\x09 * checked on to disable the root from translating to reach the effector goals.*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "All bones above this bone in the hierarchy will be completely ignored by the solver. Typically this is set to\nthe top-most skinned bone in the Skeletal Mesh (ie Pelvis, Hips etc), NOT the actual root of the entire skeleton.\n\nIf you want to use the solver on a single chain of bones, and NOT translate the chain, ensure that \"PinRoot\" is\nchecked on to disable the root from translating to reach the effector goals." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, RootBone), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20." },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, Iterations), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, MassMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MassMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false." },
	};
#endif
	void Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_SetBit(void* Obj)
	{
		((UIKRigFBIKSolver*)Obj)->bAllowStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch = { "bAllowStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigFBIKSolver), &Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior_MetaData[] = {
		{ "Category", "RootBehavior" },
		{ "Comment", "/** (Default is PrePull) Set the behavior of the solver root.\n\x09*Pre Pull: translates and rotates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\n\x09*Pin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\n\x09*Free: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "(Default is PrePull) Set the behavior of the solver root.\nPre Pull: translates and rotates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\nPin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\nFree: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior = { "RootBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, RootBehavior), Z_Construct_UEnum_PBIK_EPBIKRootBehavior, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior_MetaData)) }; // 2185636950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PrePullRootSettings_MetaData[] = {
		{ "Category", "RootBehavior" },
		{ "Comment", "/** Settings only applicable when Root Behavior is set to \"PrePull\". Use these values to adjust the gross movement and orientation of the entire skeleton. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Settings only applicable when Root Behavior is set to \"PrePull\". Use these values to adjust the gross movement and orientation of the entire skeleton." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PrePullRootSettings = { "PrePullRootSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, PrePullRootSettings), Z_Construct_UScriptStruct_FRootPrePullSettings, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PrePullRootSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PrePullRootSettings_MetaData)) }; // 3472283865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PullChainAlpha_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A global multiplier for all Pull Chain Alpha values on all effectors. Range is 0.0 to 1.0. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "A global multiplier for all Pull Chain Alpha values on all effectors. Range is 0.0 to 1.0. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PullChainAlpha = { "PullChainAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, PullChainAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PullChainAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PullChainAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle that a joint can be rotated per constraint iteration. Lower this value if the solve is diverging. Range is 0.0 to 180.0. Default is 30. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Maximum angle that a joint can be rotated per constraint iteration. Lower this value if the solve is diverging. Range is 0.0 to 180.0. Default is 30." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_OverRelaxation_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Pushes constraints beyond their normal amount to speed up convergence. Increasing this may speed up convergence, but at the cost of stability. Range is 1.0 - 2.0. Default is 1.3. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "Pushes constraints beyond their normal amount to speed up convergence. Increasing this may speed up convergence, but at the cost of stability. Range is 1.0 - 2.0. Default is 1.3." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_OverRelaxation = { "OverRelaxation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, OverRelaxation), METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_OverRelaxation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_OverRelaxation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "Comment", "/** When true, the solver is reset each tick to start from the current input pose. Default is true.\n\x09 * If false, incoming animated poses are ignored and the solver starts from the results of the previous solve.\n\x09 * In very limited circumstances, it can be beneficial to use the pose from the previous frame.*/" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
		{ "ToolTip", "When true, the solver is reset each tick to start from the current input pose. Default is true.\nIf false, incoming animated poses are ignored and the solver starts from the results of the previous solve.\nIn very limited circumstances, it can be beneficial to use the pose from the previous frame." },
	};
#endif
	void Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose_SetBit(void* Obj)
	{
		((UIKRigFBIKSolver*)Obj)->bStartSolveFromInputPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose = { "bStartSolveFromInputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigFBIKSolver), &Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings_Inner = { "BoneSettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_FBIKSolver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigFBIKSolver, BoneSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigFBIKSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MassMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bAllowStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_RootBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PrePullRootSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_PullChainAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_MaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_OverRelaxation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_bStartSolveFromInputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_Effectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigFBIKSolver_Statics::NewProp_BoneSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigFBIKSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigFBIKSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigFBIKSolver_Statics::ClassParams = {
		&UIKRigFBIKSolver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigFBIKSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigFBIKSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigFBIKSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigFBIKSolver()
	{
		if (!Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton, Z_Construct_UClass_UIKRigFBIKSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigFBIKSolver.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigFBIKSolver>()
	{
		return UIKRigFBIKSolver::StaticClass();
	}
	UIKRigFBIKSolver::UIKRigFBIKSolver() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigFBIKSolver);
	UIKRigFBIKSolver::~UIKRigFBIKSolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_FBIKSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_FBIKSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_FBIKEffector, UIKRig_FBIKEffector::StaticClass, TEXT("UIKRig_FBIKEffector"), &Z_Registration_Info_UClass_UIKRig_FBIKEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_FBIKEffector), 1508253609U) },
		{ Z_Construct_UClass_UIKRig_FBIKBoneSettings, UIKRig_FBIKBoneSettings::StaticClass, TEXT("UIKRig_FBIKBoneSettings"), &Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_FBIKBoneSettings), 1104511583U) },
		{ Z_Construct_UClass_UIKRigFBIKSolver, UIKRigFBIKSolver::StaticClass, TEXT("UIKRigFBIKSolver"), &Z_Registration_Info_UClass_UIKRigFBIKSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigFBIKSolver), 904064288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_FBIKSolver_h_1886130342(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_FBIKSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_FBIKSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
