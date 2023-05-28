// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsControlActor.h"
#include "PhysicsControlData.h"
#include "PhysicsControlLimbData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_APhysicsControlActor();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_APhysicsControlActor_NoRegister();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlInitializerComponent();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister();
	PHYSICSCONTROL_API UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FInitialBodyModifier();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FInitialCharacterControls();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FInitialPhysicsControl();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlMultiplier();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlSettings();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlTarget();
	UPackage* Z_Construct_UPackage__Script_PhysicsControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InitialPhysicsControl;
class UScriptStruct* FInitialPhysicsControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InitialPhysicsControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InitialPhysicsControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInitialPhysicsControl, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("InitialPhysicsControl"));
	}
	return Z_Registration_Info_UScriptStruct_InitialPhysicsControl.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FInitialPhysicsControl>()
{
	return FInitialPhysicsControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentMeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildMeshComponentName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure that determines a Physics Control used during initialization of the physics control actor\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Structure that determines a Physics Control used during initialization of the physics control actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInitialPhysicsControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentActor_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The owner of the mesh that will be doing the driving. Blank/non-existent means it will happen in world space */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The owner of the mesh that will be doing the driving. Blank/non-existent means it will happen in world space" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentMeshComponentName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * The mesh that will be doing the driving. If this is blank but there is an actor, then we'll attempt to\n\x09 * use the root component. If that doesn't work then it will happen in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The mesh that will be doing the driving. If this is blank but there is an actor, then we'll attempt to\nuse the root component. If that doesn't work then it will happen in world space." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentMeshComponentName = { "ParentMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ParentMeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentMeshComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentBoneName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * If the parent mesh component is skeletal, then the name of the skeletal mesh bone that will be doing \n\x09 * the driving. \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "If the parent mesh component is skeletal, then the name of the skeletal mesh bone that will be doing\nthe driving." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ParentBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildActor_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The owner of the mesh that the control will be driving */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The owner of the mesh that the control will be driving" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildActor = { "ChildActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ChildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildMeshComponentName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * The mesh that the control will be driving. If this is blank but there is an actor, then we'll attempt \n\x09 * to use the root component \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The mesh that the control will be driving. If this is blank but there is an actor, then we'll attempt\nto use the root component" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildMeshComponentName = { "ChildMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ChildMeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildMeshComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildBoneName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * If the child mesh component is skeletal, then the name of the skeletal mesh bone that the control \n\x09 * will be driving. \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "If the child mesh component is skeletal, then the name of the skeletal mesh bone that the control\nwill be driving." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ChildBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlData_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * Strength and damping parameters. Can be modified at any time, but will sometimes have \n\x09 * been set once during initialization \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Strength and damping parameters. Can be modified at any time, but will sometimes have\nbeen set once during initialization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Multiplier for the ControlData. This will typically be modified dynamically, and also expose the ability\n\x09 * to set directional strengths\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Multiplier for the ControlData. This will typically be modified dynamically, and also expose the ability\nto set directional strengths" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlMultiplier_MetaData)) }; // 2703942446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * The position/orientation etc targets for the controls. These are procedural/explicit control targets -\n\x09 * skeletal meshes have the option to use skeletal animation as well, in which case these targets are \n\x09 * expressed as relative to that animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The position/orientation etc targets for the controls. These are procedural/explicit control targets -\nskeletal meshes have the option to use skeletal animation as well, in which case these targets are\nexpressed as relative to that animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * More general settings for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "More general settings for the control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialPhysicsControl, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ParentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ChildBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewProp_ControlSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"InitialPhysicsControl",
		sizeof(FInitialPhysicsControl),
		alignof(FInitialPhysicsControl),
		Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInitialPhysicsControl()
	{
		if (!Z_Registration_Info_UScriptStruct_InitialPhysicsControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InitialPhysicsControl.InnerSingleton, Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InitialPhysicsControl.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InitialBodyModifier;
class UScriptStruct* FInitialBodyModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InitialBodyModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InitialBodyModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInitialBodyModifier, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("InitialBodyModifier"));
	}
	return Z_Registration_Info_UScriptStruct_InitialBodyModifier.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FInitialBodyModifier>()
{
	return FInitialBodyModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInitialBodyModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicTargetPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicTargetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicTargetOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicTargetOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure that determines a Body Modifier used during initialization of the physics control actor\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Structure that determines a Body Modifier used during initialization of the physics control actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInitialBodyModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The owner of the mesh that that we will modify */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The owner of the mesh that that we will modify" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MeshComponentName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * The mesh that will be modify. If this is blank but there is an actor, then we'll attempt to\n\x09 * use the root component. \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The mesh that will be modify. If this is blank but there is an actor, then we'll attempt to\nuse the root component." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MeshComponentName = { "MeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, MeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MeshComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** \n\x09 * If the mesh component is skeletal, then the name of the skeletal mesh bone to modify\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "If the mesh component is skeletal, then the name of the skeletal mesh bone to modify" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** How the associated body should move. */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "How the associated body should move." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Multiplier for gravity applied to the body. Note that if the body itself has gravity disabled, then\n\x09 * setting this to 1 will not enable gravity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Multiplier for gravity applied to the body. Note that if the body itself has gravity disabled, then\nsetting this to 1 will not enable gravity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, GravityMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_GravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetPosition_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * The target position when kinematic. Note that this is applied on top of any animation\n\x09 * target if bUseSkeletalAnimation is set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The target position when kinematic. Note that this is applied on top of any animation\ntarget if bUseSkeletalAnimation is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetPosition = { "KinematicTargetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, KinematicTargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetOrientation_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * The target orientation when kinematic. Note that this is applied on top of any animation\n\x09 * target if bUseSkeletalAnimation is set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The target orientation when kinematic. Note that this is applied on top of any animation\ntarget if bUseSkeletalAnimation is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetOrientation = { "KinematicTargetOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialBodyModifier, KinematicTargetOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** If true then the target will be applied on top of the skeletal animation (if there is any) */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "If true then the target will be applied on top of the skeletal animation (if there is any)" },
	};
#endif
	void Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((FInitialBodyModifier*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInitialBodyModifier), &Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_KinematicTargetOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewProp_bUseSkeletalAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"InitialBodyModifier",
		sizeof(FInitialBodyModifier),
		alignof(FInitialBodyModifier),
		Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInitialBodyModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_InitialBodyModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InitialBodyModifier.InnerSingleton, Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InitialBodyModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InitialCharacterControls;
class UScriptStruct* FInitialCharacterControls::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InitialCharacterControls.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InitialCharacterControls.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInitialCharacterControls, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("InitialCharacterControls"));
	}
	return Z_Registration_Info_UScriptStruct_InitialCharacterControls.OuterSingleton;
}
template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<FInitialCharacterControls>()
{
	return FInitialCharacterControls::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInitialCharacterControls_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshComponentName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbSetupData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbSetupData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimbSetupData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldSpaceControls_MetaData[];
#endif
		static void NewProp_bEnableWorldSpaceControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldSpaceControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpaceControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentSpaceControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpaceControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentSpaceControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableParentSpaceControls_MetaData[];
#endif
		static void NewProp_bEnableParentSpaceControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableParentSpaceControls;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsMovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsMovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsMovementType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure that holds the data necessary to set up a default set of limb controls for a character\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Structure that holds the data necessary to set up a default set of limb controls for a character" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInitialCharacterControls>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_CharacterActor_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** The owner of the character skeletal mesh */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The owner of the character skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_CharacterActor = { "CharacterActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, CharacterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_CharacterActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_CharacterActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_SkeletalMeshComponentName_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * The skeletal mesh that will have controls set up. If this is blank but there is an actor, then we'll attempt to\n\x09 * use the root component. \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "The skeletal mesh that will have controls set up. If this is blank but there is an actor, then we'll attempt to\nuse the root component." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_SkeletalMeshComponentName = { "SkeletalMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, SkeletalMeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_SkeletalMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_SkeletalMeshComponentName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData_Inner = { "LimbSetupData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData, METADATA_PARAMS(nullptr, 0) }; // 3622788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData = { "LimbSetupData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, LimbSetupData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData_MetaData)) }; // 3622788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlData_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlData = { "WorldSpaceControlData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, WorldSpaceControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlSettings_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlSettings = { "WorldSpaceControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, WorldSpaceControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls_SetBit(void* Obj)
	{
		((FInitialCharacterControls*)Obj)->bEnableWorldSpaceControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls = { "bEnableWorldSpaceControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInitialCharacterControls), &Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlData_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlData = { "ParentSpaceControlData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, ParentSpaceControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlSettings_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlSettings = { "ParentSpaceControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, ParentSpaceControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls_SetBit(void* Obj)
	{
		((FInitialCharacterControls*)Obj)->bEnableParentSpaceControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls = { "bEnableParentSpaceControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInitialCharacterControls), &Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType = { "PhysicsMovementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInitialCharacterControls, PhysicsMovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType_MetaData)) }; // 3841797257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_CharacterActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_SkeletalMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_LimbSetupData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_WorldSpaceControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableWorldSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_ParentSpaceControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_bEnableParentSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewProp_PhysicsMovementType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		&NewStructOps,
		"InitialCharacterControls",
		sizeof(FInitialCharacterControls),
		alignof(FInitialCharacterControls),
		Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInitialCharacterControls()
	{
		if (!Z_Registration_Info_UScriptStruct_InitialCharacterControls.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InitialCharacterControls.InnerSingleton, Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InitialCharacterControls.InnerSingleton;
	}
	DEFINE_FUNCTION(UPhysicsControlInitializerComponent::execCreateControls)
	{
		P_GET_OBJECT(UPhysicsControlComponent,Z_Param_PhysicsControlComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateControls(Z_Param_PhysicsControlComponent);
		P_NATIVE_END;
	}
	void UPhysicsControlInitializerComponent::StaticRegisterNativesUPhysicsControlInitializerComponent()
	{
		UClass* Class = UPhysicsControlInitializerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateControls", &UPhysicsControlInitializerComponent::execCreateControls },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics
	{
		struct PhysicsControlInitializerComponent_eventCreateControls_Parms
		{
			UPhysicsControlComponent* PhysicsControlComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsControlComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsControlComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::NewProp_PhysicsControlComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::NewProp_PhysicsControlComponent = { "PhysicsControlComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlInitializerComponent_eventCreateControls_Parms, PhysicsControlComponent), Z_Construct_UClass_UPhysicsControlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::NewProp_PhysicsControlComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::NewProp_PhysicsControlComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::NewProp_PhysicsControlComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * This creates all the controls specified in the Initial properties. You can call it explicitly,\n\x09 * or you can opt to have it called at BeginPlay using CreateControlsAtBeginPlay.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "This creates all the controls specified in the Initial properties. You can call it explicitly,\nor you can opt to have it called at BeginPlay using CreateControlsAtBeginPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlInitializerComponent, nullptr, "CreateControls", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::PhysicsControlInitializerComponent_eventCreateControls_Parms), Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsControlInitializerComponent);
	UClass* Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister()
	{
		return UPhysicsControlInitializerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialCharacterControls_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialCharacterControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialControls_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InitialControls_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialControls_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InitialControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialBodyModifiers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InitialBodyModifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialBodyModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InitialBodyModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateControlsAtBeginPlay_MetaData[];
#endif
		static void NewProp_bCreateControlsAtBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateControlsAtBeginPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls, "CreateControls" }, // 4279452690
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n * \n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsControlActor.h" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialCharacterControls_MetaData[] = {
		{ "Category", "PhysicsControls" },
		{ "Comment", "/**\n\x09 * This can be filled in to automatically create whole-character controls (by specifying limbs etc) for\n\x09 * a skeletal mesh during the BeginPlay event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "This can be filled in to automatically create whole-character controls (by specifying limbs etc) for\na skeletal mesh during the BeginPlay event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialCharacterControls = { "InitialCharacterControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlInitializerComponent, InitialCharacterControls), Z_Construct_UScriptStruct_FInitialCharacterControls, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialCharacterControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialCharacterControls_MetaData)) }; // 442083537
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_ValueProp = { "InitialControls", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInitialPhysicsControl, METADATA_PARAMS(nullptr, 0) }; // 3625439172
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_Key_KeyProp = { "InitialControls_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_MetaData[] = {
		{ "Category", "PhysicsControls" },
		{ "Comment", "/**\n\x09 * This can be filled in to automatically create controls during the BeginPlay event. If a control\n\x09 * already exists with the name (e.g. created as part of InitialCharacterControls) then it will be updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "This can be filled in to automatically create controls during the BeginPlay event. If a control\nalready exists with the name (e.g. created as part of InitialCharacterControls) then it will be updated." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls = { "InitialControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlInitializerComponent, InitialControls), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_MetaData)) }; // 3625439172
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_ValueProp = { "InitialBodyModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInitialBodyModifier, METADATA_PARAMS(nullptr, 0) }; // 1857471303
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_Key_KeyProp = { "InitialBodyModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_MetaData[] = {
		{ "Category", "PhysicsControls" },
		{ "Comment", "/**\n\x09 * This can be filled in to automatically create body modifiers during the BeginPlay event. If a body modifier\n\x09 * already exists with the name (e.g. created as part of InitialCharacterControls) then it will be updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "This can be filled in to automatically create body modifiers during the BeginPlay event. If a body modifier\nalready exists with the name (e.g. created as part of InitialCharacterControls) then it will be updated." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers = { "InitialBodyModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlInitializerComponent, InitialBodyModifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_MetaData)) }; // 1857471303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay_MetaData[] = {
		{ "Category", "PhysicsControls" },
		{ "Comment", "/**\n\x09 * If set, then CreateControls will be called in our BeginPlay event, attempting to find a \n\x09 * PhysicsControlComponent in our parent actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "If set, then CreateControls will be called in our BeginPlay event, attempting to find a\nPhysicsControlComponent in our parent actor." },
	};
#endif
	void Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay_SetBit(void* Obj)
	{
		((UPhysicsControlInitializerComponent*)Obj)->bCreateControlsAtBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay = { "bCreateControlsAtBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsControlInitializerComponent), &Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialCharacterControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_InitialBodyModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::NewProp_bCreateControlsAtBeginPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsControlInitializerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::ClassParams = {
		&UPhysicsControlInitializerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsControlInitializerComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton, Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UClass* StaticClass<UPhysicsControlInitializerComponent>()
	{
		return UPhysicsControlInitializerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsControlInitializerComponent);
	UPhysicsControlInitializerComponent::~UPhysicsControlInitializerComponent() {}
	void APhysicsControlActor::StaticRegisterNativesAPhysicsControlActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsControlActor);
	UClass* Z_Construct_UClass_APhysicsControlActor_NoRegister()
	{
		return APhysicsControlActor::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsControlActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlInitializerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlInitializerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsControlActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsControlActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that holds a PhysicsControlComponent which is then used to apply controls/body modifiers to\n * other actors from \"outside\", and a PhysicsControlInitializerComponent which provides the ability\n * to create those controls automatically\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsControlActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
		{ "ToolTip", "Actor that holds a PhysicsControlComponent which is then used to apply controls/body modifiers to\nother actors from \"outside\", and a PhysicsControlInitializerComponent which provides the ability\nto create those controls automatically" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ControlActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlComponent = { "ControlComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsControlActor, ControlComponent), Z_Construct_UClass_UPhysicsControlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlInitializerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ControlActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlInitializerComponent = { "ControlInitializerComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsControlActor, ControlInitializerComponent), Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlInitializerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlInitializerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsControlActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsControlActor_Statics::NewProp_ControlInitializerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsControlActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsControlActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsControlActor_Statics::ClassParams = {
		&APhysicsControlActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsControlActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsControlActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsControlActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsControlActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsControlActor()
	{
		if (!Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton, Z_Construct_UClass_APhysicsControlActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UClass* StaticClass<APhysicsControlActor>()
	{
		return APhysicsControlActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsControlActor);
	APhysicsControlActor::~APhysicsControlActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ScriptStructInfo[] = {
		{ FInitialPhysicsControl::StaticStruct, Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewStructOps, TEXT("InitialPhysicsControl"), &Z_Registration_Info_UScriptStruct_InitialPhysicsControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInitialPhysicsControl), 3625439172U) },
		{ FInitialBodyModifier::StaticStruct, Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewStructOps, TEXT("InitialBodyModifier"), &Z_Registration_Info_UScriptStruct_InitialBodyModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInitialBodyModifier), 1857471303U) },
		{ FInitialCharacterControls::StaticStruct, Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewStructOps, TEXT("InitialCharacterControls"), &Z_Registration_Info_UScriptStruct_InitialCharacterControls, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInitialCharacterControls), 442083537U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsControlInitializerComponent, UPhysicsControlInitializerComponent::StaticClass, TEXT("UPhysicsControlInitializerComponent"), &Z_Registration_Info_UClass_UPhysicsControlInitializerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsControlInitializerComponent), 357821519U) },
		{ Z_Construct_UClass_APhysicsControlActor, APhysicsControlActor::StaticClass, TEXT("APhysicsControlActor"), &Z_Registration_Info_UClass_APhysicsControlActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsControlActor), 2924361795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_2583173776(TEXT("/Script/PhysicsControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
