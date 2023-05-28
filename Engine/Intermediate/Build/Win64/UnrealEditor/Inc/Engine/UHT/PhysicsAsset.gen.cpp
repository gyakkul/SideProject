// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsAssetSolverType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSolverIterations();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings;
class UScriptStruct* FPhysicsAssetSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicsAssetSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicsAssetSolverSettings>()
{
	return FPhysicsAssetSolverSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VelocityIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearJointSolver_MetaData[];
#endif
		static void NewProp_bUseLinearJointSolver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearJointSolver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Solver iterations settings for use by RigidBody AnimNode (RBAN) in the Anim Graph. Each RBAN node runs its own solver with these settings.\n *\n * @note These settings have no effect when the Physics Asset is used in a world simulation (i.e., as a ragdoll on a SkeletalMeshComponent).\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver iterations settings for use by RigidBody AnimNode (RBAN) in the Anim Graph. Each RBAN node runs its own solver with these settings.\n\n@note These settings have no effect when the Physics Asset is used in a world simulation (i.e., as a ragdoll on a SkeletalMeshComponent)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsAssetSolverSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of position iterations to run. The position solve is responsible for depenetration.\n\x09 * Increasing this will improve simulation stability, but increase the cost.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of position iterations to run. The position solve is responsible for depenetration.\nIncreasing this will improve simulation stability, but increase the cost." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations = { "PositionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, PositionIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of velocity iterations to run. The velocity solve is responsible for restitution (bounce) and friction. \n\x09 * This should usually be 1, but could be 0 if you don't care about friction and restitution.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of velocity iterations to run. The velocity solve is responsible for restitution (bounce) and friction.\nThis should usually be 1, but could be 0 if you don't care about friction and restitution." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations = { "VelocityIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, VelocityIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of projection iterations to run. The projection phase is a final pass over the constraints, applying\n\x09 * a semi-physical correction to any joint errors remaining after the position and velocity solves. It can be\n\x09 * very helpful to stabilize joint chains, but can cause issues with collision response. The projection magnitude\n\x09 * can be controlled per-constraint in the constraint settings (assuming ProjectionIteration is not zero).\n\x09 * This should be left as 1 in almost all cases.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of projection iterations to run. The projection phase is a final pass over the constraints, applying\na semi-physical correction to any joint errors remaining after the position and velocity solves. It can be\nvery helpful to stabilize joint chains, but can cause issues with collision response. The projection magnitude\ncan be controlled per-constraint in the constraint settings (assuming ProjectionIteration is not zero).\nThis should be left as 1 in almost all cases." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations = { "ProjectionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, ProjectionIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: The distance at which collisions are ignored. In general you need this to be a bit larger than the typical relative body\n\x09 * movement in your simulation, but small enough so that we don't have to speculatively create too many unused collisions.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The distance at which collisions are ignored. In general you need this to be a bit larger than the typical relative body\nmovement in your simulation, but small enough so that we don't have to speculatively create too many unused collisions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: When bodies are penetrating, this is the maximum velocity delta that can be applied in one frame.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: When bodies are penetrating, this is the maximum velocity delta that can be applied in one frame." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity = { "MaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, MaxDepenetrationVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: The recommended fixed timestep for the RBAN solver. Set to 0 to run with variable timestep (default).\n\x09 * NOTE: If this value is non-zero and less than the current frame time, the simulation will step multiple times\n\x09 * which increases the cost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The recommended fixed timestep for the RBAN solver. Set to 0 to run with variable timestep (default).\nNOTE: If this value is non-zero and less than the current frame time, the simulation will step multiple times\nwhich increases the cost." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep = { "FixedTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetSolverSettings, FixedTimeStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: Whether to use the linear or non-linear solver for RBAN Joints. The linear solver is significantly cheaper than\n\x09 * the non-linear solver when you are running multiple iterations, but is more likely to suffer from jitter. \n\x09 * In general you should try to use the linear solver and increase the PositionIterations to improve stability if \n\x09 * possible, only using the non-linear solver as a last resort.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: Whether to use the linear or non-linear solver for RBAN Joints. The linear solver is significantly cheaper than\nthe non-linear solver when you are running multiple iterations, but is more likely to suffer from jitter.\nIn general you should try to use the linear solver and increase the PositionIterations to improve stability if\npossible, only using the non-linear solver as a last resort." },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_SetBit(void* Obj)
	{
		((FPhysicsAssetSolverSettings*)Obj)->bUseLinearJointSolver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver = { "bUseLinearJointSolver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetSolverSettings), &Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicsAssetSolverSettings",
		sizeof(FPhysicsAssetSolverSettings),
		alignof(FPhysicsAssetSolverSettings),
		Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverIterations;
class UScriptStruct* FSolverIterations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverIterations, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SolverIterations"));
	}
	return Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSolverIterations>()
{
	return FSolverIterations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverIterations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JointIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverPushOutIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverPushOutIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointPushOutIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JointPushOutIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPushOutIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionPushOutIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Solver settings for use by the Legacy RigidBody AnimNode (RBAN) solver.\n * Thse settings are no longer used by default and will eventually be deprecated and then removed.\n * \n * @note These settings have no effect when the Physics Asset is used in a world simulation (ragdoll).\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver settings for use by the Legacy RigidBody AnimNode (RBAN) solver.\nThse settings are no longer used by default and will eventually be deprecated and then removed.\n\n@note These settings have no effect when the Physics Asset is used in a world simulation (ragdoll)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverIterations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverIterations>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of solver iterations. Increase this if collision and joints are fighting, or joint chains are stretching.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of solver iterations. Increase this if collision and joints are fighting, or joint chains are stretching." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, SolverIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-iterations. Increasing this can help with chains of long-thin bodies.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-iterations. Increasing this can help with chains of long-thin bodies." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations = { "JointIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, JointIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of collision sub-iterations. Increasing this can help with collision jitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of collision sub-iterations. Increasing this can help with collision jitter." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, CollisionIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/** Increase this if bodies remain penetrating */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Increase this if bodies remain penetrating" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations = { "SolverPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, SolverPushOutIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-push-out iterations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-push-out iterations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations = { "JointPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, JointPushOutIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-push-out iterations. Increasing this can help with collision penetration problems.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-push-out iterations. Increasing this can help with collision penetration problems." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations = { "CollisionPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverIterations, CollisionPushOutIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverIterations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SolverIterations",
		sizeof(FSolverIterations),
		alignof(FSolverIterations),
		Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverIterations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverIterations()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton, Z_Construct_UScriptStruct_FSolverIterations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsAssetSolverType;
	static UEnum* EPhysicsAssetSolverType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysicsAssetSolverType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPhysicsAssetSolverType>()
	{
		return EPhysicsAssetSolverType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enumerators[] = {
		{ "EPhysicsAssetSolverType::RBAN", (int64)EPhysicsAssetSolverType::RBAN },
		{ "EPhysicsAssetSolverType::World", (int64)EPhysicsAssetSolverType::World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "RBAN.Name", "EPhysicsAssetSolverType::RBAN" },
		{ "World.Name", "EPhysicsAssetSolverType::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPhysicsAssetSolverType",
		"EPhysicsAssetSolverType",
		Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPhysicsAssetSolverType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton, Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UPhysicsAsset::execGetConstraints)
	{
		P_GET_UBOOL(Z_Param_bIncludesTerminated);
		P_GET_TARRAY_REF(FConstraintInstanceAccessor,Z_Param_Out_OutConstraints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConstraints(Z_Param_bIncludesTerminated,Z_Param_Out_OutConstraints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsAsset::execGetConstraintByBoneNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Bone1Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_Bone2Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraintByBoneNames(Z_Param_Bone1Name,Z_Param_Bone2Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsAsset::execGetConstraintByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraintByName(Z_Param_ConstraintName);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UPhysicsAsset::StaticRegisterNativesUPhysicsAsset()
	{
#if WITH_EDITOR
		UClass* Class = UPhysicsAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstraintByBoneNames", &UPhysicsAsset::execGetConstraintByBoneNames },
			{ "GetConstraintByName", &UPhysicsAsset::execGetConstraintByName },
			{ "GetConstraints", &UPhysicsAsset::execGetConstraints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics
	{
		struct PhysicsAsset_eventGetConstraintByBoneNames_Parms
		{
			FName Bone1Name;
			FName Bone2Name;
			FConstraintInstanceAccessor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone1Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone2Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone1Name = { "Bone1Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, Bone1Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone2Name = { "Bone2Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, Bone2Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone1Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone2Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets a constraint by its joint name\n\x09* @param Bone1Name name of the first bone in the joint\n\x09* @param Bone2Name name of the second bone in the joint\n\x09* @return ConstraintInstance accessor to the constraint data\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets a constraint by its joint name\n@param Bone1Name name of the first bone in the joint\n@param Bone2Name name of the second bone in the joint\n@return ConstraintInstance accessor to the constraint data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraintByBoneNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PhysicsAsset_eventGetConstraintByBoneNames_Parms), Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics
	{
		struct PhysicsAsset_eventGetConstraintByName_Parms
		{
			FName ConstraintName;
			FConstraintInstanceAccessor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByName_Parms, ConstraintName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ConstraintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets a constraint by its joint name\n\x09* @param ConstraintName name of the constraint\n\x09* @return ConstraintInstance accessor to the constraint data\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets a constraint by its joint name\n@param ConstraintName name of the constraint\n@return ConstraintInstance accessor to the constraint data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraintByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PhysicsAsset_eventGetConstraintByName_Parms), Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics
	{
		struct PhysicsAsset_eventGetConstraints_Parms
		{
			bool bIncludesTerminated;
			TArray<FConstraintInstanceAccessor> OutConstraints;
		};
		static void NewProp_bIncludesTerminated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludesTerminated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutConstraints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit(void* Obj)
	{
		((PhysicsAsset_eventGetConstraints_Parms*)Obj)->bIncludesTerminated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated = { "bIncludesTerminated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsAsset_eventGetConstraints_Parms), &Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints_Inner = { "OutConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints = { "OutConstraints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsAsset_eventGetConstraints_Parms, OutConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets all constraints\n\x09* @param IncludesTerminated whether or not to return terminated constraints\n\x09* @param OutConstraints returned list of constraints matching the parameters\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets all constraints\n@param IncludesTerminated whether or not to return terminated constraints\n@param OutConstraints returned list of constraints matching the parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PhysicsAsset_eventGetConstraints_Parms), Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAsset);
	UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister()
	{
		return UPhysicsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSkelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSkelMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PhysicalAnimationProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationProfiles;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintProfiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentPhysicalAnimationProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConstraintProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentConstraintProfileName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoundsBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundsBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalBodySetups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalBodySetups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintSetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolverIterations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SolverType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SolverType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotForDedicatedServer_MetaData[];
#endif
		static void NewProp_bNotForDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotForDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames, "GetConstraintByBoneNames" }, // 3604281161
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName, "GetConstraintByName" }, // 2243143705
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraints, "GetConstraints" }, // 3689311949
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "OldSolverSettings" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\n * The asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\n * A SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\n * The asset can be configured inside the Physics Asset Editor.\n *\n * @see https://docs.unrealengine.com/InteractiveExperiences/Physics/PhysicsAssetEditor\n * @see USkeletalMesh\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\nThe asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\nA SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\nThe asset can be configured inside the Physics Asset Editor.\n\n@see https://docs.unrealengine.com/InteractiveExperiences/Physics/PhysicsAssetEditor\n@see USkeletalMesh" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Default skeletal mesh to use when previewing this PhysicsAsset etc. \n\x09 *\x09Is the one that was used as the basis for creating this Asset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Default skeletal mesh to use when previewing this PhysicsAsset etc.\nIs the one that was used as the basis for creating this Asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh = { "DefaultSkelMesh", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, DefaultSkelMesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014010800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner = { "PhysicalAnimationProfiles", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles = { "PhysicalAnimationProfiles", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, PhysicalAnimationProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner = { "ConstraintProfiles", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles = { "ConstraintProfiles", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName = { "CurrentPhysicalAnimationProfileName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentPhysicalAnimationProfileName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName = { "CurrentConstraintProfileName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentConstraintProfileName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner = { "BoundsBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData[] = {
		{ "Comment", "/** Index of bodies that are marked bConsiderForBounds */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Index of bodies that are marked bConsiderForBounds" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies = { "BoundsBodies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, BoundsBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\n\x09*\x09""Does not include body position - those are taken from mesh.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner = { "SkeletalBodySetups", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\n\x09*\x09""Does not include body position - those are taken from mesh.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups = { "SkeletalBodySetups", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, SkeletalBodySetups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of RB_ConstraintSetup objects. \n\x09 *\x09Stores information about a joint between two bodies, such as position relative to each body, joint limits etc.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of RB_ConstraintSetup objects. \n\x09 *\x09Stores information about a joint between two bodies, such as position relative to each body, joint limits etc.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintSetup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** \n\x09 * Solver settings when the asset is used with a RigidBody Anim Node (RBAN).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver settings when the asset is used with a RigidBody Anim Node (RBAN)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, SolverSettings), Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings_MetaData)) }; // 4073469177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations_MetaData[] = {
		{ "Category", "OldSolverSettings" },
		{ "Comment", "/** \n\x09 * Old solver settings shown for reference. These will be removed at some point.\n\x09 * When you open an old asset you should see that the settings were transferred to \"SolverSettings\" above. \n\x09 * You should usually see:\n\x09 * SolverSettings.PositionIterations = OldSettings.SolverIterations * OldSetting.JointIterations;\n\x09 * SolverSettings.VelocityIterations = 1;\n\x09 * SolverSettings.ProjectionIterations = 1;\n\x09*/" },
		{ "DisplayName", "[Not Used] Old Solver Settings" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Old solver settings shown for reference. These will be removed at some point.\nWhen you open an old asset you should see that the settings were transferred to \"SolverSettings\" above.\nYou should usually see:\nSolverSettings.PositionIterations = OldSettings.SolverIterations * OldSetting.JointIterations;\nSolverSettings.VelocityIterations = 1;\nSolverSettings.ProjectionIterations = 1;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, SolverIterations), Z_Construct_UScriptStruct_FSolverIterations, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations_MetaData)) }; // 3733713809
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** \n\x09 * Solver type used in physics asset editor. This can be used to make what you see in the asset editror more closely resembles what you\n\x09 * see in game (though there will be differences owing to framerate variation etc). If your asset will primarily be used as a ragdoll \n\x09 * select \"World\", but if it will be used in the AnimGraph select \"RBAN\".\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver type used in physics asset editor. This can be used to make what you see in the asset editror more closely resembles what you\nsee in game (though there will be differences owing to framerate variation etc). If your asset will primarily be used as a ragdoll\nselect \"World\", but if it will be used in the AnimGraph select \"RBAN\"." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType = { "SolverType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, SolverType), Z_Construct_UEnum_Engine_EPhysicsAssetSolverType, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_MetaData)) }; // 140133515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, we skip instancing bodies for this PhysicsAsset on dedicated servers */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true, we skip instancing bodies for this PhysicsAsset on dedicated servers" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit(void* Obj)
	{
		((UPhysicsAsset*)Obj)->bNotForDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer = { "bNotForDedicatedServer", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsAsset), &Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner = { "BodySetup", nullptr, (EPropertyFlags)0x0006000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0044008020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAsset, BodySetup_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UPhysicsAsset, IInterface_PreviewMeshProvider), false },  // 3026411520
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams = {
		&UPhysicsAsset::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008804A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAsset()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton, Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsAsset>()
	{
		return UPhysicsAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAsset);
	UPhysicsAsset::~UPhysicsAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile;
class UScriptStruct* FPhysicalAnimationProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationProfile, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationProfile"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicalAnimationProfile>()
{
	return FPhysicalAnimationProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Comment", "/** Profile name used to identify set of physical animation parameters */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Profile name used to identify set of physical animation parameters" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Physical animation parameters used to drive animation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Physical animation parameters used to drive animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData)) }; // 113548622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicalAnimationProfile",
		sizeof(FPhysicalAnimationProfile),
		alignof(FPhysicalAnimationProfile),
		Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton;
	}
	void USkeletalBodySetup::StaticRegisterNativesUSkeletalBodySetup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalBodySetup);
	UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister()
	{
		return USkeletalBodySetup::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalBodySetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPhysicalAnimationProfile;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipScaleFromAnimation_MetaData[];
#endif
		static void NewProp_bSkipScaleFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipScaleFromAnimation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalBodySetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBodySetup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "//dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile = { "CurrentPhysicalAnimationProfile", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalBodySetup, CurrentPhysicalAnimationProfile), Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData)) }; // 78186408
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged" },
	};
#endif
	void Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit(void* Obj)
	{
		((USkeletalBodySetup*)Obj)->bSkipScaleFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation = { "bSkipScaleFromAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalBodySetup), &Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(nullptr, 0) }; // 78186408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalBodySetup, PhysicalAnimationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData)) }; // 78186408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalBodySetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalBodySetup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams = {
		&USkeletalBodySetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalBodySetup()
	{
		if (!Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton, Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalBodySetup>()
	{
		return USkeletalBodySetup::StaticClass();
	}
	USkeletalBodySetup::USkeletalBodySetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalBodySetup);
	USkeletalBodySetup::~USkeletalBodySetup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::EnumInfo[] = {
		{ EPhysicsAssetSolverType_StaticEnum, TEXT("EPhysicsAssetSolverType"), &Z_Registration_Info_UEnum_EPhysicsAssetSolverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 140133515U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsAssetSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewStructOps, TEXT("PhysicsAssetSolverSettings"), &Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsAssetSolverSettings), 4073469177U) },
		{ FSolverIterations::StaticStruct, Z_Construct_UScriptStruct_FSolverIterations_Statics::NewStructOps, TEXT("SolverIterations"), &Z_Registration_Info_UScriptStruct_SolverIterations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverIterations), 3733713809U) },
		{ FPhysicalAnimationProfile::StaticStruct, Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewStructOps, TEXT("PhysicalAnimationProfile"), &Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalAnimationProfile), 78186408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAsset, UPhysicsAsset::StaticClass, TEXT("UPhysicsAsset"), &Z_Registration_Info_UClass_UPhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAsset), 1024233972U) },
		{ Z_Construct_UClass_USkeletalBodySetup, USkeletalBodySetup::StaticClass, TEXT("USkeletalBodySetup"), &Z_Registration_Info_UClass_USkeletalBodySetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalBodySetup), 2498225174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_3576642996(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
