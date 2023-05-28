// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsControlComponent.h"
#include "PhysicsControlData.h"
#include "PhysicsControlLimbData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister();
	PHYSICSCONTROL_API UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsControlType();
	PHYSICSCONTROL_API UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbBones();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlMultiplier();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlNames();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlSettings();
	PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlTarget();
	UPackage* Z_Construct_UPackage__Script_PhysicsControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsControlType;
	static UEnum* EPhysicsControlType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType, (UObject*)Z_Construct_UPackage__Script_PhysicsControl(), TEXT("EPhysicsControlType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UEnum* StaticEnum<EPhysicsControlType>()
	{
		return EPhysicsControlType_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enumerators[] = {
		{ "EPhysicsControlType::WorldSpace", (int64)EPhysicsControlType::WorldSpace },
		{ "EPhysicsControlType::ParentSpace", (int64)EPhysicsControlType::ParentSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Specifies the type of control that is created when making controls from a skeleton or a set of limbs. \n * Note that if controls are made individually then other options are available - i.e. in a character, \n * any body part can be controlled relative to any other part, or indeed any other object.\n */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ParentSpace.Comment", "/** Control is done in the space of the parent of each object */" },
		{ "ParentSpace.Name", "EPhysicsControlType::ParentSpace" },
		{ "ParentSpace.ToolTip", "Control is done in the space of the parent of each object" },
		{ "ToolTip", "Specifies the type of control that is created when making controls from a skeleton or a set of limbs.\nNote that if controls are made individually then other options are available - i.e. in a character,\nany body part can be controlled relative to any other part, or indeed any other object." },
		{ "WorldSpace.Comment", "/** Control is done in world space, so each object/part is driven independently */" },
		{ "WorldSpace.Name", "EPhysicsControlType::WorldSpace" },
		{ "WorldSpace.ToolTip", "Control is done in world space, so each object/part is driven independently" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsControl,
		nullptr,
		"EPhysicsControlType",
		"EPhysicsControlType",
		Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsControl_EPhysicsControlType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton, Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetSetsContainingBodyModifier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Control);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSetsContainingBodyModifier(Z_Param_Control);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetSetsContainingControl)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Control);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSetsContainingControl(Z_Param_Control);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execAddBodyModifiersToSet)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_NewSet);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BodyModifiers);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBodyModifiersToSet(Z_Param_Out_NewSet,Z_Param_Out_BodyModifiers,Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execAddBodyModifierToSet)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_NewSet);
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyModifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBodyModifierToSet(Z_Param_Out_NewSet,Z_Param_BodyModifier,Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetBodyModifierNamesInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetBodyModifierNamesInSet(Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetAllBodyModifierNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllBodyModifierNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlNamesInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetControlNamesInSet(Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetAllControlNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllControlNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execAddControlsToSet)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_NewSet);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Controls);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddControlsToSet(Z_Param_Out_NewSet,Z_Param_Out_Controls,Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execAddControlToSet)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_NewSet);
		P_GET_PROPERTY(FNameProperty,Z_Param_Control);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddControlToSet(Z_Param_Out_NewSet,Z_Param_Control,Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsAndBodyModifiersFromLimbBones)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllWorldSpaceControls);
		P_GET_TMAP_REF(FName,FPhysicsControlNames,Z_Param_Out_LimbWorldSpaceControls);
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllParentSpaceControls);
		P_GET_TMAP_REF(FName,FPhysicsControlNames,Z_Param_Out_LimbParentSpaceControls);
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllBodyModifiers);
		P_GET_TMAP_REF(FName,FPhysicsControlNames,Z_Param_Out_LimbBodyModifiers);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TARRAY_REF(FPhysicsControlLimbSetupData,Z_Param_Out_LimbSetupData);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_WorldSpaceControlData);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_WorldSpaceControlSettings);
		P_GET_UBOOL(Z_Param_bEnableWorldSpaceControls);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ParentSpaceControlData);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ParentSpaceControlSettings);
		P_GET_UBOOL(Z_Param_bEnableParentSpaceControls);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_PhysicsMovementType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateControlsAndBodyModifiersFromLimbBones(Z_Param_Out_AllWorldSpaceControls,Z_Param_Out_LimbWorldSpaceControls,Z_Param_Out_AllParentSpaceControls,Z_Param_Out_LimbParentSpaceControls,Z_Param_Out_AllBodyModifiers,Z_Param_Out_LimbBodyModifiers,Z_Param_SkeletalMeshComponent,Z_Param_Out_LimbSetupData,Z_Param_WorldSpaceControlData,Z_Param_WorldSpaceControlSettings,Z_Param_bEnableWorldSpaceControls,Z_Param_ParentSpaceControlData,Z_Param_ParentSpaceControlSettings,Z_Param_bEnableParentSpaceControls,EPhysicsMovementType(Z_Param_PhysicsMovementType),Z_Param_GravityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersInSetUseSkeletalAnimation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersInSetUseSkeletalAnimation(Z_Param_Set,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersUseSkeletalAnimation)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersUseSkeletalAnimation(Z_Param_Out_Names,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifierUseSkeletalAnimation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBodyModifierUseSkeletalAnimation(Z_Param_Name,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersInSetGravityMultiplier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersInSetGravityMultiplier(Z_Param_Set,Z_Param_GravityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersGravityMultiplier)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersGravityMultiplier(Z_Param_Out_Names,Z_Param_GravityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifierGravityMultiplier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBodyModifierGravityMultiplier(Z_Param_Name,Z_Param_GravityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersInSetCollisionType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersInSetCollisionType(Z_Param_Set,ECollisionEnabled::Type(Z_Param_CollisionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersCollisionType)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersCollisionType(Z_Param_Out_Names,ECollisionEnabled::Type(Z_Param_CollisionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifierCollisionType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBodyModifierCollisionType(Z_Param_Name,ECollisionEnabled::Type(Z_Param_CollisionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersInSetMovementType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersInSetMovementType(Z_Param_Set,EPhysicsMovementType(Z_Param_MovementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifiersMovementType)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyModifiersMovementType(Z_Param_Out_Names,EPhysicsMovementType(Z_Param_MovementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifierMovementType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBodyModifierMovementType(Z_Param_Name,EPhysicsMovementType(Z_Param_MovementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetBodyModifierKinematicTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_KinematicTargetPosition);
		P_GET_STRUCT(FRotator,Z_Param_KinematicTargetOrienation);
		P_GET_UBOOL(Z_Param_bMakeKinematic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBodyModifierKinematicTarget(Z_Param_Name,Z_Param_KinematicTargetPosition,Z_Param_KinematicTargetOrienation,Z_Param_bMakeKinematic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyBodyModifiersInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyBodyModifiersInSet(Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyBodyModifiers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyBodyModifiers(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyBodyModifier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyBodyModifier(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateBodyModifiersFromLimbBones)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllBodyModifiers);
		P_GET_TMAP_REF(FName,FPhysicsControlLimbBones,Z_Param_Out_LimbBones);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FPhysicsControlNames>*)Z_Param__Result=P_THIS->CreateBodyModifiersFromLimbBones(Z_Param_Out_AllBodyModifiers,Z_Param_Out_LimbBones,EPhysicsMovementType(Z_Param_MovementType),ECollisionEnabled::Type(Z_Param_CollisionType),Z_Param_GravityMultiplier,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateBodyModifiersFromSkeletalMeshBelow)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CreateBodyModifiersFromSkeletalMeshBelow(Z_Param_SkeletalMeshComponent,Z_Param_BoneName,Z_Param_bIncludeSelf,Z_Param_Set,EPhysicsMovementType(Z_Param_MovementType),ECollisionEnabled::Type(Z_Param_CollisionType),Z_Param_GravityMultiplier,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateNamedBodyModifier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateNamedBodyModifier(Z_Param_Name,Z_Param_MeshComponent,Z_Param_BoneName,Z_Param_Set,EPhysicsMovementType(Z_Param_MovementType),ECollisionEnabled::Type(Z_Param_CollisionType),Z_Param_GravityMultiplier,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateBodyModifier)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_ENUM(EPhysicsMovementType,Z_Param_MovementType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityMultiplier);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->CreateBodyModifier(Z_Param_MeshComponent,Z_Param_BoneName,Z_Param_Set,EPhysicsMovementType(Z_Param_MovementType),ECollisionEnabled::Type(Z_Param_CollisionType),Z_Param_GravityMultiplier,Z_Param_bUseSkeletalAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlEnabled(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlAutoDisable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlAutoDisable(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FPhysicsControlTarget,Z_Param_Out_ControlTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlTarget(Z_Param_Name,Z_Param_Out_ControlTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlMultiplier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FPhysicsControlMultiplier,Z_Param_Out_ControlMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlMultiplier(Z_Param_Name,Z_Param_Out_ControlMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetControlData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FPhysicsControlData,Z_Param_Out_ControlData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlData(Z_Param_Name,Z_Param_Out_ControlData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsInSetDisableCollision)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bDisableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsInSetDisableCollision(Z_Param_Set,Z_Param_bDisableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsDisableCollision)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_UBOOL(Z_Param_bDisableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsDisableCollision(Z_Param_Out_Names,Z_Param_bDisableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlDisableCollision)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bDisableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlDisableCollision(Z_Param_Name,Z_Param_bDisableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsInSetAutoDisable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bAutoDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsInSetAutoDisable(Z_Param_Set,Z_Param_bAutoDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsAutoDisable)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_UBOOL(Z_Param_bAutoDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsAutoDisable(Z_Param_Out_Names,Z_Param_bAutoDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlAutoDisable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bAutoDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlAutoDisable(Z_Param_Name,Z_Param_bAutoDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsInSetEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsInSetEnabled(Z_Param_Set,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsEnabled)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsEnabled(Z_Param_Out_Names,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlEnabled(Z_Param_Name,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsInSetUseSkeletalAnimation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsInSetUseSkeletalAnimation(Z_Param_Set,Z_Param_bUseSkeletalAnimation,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlsUseSkeletalAnimation)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlsUseSkeletalAnimation(Z_Param_Out_Names,Z_Param_bUseSkeletalAnimation,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlUseSkeletalAnimation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bUseSkeletalAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlUseSkeletalAnimation(Z_Param_Name,Z_Param_bUseSkeletalAnimation,Z_Param_SkeletalAnimationVelocityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargetPoses)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_ParentPosition);
		P_GET_STRUCT(FRotator,Z_Param_ParentOrientation);
		P_GET_STRUCT(FVector,Z_Param_ChildPosition);
		P_GET_STRUCT(FRotator,Z_Param_ChildOrientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityDeltaTime);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlTargetPoses(Z_Param_Name,Z_Param_ParentPosition,Z_Param_ParentOrientation,Z_Param_ChildPosition,Z_Param_ChildOrientation,Z_Param_VelocityDeltaTime,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargetOrientation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularVelocityDeltaTime);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_GET_UBOOL(Z_Param_bApplyControlPointToTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlTargetOrientation(Z_Param_Name,Z_Param_Orientation,Z_Param_AngularVelocityDeltaTime,Z_Param_bEnableControl,Z_Param_bApplyControlPointToTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargetPosition)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityDeltaTime);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_GET_UBOOL(Z_Param_bApplyControlPointToTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlTargetPosition(Z_Param_Name,Z_Param_Position,Z_Param_VelocityDeltaTime,Z_Param_bEnableControl,Z_Param_bApplyControlPointToTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargetPositionAndOrientation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityDeltaTime);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_GET_UBOOL(Z_Param_bApplyControlPointToTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlTargetPositionAndOrientation(Z_Param_Name,Z_Param_Position,Z_Param_Orientation,Z_Param_VelocityDeltaTime,Z_Param_bEnableControl,Z_Param_bApplyControlPointToTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargetsInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_STRUCT(FPhysicsControlTarget,Z_Param_ControlTarget);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlTargetsInSet(Z_Param_Set,Z_Param_ControlTarget,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTargets)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_STRUCT(FPhysicsControlTarget,Z_Param_ControlTarget);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlTargets(Z_Param_Out_Names,Z_Param_ControlTarget,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FPhysicsControlTarget,Z_Param_ControlTarget);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlTarget(Z_Param_Name,Z_Param_ControlTarget,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execResetControlPoint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetControlPoint(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlPoint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlPoint(Z_Param_Name,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlAngularData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExtraDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTorque);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlAngularData(Z_Param_Name,Z_Param_Strength,Z_Param_DampingRatio,Z_Param_ExtraDamping,Z_Param_MaxTorque,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlLinearData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExtraDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxForce);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlLinearData(Z_Param_Name,Z_Param_Strength,Z_Param_DampingRatio,Z_Param_ExtraDamping,Z_Param_MaxForce,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlMultipliersInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_STRUCT(FPhysicsControlMultiplier,Z_Param_ControlMultiplier);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlMultipliersInSet(Z_Param_Set,Z_Param_ControlMultiplier,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlMultipliers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_STRUCT(FPhysicsControlMultiplier,Z_Param_ControlMultiplier);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlMultipliers(Z_Param_Out_Names,Z_Param_ControlMultiplier,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlMultiplier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FPhysicsControlMultiplier,Z_Param_ControlMultiplier);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlMultiplier(Z_Param_Name,Z_Param_ControlMultiplier,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlDatasInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlDatasInSet(Z_Param_Set,Z_Param_ControlData,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlDatas)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlDatas(Z_Param_Out_Names,Z_Param_ControlData,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execSetControlData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_UBOOL(Z_Param_bEnableControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetControlData(Z_Param_Name,Z_Param_ControlData,Z_Param_bEnableControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyControlsInSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyControlsInSet(Z_Param_Set);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyControls)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyControls(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execDestroyControl)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyControl(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromLimbBonesAndConstraintProfile)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllControls);
		P_GET_TMAP_REF(FName,FPhysicsControlLimbBones,Z_Param_Out_LimbBones);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintProfile);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FPhysicsControlNames>*)Z_Param__Result=P_THIS->CreateControlsFromLimbBonesAndConstraintProfile(Z_Param_Out_AllControls,Z_Param_Out_LimbBones,Z_Param_ConstraintProfile,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromLimbBones)
	{
		P_GET_STRUCT_REF(FPhysicsControlNames,Z_Param_Out_AllControls);
		P_GET_TMAP_REF(FName,FPhysicsControlLimbBones,Z_Param_Out_LimbBones);
		P_GET_ENUM(EPhysicsControlType,Z_Param_ControlType);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ControlSettings);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FPhysicsControlNames>*)Z_Param__Result=P_THIS->CreateControlsFromLimbBones(Z_Param_Out_AllControls,Z_Param_Out_LimbBones,EPhysicsControlType(Z_Param_ControlType),Z_Param_ControlData,Z_Param_ControlSettings,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execGetLimbBonesFromSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TARRAY_REF(FPhysicsControlLimbSetupData,Z_Param_Out_LimbSetupData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FPhysicsControlLimbBones>*)Z_Param__Result=P_THIS->GetLimbBonesFromSkeletalMesh(Z_Param_SkeletalMeshComponent,Z_Param_Out_LimbSetupData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromSkeletalMeshAndConstraintProfile)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintProfile);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CreateControlsFromSkeletalMeshAndConstraintProfile(Z_Param_SkeletalMeshComponent,Z_Param_Out_BoneNames,Z_Param_ConstraintProfile,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_GET_ENUM(EPhysicsControlType,Z_Param_ControlType);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ControlSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CreateControlsFromSkeletalMesh(Z_Param_SkeletalMeshComponent,Z_Param_Out_BoneNames,EPhysicsControlType(Z_Param_ControlType),Z_Param_ControlData,Z_Param_ControlSettings,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromSkeletalMeshAndConstraintProfileBelow)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintProfile);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CreateControlsFromSkeletalMeshAndConstraintProfileBelow(Z_Param_SkeletalMeshComponent,Z_Param_BoneName,Z_Param_bIncludeSelf,Z_Param_ConstraintProfile,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControlsFromSkeletalMeshBelow)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_GET_ENUM(EPhysicsControlType,Z_Param_ControlType);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ControlSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CreateControlsFromSkeletalMeshBelow(Z_Param_SkeletalMeshComponent,Z_Param_BoneName,Z_Param_bIncludeSelf,EPhysicsControlType(Z_Param_ControlType),Z_Param_ControlData,Z_Param_ControlSettings,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateNamedControl)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UMeshComponent,Z_Param_ParentMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
		P_GET_OBJECT(UMeshComponent,Z_Param_ChildMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildBoneName);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_STRUCT(FPhysicsControlTarget,Z_Param_ControlTarget);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ControlSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateNamedControl(Z_Param_Name,Z_Param_ParentMeshComponent,Z_Param_ParentBoneName,Z_Param_ChildMeshComponent,Z_Param_ChildBoneName,Z_Param_ControlData,Z_Param_ControlTarget,Z_Param_ControlSettings,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsControlComponent::execCreateControl)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_ParentMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
		P_GET_OBJECT(UMeshComponent,Z_Param_ChildMeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildBoneName);
		P_GET_STRUCT(FPhysicsControlData,Z_Param_ControlData);
		P_GET_STRUCT(FPhysicsControlTarget,Z_Param_ControlTarget);
		P_GET_STRUCT(FPhysicsControlSettings,Z_Param_ControlSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Set);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->CreateControl(Z_Param_ParentMeshComponent,Z_Param_ParentBoneName,Z_Param_ChildMeshComponent,Z_Param_ChildBoneName,Z_Param_ControlData,Z_Param_ControlTarget,Z_Param_ControlSettings,Z_Param_Set,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UPhysicsControlComponent::StaticRegisterNativesUPhysicsControlComponent()
	{
		UClass* Class = UPhysicsControlComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBodyModifiersToSet", &UPhysicsControlComponent::execAddBodyModifiersToSet },
			{ "AddBodyModifierToSet", &UPhysicsControlComponent::execAddBodyModifierToSet },
			{ "AddControlsToSet", &UPhysicsControlComponent::execAddControlsToSet },
			{ "AddControlToSet", &UPhysicsControlComponent::execAddControlToSet },
			{ "CreateBodyModifier", &UPhysicsControlComponent::execCreateBodyModifier },
			{ "CreateBodyModifiersFromLimbBones", &UPhysicsControlComponent::execCreateBodyModifiersFromLimbBones },
			{ "CreateBodyModifiersFromSkeletalMeshBelow", &UPhysicsControlComponent::execCreateBodyModifiersFromSkeletalMeshBelow },
			{ "CreateControl", &UPhysicsControlComponent::execCreateControl },
			{ "CreateControlsAndBodyModifiersFromLimbBones", &UPhysicsControlComponent::execCreateControlsAndBodyModifiersFromLimbBones },
			{ "CreateControlsFromLimbBones", &UPhysicsControlComponent::execCreateControlsFromLimbBones },
			{ "CreateControlsFromLimbBonesAndConstraintProfile", &UPhysicsControlComponent::execCreateControlsFromLimbBonesAndConstraintProfile },
			{ "CreateControlsFromSkeletalMesh", &UPhysicsControlComponent::execCreateControlsFromSkeletalMesh },
			{ "CreateControlsFromSkeletalMeshAndConstraintProfile", &UPhysicsControlComponent::execCreateControlsFromSkeletalMeshAndConstraintProfile },
			{ "CreateControlsFromSkeletalMeshAndConstraintProfileBelow", &UPhysicsControlComponent::execCreateControlsFromSkeletalMeshAndConstraintProfileBelow },
			{ "CreateControlsFromSkeletalMeshBelow", &UPhysicsControlComponent::execCreateControlsFromSkeletalMeshBelow },
			{ "CreateNamedBodyModifier", &UPhysicsControlComponent::execCreateNamedBodyModifier },
			{ "CreateNamedControl", &UPhysicsControlComponent::execCreateNamedControl },
			{ "DestroyBodyModifier", &UPhysicsControlComponent::execDestroyBodyModifier },
			{ "DestroyBodyModifiers", &UPhysicsControlComponent::execDestroyBodyModifiers },
			{ "DestroyBodyModifiersInSet", &UPhysicsControlComponent::execDestroyBodyModifiersInSet },
			{ "DestroyControl", &UPhysicsControlComponent::execDestroyControl },
			{ "DestroyControls", &UPhysicsControlComponent::execDestroyControls },
			{ "DestroyControlsInSet", &UPhysicsControlComponent::execDestroyControlsInSet },
			{ "GetAllBodyModifierNames", &UPhysicsControlComponent::execGetAllBodyModifierNames },
			{ "GetAllControlNames", &UPhysicsControlComponent::execGetAllControlNames },
			{ "GetBodyModifierNamesInSet", &UPhysicsControlComponent::execGetBodyModifierNamesInSet },
			{ "GetControlAutoDisable", &UPhysicsControlComponent::execGetControlAutoDisable },
			{ "GetControlData", &UPhysicsControlComponent::execGetControlData },
			{ "GetControlEnabled", &UPhysicsControlComponent::execGetControlEnabled },
			{ "GetControlMultiplier", &UPhysicsControlComponent::execGetControlMultiplier },
			{ "GetControlNamesInSet", &UPhysicsControlComponent::execGetControlNamesInSet },
			{ "GetControlTarget", &UPhysicsControlComponent::execGetControlTarget },
			{ "GetLimbBonesFromSkeletalMesh", &UPhysicsControlComponent::execGetLimbBonesFromSkeletalMesh },
			{ "GetSetsContainingBodyModifier", &UPhysicsControlComponent::execGetSetsContainingBodyModifier },
			{ "GetSetsContainingControl", &UPhysicsControlComponent::execGetSetsContainingControl },
			{ "ResetControlPoint", &UPhysicsControlComponent::execResetControlPoint },
			{ "SetBodyModifierCollisionType", &UPhysicsControlComponent::execSetBodyModifierCollisionType },
			{ "SetBodyModifierGravityMultiplier", &UPhysicsControlComponent::execSetBodyModifierGravityMultiplier },
			{ "SetBodyModifierKinematicTarget", &UPhysicsControlComponent::execSetBodyModifierKinematicTarget },
			{ "SetBodyModifierMovementType", &UPhysicsControlComponent::execSetBodyModifierMovementType },
			{ "SetBodyModifiersCollisionType", &UPhysicsControlComponent::execSetBodyModifiersCollisionType },
			{ "SetBodyModifiersGravityMultiplier", &UPhysicsControlComponent::execSetBodyModifiersGravityMultiplier },
			{ "SetBodyModifiersInSetCollisionType", &UPhysicsControlComponent::execSetBodyModifiersInSetCollisionType },
			{ "SetBodyModifiersInSetGravityMultiplier", &UPhysicsControlComponent::execSetBodyModifiersInSetGravityMultiplier },
			{ "SetBodyModifiersInSetMovementType", &UPhysicsControlComponent::execSetBodyModifiersInSetMovementType },
			{ "SetBodyModifiersInSetUseSkeletalAnimation", &UPhysicsControlComponent::execSetBodyModifiersInSetUseSkeletalAnimation },
			{ "SetBodyModifiersMovementType", &UPhysicsControlComponent::execSetBodyModifiersMovementType },
			{ "SetBodyModifiersUseSkeletalAnimation", &UPhysicsControlComponent::execSetBodyModifiersUseSkeletalAnimation },
			{ "SetBodyModifierUseSkeletalAnimation", &UPhysicsControlComponent::execSetBodyModifierUseSkeletalAnimation },
			{ "SetControlAngularData", &UPhysicsControlComponent::execSetControlAngularData },
			{ "SetControlAutoDisable", &UPhysicsControlComponent::execSetControlAutoDisable },
			{ "SetControlData", &UPhysicsControlComponent::execSetControlData },
			{ "SetControlDatas", &UPhysicsControlComponent::execSetControlDatas },
			{ "SetControlDatasInSet", &UPhysicsControlComponent::execSetControlDatasInSet },
			{ "SetControlDisableCollision", &UPhysicsControlComponent::execSetControlDisableCollision },
			{ "SetControlEnabled", &UPhysicsControlComponent::execSetControlEnabled },
			{ "SetControlLinearData", &UPhysicsControlComponent::execSetControlLinearData },
			{ "SetControlMultiplier", &UPhysicsControlComponent::execSetControlMultiplier },
			{ "SetControlMultipliers", &UPhysicsControlComponent::execSetControlMultipliers },
			{ "SetControlMultipliersInSet", &UPhysicsControlComponent::execSetControlMultipliersInSet },
			{ "SetControlPoint", &UPhysicsControlComponent::execSetControlPoint },
			{ "SetControlsAutoDisable", &UPhysicsControlComponent::execSetControlsAutoDisable },
			{ "SetControlsDisableCollision", &UPhysicsControlComponent::execSetControlsDisableCollision },
			{ "SetControlsEnabled", &UPhysicsControlComponent::execSetControlsEnabled },
			{ "SetControlsInSetAutoDisable", &UPhysicsControlComponent::execSetControlsInSetAutoDisable },
			{ "SetControlsInSetDisableCollision", &UPhysicsControlComponent::execSetControlsInSetDisableCollision },
			{ "SetControlsInSetEnabled", &UPhysicsControlComponent::execSetControlsInSetEnabled },
			{ "SetControlsInSetUseSkeletalAnimation", &UPhysicsControlComponent::execSetControlsInSetUseSkeletalAnimation },
			{ "SetControlsUseSkeletalAnimation", &UPhysicsControlComponent::execSetControlsUseSkeletalAnimation },
			{ "SetControlTarget", &UPhysicsControlComponent::execSetControlTarget },
			{ "SetControlTargetOrientation", &UPhysicsControlComponent::execSetControlTargetOrientation },
			{ "SetControlTargetPoses", &UPhysicsControlComponent::execSetControlTargetPoses },
			{ "SetControlTargetPosition", &UPhysicsControlComponent::execSetControlTargetPosition },
			{ "SetControlTargetPositionAndOrientation", &UPhysicsControlComponent::execSetControlTargetPositionAndOrientation },
			{ "SetControlTargets", &UPhysicsControlComponent::execSetControlTargets },
			{ "SetControlTargetsInSet", &UPhysicsControlComponent::execSetControlTargetsInSet },
			{ "SetControlUseSkeletalAnimation", &UPhysicsControlComponent::execSetControlUseSkeletalAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics
	{
		struct PhysicsControlComponent_eventAddBodyModifiersToSet_Parms
		{
			FPhysicsControlNames NewSet;
			TArray<FName> BodyModifiers;
			FName Set;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BodyModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_NewSet = { "NewSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifiersToSet_Parms, NewSet), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers_Inner = { "BodyModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers = { "BodyModifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifiersToSet_Parms, BodyModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifiersToSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_NewSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_BodyModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Adds BodyModifiers to a Set. This will add a new set if necessary. For example, you might\n\x09 * make a set of Arm body modifiers by calling this twice, passing in the left and right\n\x09 * arm body modifiers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Adds BodyModifiers to a Set. This will add a new set if necessary. For example, you might\nmake a set of Arm body modifiers by calling this twice, passing in the left and right\narm body modifiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "AddBodyModifiersToSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::PhysicsControlComponent_eventAddBodyModifiersToSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics
	{
		struct PhysicsControlComponent_eventAddBodyModifierToSet_Parms
		{
			FPhysicsControlNames NewSet;
			FName BodyModifier;
			FName Set;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyModifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BodyModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_NewSet = { "NewSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifierToSet_Parms, NewSet), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_BodyModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_BodyModifier = { "BodyModifier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifierToSet_Parms, BodyModifier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_BodyModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_BodyModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddBodyModifierToSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_NewSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_BodyModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Adds a BodyModifier to a Set. This will add a new set if necessary. For example, you might\n\x09 * make a set of body modifiers called \"Feet\" by calling this twice, passing in the left and right\n\x09 * foot body modifiers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Adds a BodyModifier to a Set. This will add a new set if necessary. For example, you might\nmake a set of body modifiers called \"Feet\" by calling this twice, passing in the left and right\nfoot body modifiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "AddBodyModifierToSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::PhysicsControlComponent_eventAddBodyModifierToSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics
	{
		struct PhysicsControlComponent_eventAddControlsToSet_Parms
		{
			FPhysicsControlNames NewSet;
			TArray<FName> Controls;
			FName Set;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Controls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_NewSet = { "NewSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlsToSet_Parms, NewSet), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlsToSet_Parms, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlsToSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_NewSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Controls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Adds Controls to a Set. This will add a new set if necessary. For example, you might\n\x09 * make a set of ParentSpace Arm controls by calling this twice, passing in the left and right\n\x09 * arm ParentSpace controls.\n\x09 * \n\x09 * @return The new/updated set of controls, in case you want to store it\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Adds Controls to a Set. This will add a new set if necessary. For example, you might\nmake a set of ParentSpace Arm controls by calling this twice, passing in the left and right\narm ParentSpace controls.\n\n@return The new/updated set of controls, in case you want to store it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "AddControlsToSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::PhysicsControlComponent_eventAddControlsToSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics
	{
		struct PhysicsControlComponent_eventAddControlToSet_Parms
		{
			FPhysicsControlNames NewSet;
			FName Control;
			FName Set;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_NewSet = { "NewSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlToSet_Parms, NewSet), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Control_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlToSet_Parms, Control), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventAddControlToSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_NewSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Adds a Control to a Set. This will add a new set if necessary. For example, you might\n\x09 * make a set of Controls called \"ParentSpace_Feet\" by calling this twice, passing in the left and right\n\x09 * foot ParentSpace controls.\n\x09 * \n\x09 * @return The new/updated set of controls, in case you want to store it\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Adds a Control to a Set. This will add a new set if necessary. For example, you might\nmake a set of Controls called \"ParentSpace_Feet\" by calling this twice, passing in the left and right\nfoot ParentSpace controls.\n\n@return The new/updated set of controls, in case you want to store it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "AddControlToSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::PhysicsControlComponent_eventAddControlToSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics
	{
		struct PhysicsControlComponent_eventCreateBodyModifier_Parms
		{
			UMeshComponent* MeshComponent;
			FName BoneName;
			FName Set;
			EPhysicsMovementType MovementType;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
			float GravityMultiplier;
			bool bUseSkeletalAnimation;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_GravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateBodyModifier_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateBodyModifier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a new body modifier for mesh components\n\x09 * \n\x09 * @param MeshComponent The Mesh Component used as a target for the modifier\n\x09 * @param BoneName The bone name, if a skeletal mesh is used\n\x09 * @param Set Which set to include the body modifier in (optional). Note that it automatically \n\x09 *        gets added to the set \"All\"\n\x09 * @param MovementType Whether to enable/disable simulation on the body\n\x09 * @param CollisionType Collision type to set on the body\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n\x09 *                              skeletal animation, rather than world space. Only relevant if the\n\x09 *                              body is part of a skeletal mesh.\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a new body modifier for mesh components\n\n@param MeshComponent The Mesh Component used as a target for the modifier\n@param BoneName The bone name, if a skeletal mesh is used\n@param Set Which set to include the body modifier in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param MovementType Whether to enable/disable simulation on the body\n@param CollisionType Collision type to set on the body\n@param GravityMultiplier The amount of gravity to apply when simulating\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n                             skeletal animation, rather than world space. Only relevant if the\n                             body is part of a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateBodyModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::PhysicsControlComponent_eventCreateBodyModifier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics
	{
		struct PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms
		{
			FPhysicsControlNames AllBodyModifiers;
			TMap<FName,FPhysicsControlLimbBones> LimbBones;
			EPhysicsMovementType MovementType;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
			float GravityMultiplier;
			bool bUseSkeletalAnimation;
			TMap<FName,FPhysicsControlNames> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllBodyModifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbBones_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbBones_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbBones_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbBones;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_AllBodyModifiers = { "AllBodyModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, AllBodyModifiers), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_ValueProp = { "LimbBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlLimbBones, METADATA_PARAMS(nullptr, 0) }; // 2226329897
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_Key_KeyProp = { "LimbBones_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones = { "LimbBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, LimbBones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_MetaData)) }; // 2226329897
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_AllBodyModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_LimbBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of controls controlling a skeletal mesh, grouped together in limbs\n\x09 *\n\x09 * @param AllControls A single container for all the controls that have been created\n\x09 * @param LimbBones A map relating the limbs and the bones that they contain. Typically create this \n\x09 *                  using GetLimbBonesFromSkeletalMesh\n\x09 * @param MovementType Whether to enable/disable simulation on the body\n\x09 * @param CollisionType Collision type to set on the body\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n\x09 *                              skeletal animation, rather than world space. Only relevant if the\n\x09 *                              body is part of a skeletal mesh.\n\x09 * \n\x09 * @return A map containing the modifiers for each limb\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of controls controlling a skeletal mesh, grouped together in limbs\n\n@param AllControls A single container for all the controls that have been created\n@param LimbBones A map relating the limbs and the bones that they contain. Typically create this\n                 using GetLimbBonesFromSkeletalMesh\n@param MovementType Whether to enable/disable simulation on the body\n@param CollisionType Collision type to set on the body\n@param GravityMultiplier The amount of gravity to apply when simulating\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n                             skeletal animation, rather than world space. Only relevant if the\n                             body is part of a skeletal mesh.\n\n@return A map containing the modifiers for each limb" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateBodyModifiersFromLimbBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::PhysicsControlComponent_eventCreateBodyModifiersFromLimbBones_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics
	{
		struct PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			FName BoneName;
			bool bIncludeSelf;
			FName Set;
			EPhysicsMovementType MovementType;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
			float GravityMultiplier;
			bool bUseSkeletalAnimation;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSelf_MetaData[];
#endif
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_GravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates new body modifiers for skeletal mesh components\n\x09 * \n\x09 * @param SkeletalMeshComponent The skeletal mesh which will have body modifiers\n\x09 * @param BoneName The bone name below which modifiers should be created\n\x09 * @param bIncludeSelf Whether or not to include BoneName when creating modifiers\n\x09 * @param Set Which set to include the body modifier in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param MovementType Whether to enable/disable simulation on the body\n\x09 * @param CollisionType Collision type to set on the body\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n\x09 *                              skeletal animation, rather than world space. Only relevant if the\n\x09 *                              body is part of a skeletal mesh.\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates new body modifiers for skeletal mesh components\n\n@param SkeletalMeshComponent The skeletal mesh which will have body modifiers\n@param BoneName The bone name below which modifiers should be created\n@param bIncludeSelf Whether or not to include BoneName when creating modifiers\n@param Set Which set to include the body modifier in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param MovementType Whether to enable/disable simulation on the body\n@param CollisionType Collision type to set on the body\n@param GravityMultiplier The amount of gravity to apply when simulating\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n                             skeletal animation, rather than world space. Only relevant if the\n                             body is part of a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateBodyModifiersFromSkeletalMeshBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::PhysicsControlComponent_eventCreateBodyModifiersFromSkeletalMeshBelow_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics
	{
		struct PhysicsControlComponent_eventCreateControl_Parms
		{
			UMeshComponent* ParentMeshComponent;
			FName ParentBoneName;
			UMeshComponent* ChildMeshComponent;
			FName ChildBoneName;
			FPhysicsControlData ControlData;
			FPhysicsControlTarget ControlTarget;
			FPhysicsControlSettings ControlSettings;
			FName Set;
			bool bEnabled;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentMeshComponent = { "ParentMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ParentMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentMeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildMeshComponent = { "ChildMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ChildMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ChildBoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, Set), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControl_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControl_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ParentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ChildBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a new control for mesh components\n\x09 * \n\x09 * @param ControlData   Describes the initial strength etc of the new control\n\x09 * @param ControlTarget Describes the initial target for the new control\n\x09 * @param ControlSettings General settings for the control\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to activate it.\n\x09 * @return The name of the new control\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a new control for mesh components\n\n@param ControlData   Describes the initial strength etc of the new control\n@param ControlTarget Describes the initial target for the new control\n@param ControlSettings General settings for the control\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to activate it.\n@return The name of the new control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::PhysicsControlComponent_eventCreateControl_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms
		{
			FPhysicsControlNames AllWorldSpaceControls;
			TMap<FName,FPhysicsControlNames> LimbWorldSpaceControls;
			FPhysicsControlNames AllParentSpaceControls;
			TMap<FName,FPhysicsControlNames> LimbParentSpaceControls;
			FPhysicsControlNames AllBodyModifiers;
			TMap<FName,FPhysicsControlNames> LimbBodyModifiers;
			USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FPhysicsControlLimbSetupData> LimbSetupData;
			FPhysicsControlData WorldSpaceControlData;
			FPhysicsControlSettings WorldSpaceControlSettings;
			bool bEnableWorldSpaceControls;
			FPhysicsControlData ParentSpaceControlData;
			FPhysicsControlSettings ParentSpaceControlSettings;
			bool bEnableParentSpaceControls;
			EPhysicsMovementType PhysicsMovementType;
			float GravityMultiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllWorldSpaceControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbWorldSpaceControls_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbWorldSpaceControls_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbWorldSpaceControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllParentSpaceControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbParentSpaceControls_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbParentSpaceControls_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbParentSpaceControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllBodyModifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbBodyModifiers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbBodyModifiers_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbBodyModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllWorldSpaceControls = { "AllWorldSpaceControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, AllWorldSpaceControls), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls_ValueProp = { "LimbWorldSpaceControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls_Key_KeyProp = { "LimbWorldSpaceControls_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls = { "LimbWorldSpaceControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, LimbWorldSpaceControls), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllParentSpaceControls = { "AllParentSpaceControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, AllParentSpaceControls), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls_ValueProp = { "LimbParentSpaceControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls_Key_KeyProp = { "LimbParentSpaceControls_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls = { "LimbParentSpaceControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, LimbParentSpaceControls), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllBodyModifiers = { "AllBodyModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, AllBodyModifiers), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers_ValueProp = { "LimbBodyModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers_Key_KeyProp = { "LimbBodyModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers = { "LimbBodyModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, LimbBodyModifiers), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData_Inner = { "LimbSetupData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData, METADATA_PARAMS(nullptr, 0) }; // 3622788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData = { "LimbSetupData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, LimbSetupData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData_MetaData)) }; // 3622788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlData = { "WorldSpaceControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, WorldSpaceControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlSettings = { "WorldSpaceControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, WorldSpaceControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms*)Obj)->bEnableWorldSpaceControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls = { "bEnableWorldSpaceControls", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlData = { "ParentSpaceControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, ParentSpaceControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlSettings = { "ParentSpaceControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, ParentSpaceControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms*)Obj)->bEnableParentSpaceControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls = { "bEnableParentSpaceControls", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType = { "PhysicsMovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, PhysicsMovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllWorldSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbWorldSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllParentSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbParentSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_AllBodyModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbBodyModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_LimbSetupData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_WorldSpaceControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableWorldSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_ParentSpaceControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_bEnableParentSpaceControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_PhysicsMovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::NewProp_GravityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collections of controls and body modifiers for a character, based on the description passed in. \n\x09 * This makes:\n\x09 * - World-space controls\n\x09 * - Parent-space controls\n\x09 * - Body modifiers\n\x09 * for all the body parts. In addition, they get added to sets, so they can be referenced later. Each control \n\x09 * is added to three sets:\n\x09 * - \"All\"\n\x09 * - \"ControlType - i.e. \"WorldSpace\" or \"ParentSpace\", each of which will end up containing all controls of that type\n\x09 * - \"ControlType_LimbName\" - e.g. \"WorldSpace_ArmLeft\" or \"ParentSpace_Head\"\n\x09 * Each body modifier is added to \"All\" and a set named after the limb - e.g. \"Spine\" or \"LegRight\".\n\x09 */" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "CPP_Default_PhysicsMovementType", "Static" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collections of controls and body modifiers for a character, based on the description passed in.\nThis makes:\n- World-space controls\n- Parent-space controls\n- Body modifiers\nfor all the body parts. In addition, they get added to sets, so they can be referenced later. Each control\nis added to three sets:\n- \"All\"\n- \"ControlType - i.e. \"WorldSpace\" or \"ParentSpace\", each of which will end up containing all controls of that type\n- \"ControlType_LimbName\" - e.g. \"WorldSpace_ArmLeft\" or \"ParentSpace_Head\"\nEach body modifier is added to \"All\" and a set named after the limb - e.g. \"Spine\" or \"LegRight\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsAndBodyModifiersFromLimbBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::PhysicsControlComponent_eventCreateControlsAndBodyModifiersFromLimbBones_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms
		{
			FPhysicsControlNames AllControls;
			TMap<FName,FPhysicsControlLimbBones> LimbBones;
			EPhysicsControlType ControlType;
			FPhysicsControlData ControlData;
			FPhysicsControlSettings ControlSettings;
			bool bEnabled;
			TMap<FName,FPhysicsControlNames> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbBones_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbBones_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbBones_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbBones;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_AllControls = { "AllControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, AllControls), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_ValueProp = { "LimbBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlLimbBones, METADATA_PARAMS(nullptr, 0) }; // 2226329897
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_Key_KeyProp = { "LimbBones_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones = { "LimbBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, LimbBones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_MetaData)) }; // 2226329897
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, ControlType), Z_Construct_UEnum_PhysicsControl_EPhysicsControlType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType_MetaData)) }; // 3620377434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_AllControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_LimbBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of controls controlling a skeletal mesh, grouped together in limbs\n\x09 *\n\x09 * @param AllControls A single container for all the controls that have been created\n\x09 * @param LimbBones A map relating the limbs and the bones that they contain. Typically create this \n\x09 *                  using GetLimbBonesFromSkeletalMesh\n\x09 * @param ControlType What type of control to create. This determines what the parent will be for each control\n\x09 * @param ControlData Describes the initial strength etc of the new control\n\x09 * @param ControlSettings General settings for the control\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *                 SetControlEnabled(true) in order to enable it.\n\x09 * @return A map containing the controls for each limb\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of controls controlling a skeletal mesh, grouped together in limbs\n\n@param AllControls A single container for all the controls that have been created\n@param LimbBones A map relating the limbs and the bones that they contain. Typically create this\n                 using GetLimbBonesFromSkeletalMesh\n@param ControlType What type of control to create. This determines what the parent will be for each control\n@param ControlData Describes the initial strength etc of the new control\n@param ControlSettings General settings for the control\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n                SetControlEnabled(true) in order to enable it.\n@return A map containing the controls for each limb" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromLimbBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::PhysicsControlComponent_eventCreateControlsFromLimbBones_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms
		{
			FPhysicsControlNames AllControls;
			TMap<FName,FPhysicsControlLimbBones> LimbBones;
			FName ConstraintProfile;
			bool bEnabled;
			TMap<FName,FPhysicsControlNames> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbBones_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LimbBones_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbBones_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LimbBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_AllControls = { "AllControls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms, AllControls), Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_ValueProp = { "LimbBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlLimbBones, METADATA_PARAMS(nullptr, 0) }; // 2226329897
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_Key_KeyProp = { "LimbBones_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones = { "LimbBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms, LimbBones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_MetaData)) }; // 2226329897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ConstraintProfile = { "ConstraintProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms, ConstraintProfile), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlNames, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2330063555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_AllControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_LimbBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ConstraintProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of ParentSpace controls controlling a skeletal mesh, grouped together in limbs, initializing\n\x09 * them with a constraint profile\n\x09 *\n\x09 * @param AllControls A single container for all the controls that have been created\n\x09 * @param LimbBones A map relating the limbs and the bones that they contain. Typically create this\n\x09 *                  using GetLimbBonesFromSkeletalMesh\n\x09 * @param ConstraintProfile The constraint profile to use for initializing the control strength and \n\x09 *                          damping (etc) parameters. Note that the controls will all be created in \"\n\x09 *                          parent space\" - i.e. with each part controlled relative to its parent. The \n\x09 *                          strength and damping will be taken from the values that the relevant joint \n\x09 *                          in the physics asset would have given the constraint profile (or the default \n\x09 *                          profile if it can't be found) - though they will not match exactly if the linear\n\x09 *                          drive and different x/y/z values, or if the angular drive was using twist/swing\n\x09 *                          instead of slerp. Note also that the joint constraints do not use the animation \n\x09 *                          velocity as a target, so when creating controls in this way the control settings\n\x09 *                          will set the skeletal animation velocity multiplier to zero.\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *                 SetControlEnabled(true) in order to enable it.\n\x09 * @return A map containing the controls for each limb\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of ParentSpace controls controlling a skeletal mesh, grouped together in limbs, initializing\nthem with a constraint profile\n\n@param AllControls A single container for all the controls that have been created\n@param LimbBones A map relating the limbs and the bones that they contain. Typically create this\n                 using GetLimbBonesFromSkeletalMesh\n@param ConstraintProfile The constraint profile to use for initializing the control strength and\n                         damping (etc) parameters. Note that the controls will all be created in \"\n                         parent space\" - i.e. with each part controlled relative to its parent. The\n                         strength and damping will be taken from the values that the relevant joint\n                         in the physics asset would have given the constraint profile (or the default\n                         profile if it can't be found) - though they will not match exactly if the linear\n                         drive and different x/y/z values, or if the angular drive was using twist/swing\n                         instead of slerp. Note also that the joint constraints do not use the animation\n                         velocity as a target, so when creating controls in this way the control settings\n                         will set the skeletal animation velocity multiplier to zero.\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n                SetControlEnabled(true) in order to enable it.\n@return A map containing the controls for each limb" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromLimbBonesAndConstraintProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::PhysicsControlComponent_eventCreateControlsFromLimbBonesAndConstraintProfile_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FName> BoneNames;
			EPhysicsControlType ControlType;
			FPhysicsControlData ControlData;
			FPhysicsControlSettings ControlSettings;
			FName Set;
			bool bEnabled;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, ControlType), Z_Construct_UEnum_PhysicsControl_EPhysicsControlType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType_MetaData)) }; // 3620377434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of controls controlling a skeletal mesh\n\x09 *\n\x09 * @param SkeletalMeshComponent The skeletal mesh which will have controls\n\x09 * @param BoneNames The names of bones for which controls should be created. Each bone will be the child in a control\n\x09 * @param ControlType What type of control to create. This determines what the parent will be for each control\n\x09 * @param ControlData   Describes the initial strength etc of the new control\n\x09 * @param ControlSettings General settings for the control\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to enable it.\n\x09 * @return An array of the controls that have been created\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of controls controlling a skeletal mesh\n\n@param SkeletalMeshComponent The skeletal mesh which will have controls\n@param BoneNames The names of bones for which controls should be created. Each bone will be the child in a control\n@param ControlType What type of control to create. This determines what the parent will be for each control\n@param ControlData   Describes the initial strength etc of the new control\n@param ControlSettings General settings for the control\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to enable it.\n@return An array of the controls that have been created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::PhysicsControlComponent_eventCreateControlsFromSkeletalMesh_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FName> BoneNames;
			FName ConstraintProfile;
			FName Set;
			bool bEnabled;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ConstraintProfile = { "ConstraintProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms, ConstraintProfile), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ConstraintProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ConstraintProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of ParentSpace controls controlling a skeletal mesh, initializing them \n\x09 * with a constraint profile\n\x09 *\n\x09 * @param SkeletalMeshComponent The skeletal mesh which will have controls\n\x09 * @param BoneNames The names of bones for which controls should be created. Each bone will be the child in a control\n\x09 * @param ConstraintProfile The constraint profile to use for initializing the control strength and\n\x09 *                          damping (etc) parameters. Note that the controls will all be created in \"\n\x09 *                          parent space\" - i.e. with each part controlled relative to its parent. The\n\x09 *                          strength and damping will be taken from the values that the relevant joint\n\x09 *                          in the physics asset would have given the constraint profile (or the default\n\x09 *                          profile if it can't be found) - though they will not match exactly if the linear\n\x09 *                          drive and different x/y/z values, or if the angular drive was using twist/swing\n\x09 *                          instead of slerp. Note also that the joint constraints do not use the animation\n\x09 *                          velocity as a target, so when creating controls in this way the control settings\n\x09 *                          will set the skeletal animation velocity multiplier to zero.\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to enable it.\n\x09 * @return An array of the controls that have been created\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of ParentSpace controls controlling a skeletal mesh, initializing them\nwith a constraint profile\n\n@param SkeletalMeshComponent The skeletal mesh which will have controls\n@param BoneNames The names of bones for which controls should be created. Each bone will be the child in a control\n@param ConstraintProfile The constraint profile to use for initializing the control strength and\n                         damping (etc) parameters. Note that the controls will all be created in \"\n                         parent space\" - i.e. with each part controlled relative to its parent. The\n                         strength and damping will be taken from the values that the relevant joint\n                         in the physics asset would have given the constraint profile (or the default\n                         profile if it can't be found) - though they will not match exactly if the linear\n                         drive and different x/y/z values, or if the angular drive was using twist/swing\n                         instead of slerp. Note also that the joint constraints do not use the animation\n                         velocity as a target, so when creating controls in this way the control settings\n                         will set the skeletal animation velocity multiplier to zero.\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to enable it.\n@return An array of the controls that have been created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromSkeletalMeshAndConstraintProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfile_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			FName BoneName;
			bool bIncludeSelf;
			FName ConstraintProfile;
			FName Set;
			bool bEnabled;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSelf_MetaData[];
#endif
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ConstraintProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ConstraintProfile = { "ConstraintProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms, ConstraintProfile), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ConstraintProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ConstraintProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bIncludeSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ConstraintProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of ParentSpace controls controlling a skeletal mesh, initializing\n\x09 * them with a constraint profile\n\x09 * \n\x09 * @param SkeletalMeshComponent The skeletal mesh which will have controls\n\x09 * @param BoneName The name of the bone below which controls should be created. Each bone will be the child in a control\n\x09 * @param bIncludeSelf Whether or not to include BoneName when creating controls\n\x09 * @param ConstraintProfile The constraint profile to use for initializing the control strength and\n\x09 *                          damping (etc) parameters. Note that the controls will all be created in \"\n\x09 *                          parent space\" - i.e. with each part controlled relative to its parent. The\n\x09 *                          strength and damping will be taken from the values that the relevant joint\n\x09 *                          in the physics asset would have given the constraint profile (or the default\n\x09 *                          profile if it can't be found) - though they will not match exactly if the linear\n\x09 *                          drive and different x/y/z values, or if the angular drive was using twist/swing\n\x09 *                          instead of slerp. Note also that the joint constraints do not use the animation\n\x09 *                          velocity as a target, so when creating controls in this way the control settings\n\x09 *                          will set the skeletal animation velocity multiplier to zero.\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to enable it.\n\x09 * @return An array of the controls that have been created\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of ParentSpace controls controlling a skeletal mesh, initializing\nthem with a constraint profile\n\n@param SkeletalMeshComponent The skeletal mesh which will have controls\n@param BoneName The name of the bone below which controls should be created. Each bone will be the child in a control\n@param bIncludeSelf Whether or not to include BoneName when creating controls\n@param ConstraintProfile The constraint profile to use for initializing the control strength and\n                         damping (etc) parameters. Note that the controls will all be created in \"\n                         parent space\" - i.e. with each part controlled relative to its parent. The\n                         strength and damping will be taken from the values that the relevant joint\n                         in the physics asset would have given the constraint profile (or the default\n                         profile if it can't be found) - though they will not match exactly if the linear\n                         drive and different x/y/z values, or if the angular drive was using twist/swing\n                         instead of slerp. Note also that the joint constraints do not use the animation\n                         velocity as a target, so when creating controls in this way the control settings\n                         will set the skeletal animation velocity multiplier to zero.\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to enable it.\n@return An array of the controls that have been created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromSkeletalMeshAndConstraintProfileBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::PhysicsControlComponent_eventCreateControlsFromSkeletalMeshAndConstraintProfileBelow_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics
	{
		struct PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			FName BoneName;
			bool bIncludeSelf;
			EPhysicsControlType ControlType;
			FPhysicsControlData ControlData;
			FPhysicsControlSettings ControlSettings;
			FName Set;
			bool bEnabled;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSelf_MetaData[];
#endif
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, ControlType), Z_Construct_UEnum_PhysicsControl_EPhysicsControlType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType_MetaData)) }; // 3620377434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bIncludeSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a collection of controls controlling a skeletal mesh\n\x09 * \n\x09 * @param SkeletalMeshComponent The skeletal mesh which will have controls\n\x09 * @param BoneName The name of the bone below which controls should be created. Each bone will be the child in a control\n\x09 * @param bIncludeSelf Whether or not to include BoneName when creating controls\n\x09 * @param ControlType What type of control to create. This determines what the parent will be for each control\n\x09 * @param ControlData   Describes the initial strength etc of the new control\n\x09 * @param ControlSettings General settings for the control\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to enable it.\n\x09 * @return An array of the controls that have been created\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a collection of controls controlling a skeletal mesh\n\n@param SkeletalMeshComponent The skeletal mesh which will have controls\n@param BoneName The name of the bone below which controls should be created. Each bone will be the child in a control\n@param bIncludeSelf Whether or not to include BoneName when creating controls\n@param ControlType What type of control to create. This determines what the parent will be for each control\n@param ControlData   Describes the initial strength etc of the new control\n@param ControlSettings General settings for the control\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to enable it.\n@return An array of the controls that have been created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateControlsFromSkeletalMeshBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::PhysicsControlComponent_eventCreateControlsFromSkeletalMeshBelow_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics
	{
		struct PhysicsControlComponent_eventCreateNamedBodyModifier_Parms
		{
			FName Name;
			UMeshComponent* MeshComponent;
			FName BoneName;
			FName Set;
			EPhysicsMovementType MovementType;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
			float GravityMultiplier;
			bool bUseSkeletalAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_GravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateNamedBodyModifier_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateNamedBodyModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateNamedBodyModifier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a new body modifier for mesh components\n\x09 * \n\x09 * @param The name of the body modifier that will be created. Creation will fail if this name is already in use.\n\x09 * @param MeshComponent The Mesh Component used as a target for the modifier\n\x09 * @param BoneName The bone name, if a skeletal mesh is used\n\x09 * @param Set Which set to include the body modifier in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param MovementType Whether to enable/disable simulation on the body\n\x09 * @param CollisionType Collision type to set on the body\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n\x09 *                              skeletal animation, rather than world space. Only relevant if the\n\x09 *                              body is part of a skeletal mesh.\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a new body modifier for mesh components\n\n@param The name of the body modifier that will be created. Creation will fail if this name is already in use.\n@param MeshComponent The Mesh Component used as a target for the modifier\n@param BoneName The bone name, if a skeletal mesh is used\n@param Set Which set to include the body modifier in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param MovementType Whether to enable/disable simulation on the body\n@param CollisionType Collision type to set on the body\n@param GravityMultiplier The amount of gravity to apply when simulating\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n                             skeletal animation, rather than world space. Only relevant if the\n                             body is part of a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateNamedBodyModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::PhysicsControlComponent_eventCreateNamedBodyModifier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics
	{
		struct PhysicsControlComponent_eventCreateNamedControl_Parms
		{
			FName Name;
			UMeshComponent* ParentMeshComponent;
			FName ParentBoneName;
			UMeshComponent* ChildMeshComponent;
			FName ChildBoneName;
			FPhysicsControlData ControlData;
			FPhysicsControlTarget ControlTarget;
			FPhysicsControlSettings ControlSettings;
			FName Set;
			bool bEnabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentMeshComponent = { "ParentMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ParentMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ParentBoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildMeshComponent = { "ChildMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ChildMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ChildBoneName), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, ControlSettings), Z_Construct_UScriptStruct_FPhysicsControlSettings, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlSettings_MetaData)) }; // 4003162626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventCreateNamedControl_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateNamedControl_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateNamedControl_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventCreateNamedControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventCreateNamedControl_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ParentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ChildBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Creates a new control for mesh components\n\x09 * \n\x09 * @param The name of the control that will be created. Creation will fail if this name is already in use.\n\x09 * @param ControlData   Describes the initial strength etc of the new control\n\x09 * @param ControlTarget Describes the initial target for the new control\n\x09 * @param ControlSettings General settings for the control\n\x09 * @param Set Which set to include the control in (optional). Note that it automatically\n\x09 *        gets added to the set \"All\"\n\x09 * @param bEnabled If true then the control will be enabled immediately. If false you will need to call\n\x09 *        SetControlEnabled(true) in order to enable it.\n\x09 * @return True if a new control was created, false if a control of the specified name already exists\n\x09 */" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Creates a new control for mesh components\n\n@param The name of the control that will be created. Creation will fail if this name is already in use.\n@param ControlData   Describes the initial strength etc of the new control\n@param ControlTarget Describes the initial target for the new control\n@param ControlSettings General settings for the control\n@param Set Which set to include the control in (optional). Note that it automatically\n       gets added to the set \"All\"\n@param bEnabled If true then the control will be enabled immediately. If false you will need to call\n       SetControlEnabled(true) in order to enable it.\n@return True if a new control was created, false if a control of the specified name already exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "CreateNamedControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::PhysicsControlComponent_eventCreateNamedControl_Parms), Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics
	{
		struct PhysicsControlComponent_eventDestroyBodyModifier_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyBodyModifier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventDestroyBodyModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventDestroyBodyModifier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys a BodyModifier\n\x09 *\n\x09 * @param Name        The name of the body modifier to destroy. \n\x09 * @return            Returns true if the body modifier was found and destroyed, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys a BodyModifier\n\n@param Name        The name of the body modifier to destroy.\n@return            Returns true if the body modifier was found and destroyed, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyBodyModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::PhysicsControlComponent_eventDestroyBodyModifier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics
	{
		struct PhysicsControlComponent_eventDestroyBodyModifiers_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyBodyModifiers_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys BodyModifiers\n\x09 *\n\x09 * @param Names The names of the body modifiers to destroy. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys BodyModifiers\n\n@param Names The names of the body modifiers to destroy. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyBodyModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::PhysicsControlComponent_eventDestroyBodyModifiers_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics
	{
		struct PhysicsControlComponent_eventDestroyBodyModifiersInSet_Parms
		{
			FName Set;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyBodyModifiersInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys BodyModifiers\n\x09 *\n\x09 * @param Set The set of body modifiers to destroy. Standard sets will include \"All\" and things like\n\x09 *        \"ArmLeft\", depending on how body modifiers have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys BodyModifiers\n\n@param Set The set of body modifiers to destroy. Standard sets will include \"All\" and things like\n       \"ArmLeft\", depending on how body modifiers have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyBodyModifiersInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::PhysicsControlComponent_eventDestroyBodyModifiersInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics
	{
		struct PhysicsControlComponent_eventDestroyControl_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyControl_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventDestroyControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventDestroyControl_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys a control\n\x09 *\n\x09 * @param Name The name of the control to destroy. \n\x09 * @return     Returns true if the control was found and destroyed, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys a control\n\n@param Name The name of the control to destroy.\n@return     Returns true if the control was found and destroyed, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::PhysicsControlComponent_eventDestroyControl_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics
	{
		struct PhysicsControlComponent_eventDestroyControls_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyControls_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys all controls\n\x09 *\n\x09 * @param Names The names of the controls to destroy. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys all controls\n\n@param Names The names of the controls to destroy. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyControls", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::PhysicsControlComponent_eventDestroyControls_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics
	{
		struct PhysicsControlComponent_eventDestroyControlsInSet_Parms
		{
			FName Set;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventDestroyControlsInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Destroys all controls in a set\n\x09 *\n\x09 * @param Set The set of controls to use to destroy. Standard sets will include \"All\", \"WorldSpace\",\n\x09 * \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Destroys all controls in a set\n\n@param Set The set of controls to use to destroy. Standard sets will include \"All\", \"WorldSpace\",\n\"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "DestroyControlsInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::PhysicsControlComponent_eventDestroyControlsInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics
	{
		struct PhysicsControlComponent_eventGetAllBodyModifierNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetAllBodyModifierNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns a reference to all the body modifier names that have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns a reference to all the body modifier names that have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetAllBodyModifierNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::PhysicsControlComponent_eventGetAllBodyModifierNames_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics
	{
		struct PhysicsControlComponent_eventGetAllControlNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetAllControlNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns a reference to all the control names that have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns a reference to all the control names that have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetAllControlNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::PhysicsControlComponent_eventGetAllControlNames_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics
	{
		struct PhysicsControlComponent_eventGetBodyModifierNamesInSet_Parms
		{
			FName Set;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetBodyModifierNamesInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetBodyModifierNamesInSet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns a reference to all the body modifier names that have been created and are in the specified\n\x09 * set, which could be a limb, or a subsequently created set. Standard sets will include \"All\" and things like\n\x09 * \"ArmLeft\", depending on how body modifiers have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns a reference to all the body modifier names that have been created and are in the specified\nset, which could be a limb, or a subsequently created set. Standard sets will include \"All\" and things like\n\"ArmLeft\", depending on how body modifiers have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetBodyModifierNamesInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::PhysicsControlComponent_eventGetBodyModifierNamesInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics
	{
		struct PhysicsControlComponent_eventGetControlAutoDisable_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlAutoDisable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventGetControlAutoDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventGetControlAutoDisable_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name        The name of the control to access. \n\x09 * @return            Returns true if the control is marked to automatically disable after each tick\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name        The name of the control to access.\n@return            Returns true if the control is marked to automatically disable after each tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlAutoDisable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::PhysicsControlComponent_eventGetControlAutoDisable_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics
	{
		struct PhysicsControlComponent_eventGetControlData_Parms
		{
			FName Name;
			FPhysicsControlData ControlData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlData_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlData_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(nullptr, 0) }; // 255878212
	void Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventGetControlData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventGetControlData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name     The name of the control to access. \n\x09 * @param Control  The control data that will be filled in if found\n\x09 * @return         Returns true if the control was found, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name     The name of the control to access.\n@param Control  The control data that will be filled in if found\n@return         Returns true if the control was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::PhysicsControlComponent_eventGetControlData_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics
	{
		struct PhysicsControlComponent_eventGetControlEnabled_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlEnabled_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventGetControlEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventGetControlEnabled_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name        The name of the control to access. \n\x09 * @return            Returns true if the control is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name        The name of the control to access.\n@return            Returns true if the control is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::PhysicsControlComponent_eventGetControlEnabled_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics
	{
		struct PhysicsControlComponent_eventGetControlMultiplier_Parms
		{
			FName Name;
			FPhysicsControlMultiplier ControlMultiplier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlMultiplier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlMultiplier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlMultiplier_Parms, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(nullptr, 0) }; // 2703942446
	void Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventGetControlMultiplier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventGetControlMultiplier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name     The name of the control to access. \n\x09 * @param Control  The control multipliers that will be filled in if found\n\x09 * @return         Returns true if the control was found, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name     The name of the control to access.\n@param Control  The control multipliers that will be filled in if found\n@return         Returns true if the control was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::PhysicsControlComponent_eventGetControlMultiplier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics
	{
		struct PhysicsControlComponent_eventGetControlNamesInSet_Parms
		{
			FName Set;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlNamesInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlNamesInSet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns a reference to all the control names that have been created and are in the specified \n\x09 * set, which could be a limb, or a subsequently created set. Standard sets will include \"All\", \"WorldSpace\",\n\x09 * \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns a reference to all the control names that have been created and are in the specified\nset, which could be a limb, or a subsequently created set. Standard sets will include \"All\", \"WorldSpace\",\n\"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlNamesInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::PhysicsControlComponent_eventGetControlNamesInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics
	{
		struct PhysicsControlComponent_eventGetControlTarget_Parms
		{
			FName Name;
			FPhysicsControlTarget ControlTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlTarget_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetControlTarget_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(nullptr, 0) }; // 2672511800
	void Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventGetControlTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventGetControlTarget_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name     The name of the control to access. \n\x09 * @param Control  The control target, if found\n\x09 * @return         Returns true if the control was found, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name     The name of the control to access.\n@param Control  The control target, if found\n@return         Returns true if the control was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetControlTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::PhysicsControlComponent_eventGetControlTarget_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics
	{
		struct PhysicsControlComponent_eventGetLimbBonesFromSkeletalMesh_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FPhysicsControlLimbSetupData> LimbSetupData;
			TMap<FName,FPhysicsControlLimbBones> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbSetupData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbSetupData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimbSetupData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetLimbBonesFromSkeletalMesh_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData_Inner = { "LimbSetupData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData, METADATA_PARAMS(nullptr, 0) }; // 3622788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData = { "LimbSetupData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetLimbBonesFromSkeletalMesh_Parms, LimbSetupData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData_MetaData)) }; // 3622788549
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsControlLimbBones, METADATA_PARAMS(nullptr, 0) }; // 2226329897
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetLimbBonesFromSkeletalMesh_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2226329897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_LimbSetupData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Calculates which bones belong to which limb in a skeletal mesh\n\x09 * \n\x09 * @param SkeletalMeshComponent The skeletal mesh which will be analyzed\n\x09 * @param LimbSetupData This needs to be filled in with the list of limbs to \"discover\". Note that the \n\x09 *                      limbs should be listed starting at the \"leaf\" (i.e. outer) parts of the skeleton \n\x09 *                      first, typically finishing with the spine. In addition, the spine limb is typically \n\x09 *                      specified using the first spine bone, but flagging it to include its parent \n\x09 *                      (normally the pelvis). \n\x09 * @return A map of limb names to bones\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Calculates which bones belong to which limb in a skeletal mesh\n\n@param SkeletalMeshComponent The skeletal mesh which will be analyzed\n@param LimbSetupData This needs to be filled in with the list of limbs to \"discover\". Note that the\n                     limbs should be listed starting at the \"leaf\" (i.e. outer) parts of the skeleton\n                     first, typically finishing with the spine. In addition, the spine limb is typically\n                     specified using the first spine bone, but flagging it to include its parent\n                     (normally the pelvis).\n@return A map of limb names to bones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetLimbBonesFromSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::PhysicsControlComponent_eventGetLimbBonesFromSkeletalMesh_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics
	{
		struct PhysicsControlComponent_eventGetSetsContainingBodyModifier_Parms
		{
			FName Control;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_Control_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetSetsContainingBodyModifier_Parms, Control), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_Control_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetSetsContainingBodyModifier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns the names of all sets containing the body modifier (may be empty - e.g. if it doesn't exist)\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns the names of all sets containing the body modifier (may be empty - e.g. if it doesn't exist)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetSetsContainingBodyModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::PhysicsControlComponent_eventGetSetsContainingBodyModifier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics
	{
		struct PhysicsControlComponent_eventGetSetsContainingControl_Parms
		{
			FName Control;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_Control_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetSetsContainingControl_Parms, Control), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_Control_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventGetSetsContainingControl_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Returns the names of all sets containing the control (may be empty - e.g. if it doesn't exist)\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Returns the names of all sets containing the control (may be empty - e.g. if it doesn't exist)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "GetSetsContainingControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::PhysicsControlComponent_eventGetSetsContainingControl_Parms), Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics
	{
		struct PhysicsControlComponent_eventResetControlPoint_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventResetControlPoint_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventResetControlPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventResetControlPoint_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Resets the control point to the center of mass of the mesh\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Resets the control point to the center of mass of the mesh\n\n@param Name The name of the control to modify." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "ResetControlPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::PhysicsControlComponent_eventResetControlPoint_Parms), Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms
		{
			FName Name;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the collision type for a body modifier\n\x09 *\n\x09 * @param Name The name of the body modifier to access.\n\x09 * @param CollisionType Collision type to set on the body\n\x09 * @return true if the body modifier was found, false if not\n\x09 */" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the collision type for a body modifier\n\n@param Name The name of the body modifier to access.\n@param CollisionType Collision type to set on the body\n@return true if the body modifier was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifierCollisionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::PhysicsControlComponent_eventSetBodyModifierCollisionType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms
		{
			FName Name;
			float GravityMultiplier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_GravityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the gravity multiplier for a body modifier\n\x09 *\n\x09 * @param Name The name of the body modifier to access. \n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 * @return true if the body modifier was found, false if not\n\x09 */" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the gravity multiplier for a body modifier\n\n@param Name The name of the body modifier to access.\n@param GravityMultiplier The amount of gravity to apply when simulating\n@return true if the body modifier was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifierGravityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::PhysicsControlComponent_eventSetBodyModifierGravityMultiplier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms
		{
			FName Name;
			FVector KinematicTargetPosition;
			FRotator KinematicTargetOrienation;
			bool bMakeKinematic;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicTargetPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicTargetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicTargetOrienation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicTargetOrienation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMakeKinematic_MetaData[];
#endif
		static void NewProp_bMakeKinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeKinematic;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetPosition = { "KinematicTargetPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms, KinematicTargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetOrienation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetOrienation = { "KinematicTargetOrienation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms, KinematicTargetOrienation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetOrienation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetOrienation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms*)Obj)->bMakeKinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic = { "bMakeKinematic", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_KinematicTargetOrienation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_bMakeKinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the kinematic target transform for a body modifier. \n\x09 * \n\x09 * @param Name The name of the body modifier to access. \n\x09 * @param KinematicTargetPosition The position to use as the kinematic target of the associated body,\n\x09 *                                if it is kinematic\n\x09 * @param KinematicTargetOrientation The orientation to use as the kinematic target of the associated body,\n\x09 *                                   if it is kinematic\n\x09 * @param bMakeKinematic If set then the body will be made kinematic. If not set, then it won't be changed.\n\x09 * @return true if the body modifier was found, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the kinematic target transform for a body modifier.\n\n@param Name The name of the body modifier to access.\n@param KinematicTargetPosition The position to use as the kinematic target of the associated body,\n                               if it is kinematic\n@param KinematicTargetOrientation The orientation to use as the kinematic target of the associated body,\n                                  if it is kinematic\n@param bMakeKinematic If set then the body will be made kinematic. If not set, then it won't be changed.\n@return true if the body modifier was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifierKinematicTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::PhysicsControlComponent_eventSetBodyModifierKinematicTarget_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifierMovementType_Parms
		{
			FName Name;
			EPhysicsMovementType MovementType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierMovementType_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierMovementType_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierMovementType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierMovementType_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_MovementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the movement type for a body modifier\n\x09 *\n\x09 * @param Name The name of the body modifier to access. \n\x09 * @param MovementType Whether to enable/disable simulation on the body\n\x09 * @return true if the body modifier was found, false if not\n\x09 */" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the movement type for a body modifier\n\n@param Name The name of the body modifier to access.\n@param MovementType Whether to enable/disable simulation on the body\n@return true if the body modifier was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifierMovementType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::PhysicsControlComponent_eventSetBodyModifierMovementType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersCollisionType_Parms
		{
			TArray<FName> Names;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersCollisionType_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersCollisionType_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::NewProp_CollisionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the collision type for body modifiers\n\x09 *\n\x09 * @param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n\x09 *        then it can be split.\n\x09 * @param CollisionType Collision type to set on the bodies\n\x09 */" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the collision type for body modifiers\n\n@param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n       then it can be split.\n@param CollisionType Collision type to set on the bodies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersCollisionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::PhysicsControlComponent_eventSetBodyModifiersCollisionType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersGravityMultiplier_Parms
		{
			TArray<FName> Names;
			float GravityMultiplier;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersGravityMultiplier_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersGravityMultiplier_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::NewProp_GravityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the gravity multiplier for body modifiers\n\x09 *\n\x09 * @param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 */" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the gravity multiplier for body modifiers\n\n@param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param GravityMultiplier The amount of gravity to apply when simulating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersGravityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::PhysicsControlComponent_eventSetBodyModifiersGravityMultiplier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersInSetCollisionType_Parms
		{
			FName Set;
			TEnumAsByte<ECollisionEnabled::Type> CollisionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetCollisionType_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_CollisionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetCollisionType_Parms, CollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_CollisionType_MetaData)) }; // 1787744072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::NewProp_CollisionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the collision type for body modifiers\n\x09 *\n\x09 * @param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n\x09 *        \"ArmLeft\", depending on how body modifiers have been created.\n\x09 * @param CollisionType Collision type to set on the bodies\n\x09 */" },
		{ "CPP_Default_CollisionType", "QueryAndPhysics" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the collision type for body modifiers\n\n@param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n       \"ArmLeft\", depending on how body modifiers have been created.\n@param CollisionType Collision type to set on the bodies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersInSetCollisionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::PhysicsControlComponent_eventSetBodyModifiersInSetCollisionType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersInSetGravityMultiplier_Parms
		{
			FName Set;
			float GravityMultiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetGravityMultiplier_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_GravityMultiplier = { "GravityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetGravityMultiplier_Parms, GravityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_GravityMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::NewProp_GravityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the gravity multiplier for body modifiers\n\x09 *\n\x09 * @param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n\x09 *        \"ArmLeft\", depending on how body modifiers have been created.\n\x09 * @param GravityMultiplier The amount of gravity to apply when simulating\n\x09 */" },
		{ "CPP_Default_GravityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the gravity multiplier for body modifiers\n\n@param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n       \"ArmLeft\", depending on how body modifiers have been created.\n@param GravityMultiplier The amount of gravity to apply when simulating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersInSetGravityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::PhysicsControlComponent_eventSetBodyModifiersInSetGravityMultiplier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersInSetMovementType_Parms
		{
			FName Set;
			EPhysicsMovementType MovementType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetMovementType_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetMovementType_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::NewProp_MovementType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the movement type for body modifiers\n\x09 *\n\x09 * @param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n\x09 *        \"ArmLeft\", depending on how body modifiers have been created.\n\x09 * @param MovementType Whether to enable/disable simulation on the bodies\n\x09 */" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the movement type for body modifiers\n\n@param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n       \"ArmLeft\", depending on how body modifiers have been created.\n@param MovementType Whether to enable/disable simulation on the bodies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersInSetMovementType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::PhysicsControlComponent_eventSetBodyModifiersInSetMovementType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersInSetUseSkeletalAnimation_Parms
		{
			FName Set;
			bool bUseSkeletalAnimation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersInSetUseSkeletalAnimation_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifiersInSetUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifiersInSetUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether body modifiers should use skeletal animation for their kinematic targets\n\x09 *\n\x09 * @param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n\x09 *        \"ArmLeft\", depending on how body modifiers have been created.\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n\x09 *        skeletal animation, rather than world space. Only relevant if the\n\x09 *        body is part of a skeletal mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether body modifiers should use skeletal animation for their kinematic targets\n\n@param Set The set of body modifiers to modify. Standard sets will include \"All\" and things like\n       \"ArmLeft\", depending on how body modifiers have been created.\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n       skeletal animation, rather than world space. Only relevant if the\n       body is part of a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersInSetUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetBodyModifiersInSetUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersMovementType_Parms
		{
			TArray<FName> Names;
			EPhysicsMovementType MovementType;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersMovementType_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersMovementType_Parms, MovementType), Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType_MetaData)) }; // 3841797257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::NewProp_MovementType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the movement type for body modifiers\n\x09 *\n\x09 * @param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n\x09 *        then it can be split.\n\x09 * @param MovementType Whether to enable/disable simulation on the bodies\n\x09 */" },
		{ "CPP_Default_MovementType", "Simulated" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the movement type for body modifiers\n\n@param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n       then it can be split.\n@param MovementType Whether to enable/disable simulation on the bodies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersMovementType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::PhysicsControlComponent_eventSetBodyModifiersMovementType_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifiersUseSkeletalAnimation_Parms
		{
			TArray<FName> Names;
			bool bUseSkeletalAnimation;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifiersUseSkeletalAnimation_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifiersUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifiersUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether body modifiers should use skeletal animation for their kinematic targets\n\x09 *\n\x09 * @param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n\x09 *        then it can be split.\n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the \n\x09 *        skeletal animation, rather than world space. Only relevant if the\n\x09 *        body is part of a skeletal mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether body modifiers should use skeletal animation for their kinematic targets\n\n@param Names The names of the body modifiers to access. Note that if you have these in a FPhysicsControlNameArray\n       then it can be split.\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the\n       skeletal animation, rather than world space. Only relevant if the\n       body is part of a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifiersUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetBodyModifiersUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms
		{
			FName Name;
			bool bUseSkeletalAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether a body modifier should use skeletal animation for its kinematic targets\n\x09 *\n\x09 * @param Name The name of the body modifier to access. \n\x09 * @param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the skeletal\n\x09 *        animation, rather than world space. Only relevant if the body is part of a skeletal mesh.\n\x09 * @return true if the body modifier was found, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether a body modifier should use skeletal animation for its kinematic targets\n\n@param Name The name of the body modifier to access.\n@param bUseSkeletalAnimation Whether the kinematic target is specified in the frame of the skeletal\n       animation, rather than world space. Only relevant if the body is part of a skeletal mesh.\n@return true if the body modifier was found, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetBodyModifierUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetBodyModifierUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics
	{
		struct PhysicsControlComponent_eventSetControlAngularData_Parms
		{
			FName Name;
			float Strength;
			float DampingRatio;
			float ExtraDamping;
			float MaxTorque;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAngularData_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Strength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAngularData_Parms, Strength), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_DampingRatio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAngularData_Parms, DampingRatio), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_DampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_DampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ExtraDamping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ExtraDamping = { "ExtraDamping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAngularData_Parms, ExtraDamping), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ExtraDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ExtraDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_MaxTorque_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_MaxTorque = { "MaxTorque", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAngularData_Parms, MaxTorque), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_MaxTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_MaxTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlAngularData_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlAngularData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlAngularData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlAngularData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ExtraDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_MaxTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control's angular data - i.e. the strengths etc of the control driving towards the target\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param Strength The strength used to drive angular motion\n\x09 * @param DampingRatio The amount of damping associated with the angular strength. 1 Results in critically damped motion\n\x09 * @param ExtraDamping The amount of additional angular damping\n\x09 * @param MaxTorque The maximum torque used to drive the angular motion. Zero indicates no limit.\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "CPP_Default_DampingRatio", "1.000000" },
		{ "CPP_Default_ExtraDamping", "0.000000" },
		{ "CPP_Default_MaxTorque", "0.000000" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control's angular data - i.e. the strengths etc of the control driving towards the target\n\n@param Name The name of the control to modify.\n@param Strength The strength used to drive angular motion\n@param DampingRatio The amount of damping associated with the angular strength. 1 Results in critically damped motion\n@param ExtraDamping The amount of additional angular damping\n@param MaxTorque The maximum torque used to drive the angular motion. Zero indicates no limit.\n@param bEnableControl Enables the control if it is currently disabled\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlAngularData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::PhysicsControlComponent_eventSetControlAngularData_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics
	{
		struct PhysicsControlComponent_eventSetControlAutoDisable_Parms
		{
			FName Name;
			bool bAutoDisable;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlAutoDisable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlAutoDisable_Parms*)Obj)->bAutoDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlAutoDisable_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlAutoDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlAutoDisable_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_bAutoDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name The name of the control to modify. \n\x09 * @param bAutoDisable If set then the control will automatically deactivate after each tick.\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name The name of the control to modify.\n@param bAutoDisable If set then the control will automatically deactivate after each tick.\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlAutoDisable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::PhysicsControlComponent_eventSetControlAutoDisable_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics
	{
		struct PhysicsControlComponent_eventSetControlData_Parms
		{
			FName Name;
			FPhysicsControlData ControlData;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlData_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlData_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlData_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control data - i.e. the strengths etc of the control driving towards the target\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param ControlData The new control data\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control data - i.e. the strengths etc of the control driving towards the target\n\n@param Name The name of the control to modify.\n@param ControlData The new control data\n@param bEnableControl Enables the control if it is currently disabled\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::PhysicsControlComponent_eventSetControlData_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics
	{
		struct PhysicsControlComponent_eventSetControlDatas_Parms
		{
			TArray<FName> Names;
			FPhysicsControlData ControlData;
			bool bEnableControl;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlDatas_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlDatas_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlDatas_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlDatas_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control data - i.e. the strengths etc of the controls driving towards the targets\n\x09 *\n\x09 * @param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 * @param ControlData The new control data\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control data - i.e. the strengths etc of the controls driving towards the targets\n\n@param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param ControlData The new control data\n@param bEnableControl Enables the control if it is currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlDatas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::PhysicsControlComponent_eventSetControlDatas_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics
	{
		struct PhysicsControlComponent_eventSetControlDatasInSet_Parms
		{
			FName Set;
			FPhysicsControlData ControlData;
			bool bEnableControl;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlDatasInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlDatasInSet_Parms, ControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_ControlData_MetaData)) }; // 255878212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlDatasInSet_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlDatasInSet_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_ControlData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control data - i.e. the strengths etc of the controls driving towards the targets\n\x09 *\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param ControlData The new control data\n\x09 * @param bEnableControl Enables the controls if currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control data - i.e. the strengths etc of the controls driving towards the targets\n\n@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param ControlData The new control data\n@param bEnableControl Enables the controls if currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlDatasInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::PhysicsControlComponent_eventSetControlDatasInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics
	{
		struct PhysicsControlComponent_eventSetControlDisableCollision_Parms
		{
			FName Name;
			bool bDisableCollision;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlDisableCollision_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlDisableCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Name The name of the control to modify. \n\x09 * @param bDisableCollision If set then the control will disable collision between the bodies it connects.\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Name The name of the control to modify.\n@param bDisableCollision If set then the control will disable collision between the bodies it connects.\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlDisableCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::PhysicsControlComponent_eventSetControlDisableCollision_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics
	{
		struct PhysicsControlComponent_eventSetControlEnabled_Parms
		{
			FName Name;
			bool bEnable;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlEnabled_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlEnabled_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlEnabled_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Activates or deactivates a control\n\x09 *\n\x09 * @param Name     The name of the control to modify. \n\x09 * @param bEnable  Whether to enable/disable the control\n\x09 * @return         Returns true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Activates or deactivates a control\n\n@param Name     The name of the control to modify.\n@param bEnable  Whether to enable/disable the control\n@return         Returns true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::PhysicsControlComponent_eventSetControlEnabled_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics
	{
		struct PhysicsControlComponent_eventSetControlLinearData_Parms
		{
			FName Name;
			float Strength;
			float DampingRatio;
			float ExtraDamping;
			float MaxForce;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlLinearData_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Strength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlLinearData_Parms, Strength), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_DampingRatio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlLinearData_Parms, DampingRatio), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_DampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_DampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ExtraDamping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ExtraDamping = { "ExtraDamping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlLinearData_Parms, ExtraDamping), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ExtraDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ExtraDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_MaxForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlLinearData_Parms, MaxForce), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlLinearData_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlLinearData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlLinearData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlLinearData_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ExtraDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control's linear data - i.e. the strengths etc of the control driving towards the target\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param Strength The strength used to drive linear motion\n\x09 * @param DampingRatio The amount of damping associated with the linear strength. 1 Results in critically damped motion\n\x09 * @param ExtraDamping The amount of additional linear damping\n\x09 * @param MaxForce The maximum force used to drive the linear motion. Zero indicates no limit.\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "CPP_Default_DampingRatio", "1.000000" },
		{ "CPP_Default_ExtraDamping", "0.000000" },
		{ "CPP_Default_MaxForce", "0.000000" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control's linear data - i.e. the strengths etc of the control driving towards the target\n\n@param Name The name of the control to modify.\n@param Strength The strength used to drive linear motion\n@param DampingRatio The amount of damping associated with the linear strength. 1 Results in critically damped motion\n@param ExtraDamping The amount of additional linear damping\n@param MaxForce The maximum force used to drive the linear motion. Zero indicates no limit.\n@param bEnableControl Enables the control if it is currently disabled\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlLinearData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::PhysicsControlComponent_eventSetControlLinearData_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics
	{
		struct PhysicsControlComponent_eventSetControlMultiplier_Parms
		{
			FName Name;
			FPhysicsControlMultiplier ControlMultiplier;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultiplier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ControlMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultiplier_Parms, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ControlMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ControlMultiplier_MetaData)) }; // 2703942446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlMultiplier_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlMultiplier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlMultiplier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlMultiplier_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control data using the multipliers\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param ControlMultipliers The new control multipliers\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control data using the multipliers\n\n@param Name The name of the control to modify.\n@param ControlMultipliers The new control multipliers\n@param bEnableControl Enables the control if it is currently disabled\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::PhysicsControlComponent_eventSetControlMultiplier_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics
	{
		struct PhysicsControlComponent_eventSetControlMultipliers_Parms
		{
			TArray<FName> Names;
			FPhysicsControlMultiplier ControlMultiplier;
			bool bEnableControl;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultipliers_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_ControlMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultipliers_Parms, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_ControlMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_ControlMultiplier_MetaData)) }; // 2703942446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlMultipliers_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlMultipliers_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control data using the multipliers\n\x09 *\n\x09 * @param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 * @param ControlMultiplier The new control multiplier\n\x09 * @param bEnableControl Enables the controls if currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control data using the multipliers\n\n@param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param ControlMultiplier The new control multiplier\n@param bEnableControl Enables the controls if currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlMultipliers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::PhysicsControlComponent_eventSetControlMultipliers_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics
	{
		struct PhysicsControlComponent_eventSetControlMultipliersInSet_Parms
		{
			FName Set;
			FPhysicsControlMultiplier ControlMultiplier;
			bool bEnableControl;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultipliersInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_ControlMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_ControlMultiplier = { "ControlMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlMultipliersInSet_Parms, ControlMultiplier), Z_Construct_UScriptStruct_FPhysicsControlMultiplier, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_ControlMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_ControlMultiplier_MetaData)) }; // 2703942446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlMultipliersInSet_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlMultipliersInSet_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_ControlMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control data using the multipliers\n\x09 *\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param ControlMultiplier The new control multiplier\n\x09 * @param bEnableControl Enables the controls if currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control data using the multipliers\n\n@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param ControlMultiplier The new control multiplier\n@param bEnableControl Enables the controls if currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlMultipliersInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::PhysicsControlComponent_eventSetControlMultipliersInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics
	{
		struct PhysicsControlComponent_eventSetControlPoint_Parms
		{
			FName Name;
			FVector Position;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlPoint_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Position_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlPoint_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets the point at which controls will \"push\" the child object.\n\x09 * \n\x09 * @param Name The name of the control to modify. \n\x09 * @param Position The position of the control point on the child mesh object (only relevant if that \n\x09 *        object is in use and is being simulated)\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets the point at which controls will \"push\" the child object.\n\n@param Name The name of the control to modify.\n@param Position The position of the control point on the child mesh object (only relevant if that\n       object is in use and is being simulated)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::PhysicsControlComponent_eventSetControlPoint_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics
	{
		struct PhysicsControlComponent_eventSetControlsAutoDisable_Parms
		{
			TArray<FName> Names;
			bool bAutoDisable;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsAutoDisable_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsAutoDisable_Parms*)Obj)->bAutoDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsAutoDisable_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::NewProp_bAutoDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Names The names of the controls to modify. \n\x09 * @param bAutoDisable If set then the control will automatically deactivate after each tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Names The names of the controls to modify.\n@param bAutoDisable If set then the control will automatically deactivate after each tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsAutoDisable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::PhysicsControlComponent_eventSetControlsAutoDisable_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics
	{
		struct PhysicsControlComponent_eventSetControlsDisableCollision_Parms
		{
			TArray<FName> Names;
			bool bDisableCollision;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsDisableCollision_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::NewProp_bDisableCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Names The names of the controls to modify. \n\x09 * @param bDisableCollision If set then the control will disable collision between the bodies it connects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Names The names of the controls to modify.\n@param bDisableCollision If set then the control will disable collision between the bodies it connects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsDisableCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::PhysicsControlComponent_eventSetControlsDisableCollision_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics
	{
		struct PhysicsControlComponent_eventSetControlsEnabled_Parms
		{
			TArray<FName> Names;
			bool bEnable;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsEnabled_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsEnabled_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Activates or deactivates controls\n\x09 *\n\x09 * @param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 * @param bEnable  Whether to enable/disable the controls\n\x09 */" },
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Activates or deactivates controls\n\n@param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param bEnable  Whether to enable/disable the controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::PhysicsControlComponent_eventSetControlsEnabled_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics
	{
		struct PhysicsControlComponent_eventSetControlsInSetAutoDisable_Parms
		{
			FName Set;
			bool bAutoDisable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsInSetAutoDisable_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsInSetAutoDisable_Parms*)Obj)->bAutoDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsInSetAutoDisable_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::NewProp_bAutoDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param bAutoDisable If set then the control will automatically deactivate after each tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param bAutoDisable If set then the control will automatically deactivate after each tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsInSetAutoDisable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::PhysicsControlComponent_eventSetControlsInSetAutoDisable_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics
	{
		struct PhysicsControlComponent_eventSetControlsInSetDisableCollision_Parms
		{
			FName Set;
			bool bDisableCollision;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsInSetDisableCollision_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsInSetDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsInSetDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::NewProp_bDisableCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param bDisableCollision If set then the control will disable collision between the bodies it connects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param bDisableCollision If set then the control will disable collision between the bodies it connects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsInSetDisableCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::PhysicsControlComponent_eventSetControlsInSetDisableCollision_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics
	{
		struct PhysicsControlComponent_eventSetControlsInSetEnabled_Parms
		{
			FName Set;
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsInSetEnabled_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsInSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsInSetEnabled_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Activates or deactivates controls\n\x09 *\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param bEnable  Whether to enable/disable the controls\n\x09 */" },
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Activates or deactivates controls\n\n@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param bEnable  Whether to enable/disable the controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsInSetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::PhysicsControlComponent_eventSetControlsInSetEnabled_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms
		{
			FName Set;
			bool bUseSkeletalAnimation;
			float SkeletalAnimationVelocityMultiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationVelocityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkeletalAnimationVelocityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier = { "SkeletalAnimationVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms, SkeletalAnimationVelocityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether or not the controls should use skeletal animation for the targets\n\x09 *\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n\x09 *        there is any) and the control target that has been set\n\x09 * @param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines the amount of\n\x09 *        velocity extracted from the animation that is used as targets for the controls\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_SkeletalAnimationVelocityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether or not the controls should use skeletal animation for the targets\n\n@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n       there is any) and the control target that has been set\n@param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines the amount of\n       velocity extracted from the animation that is used as targets for the controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsInSetUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetControlsInSetUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms
		{
			TArray<FName> Names;
			bool bUseSkeletalAnimation;
			float SkeletalAnimationVelocityMultiplier;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationVelocityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkeletalAnimationVelocityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier = { "SkeletalAnimationVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms, SkeletalAnimationVelocityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether or not the controls should use skeletal animation for the targets\n\x09 *\n\x09 * @param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray \n\x09 *              then it can be split.\n\x09 * @param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n\x09 *              there is any) and the control target that has been set\n\x09 * @param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines the amount of \n\x09 *              velocity extracted from the animation that is used as targets for the controls\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_SkeletalAnimationVelocityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether or not the controls should use skeletal animation for the targets\n\n@param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n             there is any) and the control target that has been set\n@param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines the amount of\n             velocity extracted from the animation that is used as targets for the controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlsUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetControlsUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics
	{
		struct PhysicsControlComponent_eventSetControlTarget_Parms
		{
			FName Name;
			FPhysicsControlTarget ControlTarget;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTarget_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTarget_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTarget_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTarget_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTarget_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param ControlTarget The new target for the control\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\n@param Name The name of the control to modify.\n@param ControlTarget The new target for the control\n@param bEnableControl Enables the control if it is currently disabled\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::PhysicsControlComponent_eventSetControlTarget_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargetOrientation_Parms
		{
			FName Name;
			FRotator Orientation;
			float AngularVelocityDeltaTime;
			bool bEnableControl;
			bool bApplyControlPointToTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyControlPointToTarget_MetaData[];
#endif
		static void NewProp_bApplyControlPointToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyControlPointToTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetOrientation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetOrientation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_AngularVelocityDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_AngularVelocityDeltaTime = { "AngularVelocityDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetOrientation_Parms, AngularVelocityDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_AngularVelocityDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_AngularVelocityDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetOrientation_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetOrientation_Parms*)Obj)->bApplyControlPointToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget = { "bApplyControlPointToTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_AngularVelocityDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_bApplyControlPointToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param Orientation The new orientation target for the control\n\x09 * @param AngularVelocityDeltaTime If non-zero, the target angular velocity will be calculated using the current \n\x09 *        target position. If zero, the target velocity will be set to zero.\n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n\x09 *        a \"virtual\" object, where the system attempts to move the object\n\x09 *        to match the pose of this \"virtual\" object that has been placed at\n\x09 *        the target transform. Use this when you want to specify the target\n\x09 *        transform for the object as a whole. If false, then the target transform\n\x09 *        is used as is, and the system drives the control point towards this\n\x09 *        transform.\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bApplyControlPointToTarget", "false" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\n@param Name The name of the control to modify.\n@param Orientation The new orientation target for the control\n@param AngularVelocityDeltaTime If non-zero, the target angular velocity will be calculated using the current\n       target position. If zero, the target velocity will be set to zero.\n@param bEnableControl Enables the control if it is currently disabled\n@param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n       a \"virtual\" object, where the system attempts to move the object\n       to match the pose of this \"virtual\" object that has been placed at\n       the target transform. Use this when you want to specify the target\n       transform for the object as a whole. If false, then the target transform\n       is used as is, and the system drives the control point towards this\n       transform.\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargetOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::PhysicsControlComponent_eventSetControlTargetOrientation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargetPoses_Parms
		{
			FName Name;
			FVector ParentPosition;
			FRotator ParentOrientation;
			FVector ChildPosition;
			FRotator ChildOrientation;
			float VelocityDeltaTime;
			bool bEnableControl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentPosition = { "ParentPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, ParentPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentOrientation = { "ParentOrientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, ParentOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildPosition = { "ChildPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, ChildPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildOrientation = { "ChildOrientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, ChildOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_VelocityDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_VelocityDeltaTime = { "VelocityDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPoses_Parms, VelocityDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_VelocityDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_VelocityDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPoses_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPoses_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPoses_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPoses_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ParentOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ChildOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_VelocityDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Calculates and sets an existing control target. This takes the \"virtual\" position/orientation of the parent \n\x09 * and child and calculates the relative control. Note that this will set bApplyControlPointToTarget to true.\n\x09 * \n\x09 * @param Name              The name of the control to modify. \n\x09 * @param ParentPosition    The virtual/target parent position\n\x09 * @param ParentOrientation The virtual/target parent orientation\n\x09 * @param ChildPosition     The virtual/target child position\n\x09 * @param ChildOrientation  The virtual/target child orientation\n\x09 * @param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target\n\x09 *                          position. If zero, the target velocity will be set to zero.    \n\x09 * @param bEnableControl    Enables the control if it is currently disabled\n\x09 * @return                  Returns true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Calculates and sets an existing control target. This takes the \"virtual\" position/orientation of the parent\nand child and calculates the relative control. Note that this will set bApplyControlPointToTarget to true.\n\n@param Name              The name of the control to modify.\n@param ParentPosition    The virtual/target parent position\n@param ParentOrientation The virtual/target parent orientation\n@param ChildPosition     The virtual/target child position\n@param ChildOrientation  The virtual/target child orientation\n@param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target\n                         position. If zero, the target velocity will be set to zero.\n@param bEnableControl    Enables the control if it is currently disabled\n@return                  Returns true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargetPoses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::PhysicsControlComponent_eventSetControlTargetPoses_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargetPosition_Parms
		{
			FName Name;
			FVector Position;
			float VelocityDeltaTime;
			bool bEnableControl;
			bool bApplyControlPointToTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyControlPointToTarget_MetaData[];
#endif
		static void NewProp_bApplyControlPointToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyControlPointToTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPosition_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_VelocityDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_VelocityDeltaTime = { "VelocityDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPosition_Parms, VelocityDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_VelocityDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_VelocityDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPosition_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPosition_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPosition_Parms*)Obj)->bApplyControlPointToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget = { "bApplyControlPointToTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPosition_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPosition_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_VelocityDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_bApplyControlPointToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param Position          The new position target for the control\n\x09 * @param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target \n\x09 *        position. If zero, the target velocity will be set to zero.    \n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n\x09 *        a \"virtual\" object, where the system attempts to move the object\n\x09 *        to match the pose of this \"virtual\" object that has been placed at\n\x09 *        the target transform. Use this when you want to specify the target\n\x09 *        transform for the object as a whole. If false, then the target transform\n\x09 *        is used as is, and the system drives the control point towards this\n\x09 *        transform.\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bApplyControlPointToTarget", "false" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\n@param Name The name of the control to modify.\n@param Position          The new position target for the control\n@param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target\n       position. If zero, the target velocity will be set to zero.\n@param bEnableControl Enables the control if it is currently disabled\n@param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n       a \"virtual\" object, where the system attempts to move the object\n       to match the pose of this \"virtual\" object that has been placed at\n       the target transform. Use this when you want to specify the target\n       transform for the object as a whole. If false, then the target transform\n       is used as is, and the system drives the control point towards this\n       transform.\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::PhysicsControlComponent_eventSetControlTargetPosition_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms
		{
			FName Name;
			FVector Position;
			FRotator Orientation;
			float VelocityDeltaTime;
			bool bEnableControl;
			bool bApplyControlPointToTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyControlPointToTarget_MetaData[];
#endif
		static void NewProp_bApplyControlPointToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyControlPointToTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_VelocityDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_VelocityDeltaTime = { "VelocityDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms, VelocityDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_VelocityDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_VelocityDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms*)Obj)->bApplyControlPointToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget = { "bApplyControlPointToTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_VelocityDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bEnableControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_bApplyControlPointToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param Position The new position target for the control\n\x09 * @param Orientation The new orientation target for the control\n\x09 * @param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target \n\x09 *        position. If zero, the target velocity will be set to zero.    \n\x09 * @param bEnableControl Enables the control if it is currently disabled\n\x09 * @param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n\x09 *        a \"virtual\" object, where the system attempts to move the object to match the pose of \n\x09 *        this \"virtual\" object that has been placed at the target transform. Use this when you \n\x09 *        want to specify the target transform for the object as a whole. If false, then the \n\x09 *        target transform is used as is, and the system drives the control point towards this\n\x09 *        transform.\n\x09 * @return                  Returns true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bApplyControlPointToTarget", "false" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies an existing control target - i.e. what it is driving towards, relative to the parent object\n\n@param Name The name of the control to modify.\n@param Position The new position target for the control\n@param Orientation The new orientation target for the control\n@param VelocityDeltaTime If non-zero, the target velocity will be calculated using the current target\n       position. If zero, the target velocity will be set to zero.\n@param bEnableControl Enables the control if it is currently disabled\n@param bApplyControlPointToTarget If true, then the target position/orientation is treated as\n       a \"virtual\" object, where the system attempts to move the object to match the pose of\n       this \"virtual\" object that has been placed at the target transform. Use this when you\n       want to specify the target transform for the object as a whole. If false, then the\n       target transform is used as is, and the system drives the control point towards this\n       transform.\n@return                  Returns true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargetPositionAndOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::PhysicsControlComponent_eventSetControlTargetPositionAndOrientation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargets_Parms
		{
			TArray<FName> Names;
			FPhysicsControlTarget ControlTarget;
			bool bEnableControl;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargets_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargets_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargets_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargets_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_Names,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control targets - i.e. what they are driving towards, relative to the parent objects\n\x09 *\n\x09 * @param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n\x09 *              then it can be split.\n\x09 * @param ControlTarget The new target for the controls\n\x09 * @param bEnableControl Enables the controls if currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control targets - i.e. what they are driving towards, relative to the parent objects\n\n@param Names The names of the controls to modify. Note that if you have these in a FPhysicsControlNameArray\n             then it can be split.\n@param ControlTarget The new target for the controls\n@param bEnableControl Enables the controls if currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::PhysicsControlComponent_eventSetControlTargets_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics
	{
		struct PhysicsControlComponent_eventSetControlTargetsInSet_Parms
		{
			FName Set;
			FPhysicsControlTarget ControlTarget;
			bool bEnableControl;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableControl_MetaData[];
#endif
		static void NewProp_bEnableControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_Set_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetsInSet_Parms, Set), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_ControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_ControlTarget = { "ControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlTargetsInSet_Parms, ControlTarget), Z_Construct_UScriptStruct_FPhysicsControlTarget, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_ControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_ControlTarget_MetaData)) }; // 2672511800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlTargetsInSet_Parms*)Obj)->bEnableControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl = { "bEnableControl", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlTargetsInSet_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_ControlTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::NewProp_bEnableControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Modifies existing control targets - i.e. what they are driving towards, relative to the parent objects\n\x09 *\n\x09 * @param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n\x09 *        \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n\x09 * @param ControlTarget The new target for the controls\n\x09 * @param bEnableControl Enables the controls if currently disabled\n\x09 */" },
		{ "CPP_Default_bEnableControl", "true" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Modifies existing control targets - i.e. what they are driving towards, relative to the parent objects\n\n@param Set The set of controls to modify. Standard sets will include \"All\", \"WorldSpace\",\n       \"ParentSpace\" and things like \"WorldSpace-ArmLeft\", depending on how controls have been created.\n@param ControlTarget The new target for the controls\n@param bEnableControl Enables the controls if currently disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlTargetsInSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::PhysicsControlComponent_eventSetControlTargetsInSet_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics
	{
		struct PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms
		{
			FName Name;
			bool bUseSkeletalAnimation;
			float SkeletalAnimationVelocityMultiplier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalAnimation_MetaData[];
#endif
		static void NewProp_bUseSkeletalAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationVelocityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkeletalAnimationVelocityMultiplier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms*)Obj)->bUseSkeletalAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation = { "bUseSkeletalAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier = { "SkeletalAnimationVelocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms, SkeletalAnimationVelocityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier_MetaData)) };
	void Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms), &Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_bUseSkeletalAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_SkeletalAnimationVelocityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/**\n\x09 * Sets whether or not the control should use skeletal animation for the targets\n\x09 *\n\x09 * @param Name The name of the control to modify. \n\x09 * @param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n\x09 *        there is any) and the control target that has been set\n\x09 * @param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines \n\x09 *        the amount of velocity extracted from the animation that is used as targets for the controls\n\x09 * @return true if the control was found and modified, false if not\n\x09 */" },
		{ "CPP_Default_bUseSkeletalAnimation", "true" },
		{ "CPP_Default_SkeletalAnimationVelocityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Sets whether or not the control should use skeletal animation for the targets\n\n@param Name The name of the control to modify.\n@param bUseSkeletalAnimation If true then the targets will be a combination of the skeletal animation (if\n       there is any) and the control target that has been set\n@param SkeletalAnimationVelocityMultiplier If skeletal animation is being used, then this determines\n       the amount of velocity extracted from the animation that is used as targets for the controls\n@return true if the control was found and modified, false if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlComponent, nullptr, "SetControlUseSkeletalAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::PhysicsControlComponent_eventSetControlUseSkeletalAnimation_Parms), Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsControlComponent);
	UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister()
	{
		return UPhysicsControlComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsControlComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisualization_MetaData[];
#endif
		static void NewProp_bShowDebugVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualizationSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugControlList_MetaData[];
#endif
		static void NewProp_bShowDebugControlList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugControlList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugControlDetailFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugControlDetailFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugBodyModifierList_MetaData[];
#endif
		static void NewProp_bShowDebugBodyModifierList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugBodyModifierList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugBodyModifierDetailFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugBodyModifierDetailFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityPredictionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityPredictionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumControlsOrModifiersPerName_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumControlsOrModifiersPerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsControlComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsControlComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet, "AddBodyModifiersToSet" }, // 2633472769
		{ &Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet, "AddBodyModifierToSet" }, // 4149032438
		{ &Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet, "AddControlsToSet" }, // 2655600607
		{ &Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet, "AddControlToSet" }, // 628620630
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier, "CreateBodyModifier" }, // 4249547171
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones, "CreateBodyModifiersFromLimbBones" }, // 3861976665
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow, "CreateBodyModifiersFromSkeletalMeshBelow" }, // 1444253043
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControl, "CreateControl" }, // 3896464952
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones, "CreateControlsAndBodyModifiersFromLimbBones" }, // 3616617716
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones, "CreateControlsFromLimbBones" }, // 3207118808
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile, "CreateControlsFromLimbBonesAndConstraintProfile" }, // 817935173
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh, "CreateControlsFromSkeletalMesh" }, // 975103104
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile, "CreateControlsFromSkeletalMeshAndConstraintProfile" }, // 4183783949
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow, "CreateControlsFromSkeletalMeshAndConstraintProfileBelow" }, // 4000027319
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow, "CreateControlsFromSkeletalMeshBelow" }, // 1770390085
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier, "CreateNamedBodyModifier" }, // 734291856
		{ &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl, "CreateNamedControl" }, // 2459740314
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier, "DestroyBodyModifier" }, // 2192530554
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers, "DestroyBodyModifiers" }, // 1708185979
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet, "DestroyBodyModifiersInSet" }, // 2072143344
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl, "DestroyControl" }, // 1568592024
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls, "DestroyControls" }, // 2622402106
		{ &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet, "DestroyControlsInSet" }, // 2166390303
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames, "GetAllBodyModifierNames" }, // 4231740700
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames, "GetAllControlNames" }, // 1338808709
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet, "GetBodyModifierNamesInSet" }, // 591905798
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlAutoDisable, "GetControlAutoDisable" }, // 460672195
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlData, "GetControlData" }, // 1457843301
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled, "GetControlEnabled" }, // 1276378042
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier, "GetControlMultiplier" }, // 1209462517
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet, "GetControlNamesInSet" }, // 3257244852
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget, "GetControlTarget" }, // 4241945860
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh, "GetLimbBonesFromSkeletalMesh" }, // 2640140471
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier, "GetSetsContainingBodyModifier" }, // 3781169357
		{ &Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl, "GetSetsContainingControl" }, // 1735677275
		{ &Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint, "ResetControlPoint" }, // 3726288800
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType, "SetBodyModifierCollisionType" }, // 2651639579
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier, "SetBodyModifierGravityMultiplier" }, // 3081165844
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget, "SetBodyModifierKinematicTarget" }, // 2030667639
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType, "SetBodyModifierMovementType" }, // 1277436161
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType, "SetBodyModifiersCollisionType" }, // 245455071
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier, "SetBodyModifiersGravityMultiplier" }, // 3006485377
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType, "SetBodyModifiersInSetCollisionType" }, // 3433151015
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier, "SetBodyModifiersInSetGravityMultiplier" }, // 3173794339
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType, "SetBodyModifiersInSetMovementType" }, // 4256279612
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUseSkeletalAnimation, "SetBodyModifiersInSetUseSkeletalAnimation" }, // 3185494701
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType, "SetBodyModifiersMovementType" }, // 1528206267
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUseSkeletalAnimation, "SetBodyModifiersUseSkeletalAnimation" }, // 3162052767
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUseSkeletalAnimation, "SetBodyModifierUseSkeletalAnimation" }, // 2818984465
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData, "SetControlAngularData" }, // 3125709249
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAutoDisable, "SetControlAutoDisable" }, // 132115064
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlData, "SetControlData" }, // 3801719094
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas, "SetControlDatas" }, // 3082854936
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet, "SetControlDatasInSet" }, // 1757171960
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision, "SetControlDisableCollision" }, // 1840598791
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled, "SetControlEnabled" }, // 2135612160
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData, "SetControlLinearData" }, // 1347949568
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier, "SetControlMultiplier" }, // 1129663596
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers, "SetControlMultipliers" }, // 667232539
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet, "SetControlMultipliersInSet" }, // 1758838993
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint, "SetControlPoint" }, // 2047317075
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsAutoDisable, "SetControlsAutoDisable" }, // 2896232739
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision, "SetControlsDisableCollision" }, // 1860547587
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled, "SetControlsEnabled" }, // 3694992169
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetAutoDisable, "SetControlsInSetAutoDisable" }, // 4135658884
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision, "SetControlsInSetDisableCollision" }, // 1023572232
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled, "SetControlsInSetEnabled" }, // 2380826571
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation, "SetControlsInSetUseSkeletalAnimation" }, // 1538663049
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation, "SetControlsUseSkeletalAnimation" }, // 3008165200
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget, "SetControlTarget" }, // 4203961355
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation, "SetControlTargetOrientation" }, // 2801545527
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses, "SetControlTargetPoses" }, // 1369093011
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition, "SetControlTargetPosition" }, // 783490181
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation, "SetControlTargetPositionAndOrientation" }, // 27698335
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets, "SetControlTargets" }, // 1004401879
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet, "SetControlTargetsInSet" }, // 3212083147
		{ &Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation, "SetControlUseSkeletalAnimation" }, // 3251412927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n * This is the main Physics Control Component class which manages Controls and Body Modifiers associated \n * with one or more static or skeletal meshes. You can add this as a component to an actor containing a \n * mesh and then use it to create, configure and destroy Controls/Body Modifiers:\n * \n * Controls are used to control one physics body relative to another (or the world). These controls are done\n * through physical spring/damper drives.\n * \n * Body Modifiers are used to update the most important physical properties of physics bodies such as whether \n * they are simulated vs kinematic, or whether they experience gravity.\n * \n * Note that Controls and Body Modifiers are given names (which are predictable). These names can then be stored \n * (perhaps in arrays) to make it easy to quickly change multiple Controls/Body Modifiers.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsControlComponent.h" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "This is the main Physics Control Component class which manages Controls and Body Modifiers associated\nwith one or more static or skeletal meshes. You can add this as a component to an actor containing a\nmesh and then use it to create, configure and destroy Controls/Body Modifiers:\n\nControls are used to control one physics body relative to another (or the world). These controls are done\nthrough physical spring/damper drives.\n\nBody Modifiers are used to update the most important physical properties of physics bodies such as whether\nthey are simulated vs kinematic, or whether they experience gravity.\n\nNote that Controls and Body Modifiers are given names (which are predictable). These names can then be stored\n(perhaps in arrays) to make it easy to quickly change multiple Controls/Body Modifiers." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/**\n\x09 * If the component moves by more than this distance then it is treated as a teleport,\n\x09 * which prevents velocities being used for a frame. It is also used as the threshold for\n\x09 * teleporting when moving kinematic objects. Zero or negative disables.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "If the component moves by more than this distance then it is treated as a teleport,\nwhich prevents velocities being used for a frame. It is also used as the threshold for\nteleporting when moving kinematic objects. Zero or negative disables." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, TeleportDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/**\n\x09 * If the component rotates by more than this angle (in degrees) then it is treated as a teleport,\n\x09 * which prevents velocities being used for a frame. It is also used as the threshold for\n\x09 * teleporting when moving kinematic objects. Zero or negative disables.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "If the component rotates by more than this angle (in degrees) then it is treated as a teleport,\nwhich prevents velocities being used for a frame. It is also used as the threshold for\nteleporting when moving kinematic objects. Zero or negative disables." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, TeleportRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Visualize the controls when this component is selected */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Visualize the controls when this component is selected" },
	};
#endif
	void Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_SetBit(void* Obj)
	{
		((UPhysicsControlComponent*)Obj)->bShowDebugVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization = { "bShowDebugVisualization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsControlComponent), &Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VisualizationSizeScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Size of the gizmos etc used during visualization */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Size of the gizmos etc used during visualization" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VisualizationSizeScale = { "VisualizationSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, VisualizationSizeScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VisualizationSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VisualizationSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Display all the controls and their basic properties when this component is selected*/" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Display all the controls and their basic properties when this component is selected" },
	};
#endif
	void Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_SetBit(void* Obj)
	{
		((UPhysicsControlComponent*)Obj)->bShowDebugControlList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList = { "bShowDebugControlList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsControlComponent), &Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugControlDetailFilter_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Display detailed info for controls containing this string (if non-empty) when this component is selected*/" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Display detailed info for controls containing this string (if non-empty) when this component is selected" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugControlDetailFilter = { "DebugControlDetailFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, DebugControlDetailFilter), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugControlDetailFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugControlDetailFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Display all the body modifiers and their basic properties when this component is selected*/" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Display all the body modifiers and their basic properties when this component is selected" },
	};
#endif
	void Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_SetBit(void* Obj)
	{
		((UPhysicsControlComponent*)Obj)->bShowDebugBodyModifierList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList = { "bShowDebugBodyModifierList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsControlComponent), &Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugBodyModifierDetailFilter_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Display detailed info for body modifiers containing this string (if non-empty) when this component is selected*/" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Display detailed info for body modifiers containing this string (if non-empty) when this component is selected" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugBodyModifierDetailFilter = { "DebugBodyModifierDetailFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, DebugBodyModifierDetailFilter), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugBodyModifierDetailFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugBodyModifierDetailFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VelocityPredictionTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * The time used when \"predicting\" the target position/orientation. Zero will disable the visualization\n\x09 * of this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "The time used when \"predicting\" the target position/orientation. Zero will disable the visualization\nof this." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VelocityPredictionTime = { "VelocityPredictionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, VelocityPredictionTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VelocityPredictionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VelocityPredictionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_MaxNumControlsOrModifiersPerName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Upper limit on the number of controls or modifiers that will be created using the same name (which\n\x09 * will get a numerical postfix). When this limit is reached a warning will be issued  and the control \n\x09 * or modifier won't be created. This is to avoid problems if controls or modifiers are being created \n\x09 * dynamically, and can generally be a \"moderately large\" number, depending on how many controls or \n\x09 * modifiers you expect to create.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsControlComponent.h" },
		{ "ToolTip", "Upper limit on the number of controls or modifiers that will be created using the same name (which\nwill get a numerical postfix). When this limit is reached a warning will be issued  and the control\nor modifier won't be created. This is to avoid problems if controls or modifiers are being created\ndynamically, and can generally be a \"moderately large\" number, depending on how many controls or\nmodifiers you expect to create." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_MaxNumControlsOrModifiersPerName = { "MaxNumControlsOrModifiersPerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsControlComponent, MaxNumControlsOrModifiersPerName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_MaxNumControlsOrModifiersPerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_MaxNumControlsOrModifiersPerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsControlComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_TeleportRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VisualizationSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugControlDetailFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_DebugBodyModifierDetailFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_VelocityPredictionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_MaxNumControlsOrModifiersPerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsControlComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsControlComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsControlComponent_Statics::ClassParams = {
		&UPhysicsControlComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsControlComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsControlComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsControlComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton, Z_Construct_UClass_UPhysicsControlComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UClass* StaticClass<UPhysicsControlComponent>()
	{
		return UPhysicsControlComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsControlComponent);
	UPhysicsControlComponent::~UPhysicsControlComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::EnumInfo[] = {
		{ EPhysicsControlType_StaticEnum, TEXT("EPhysicsControlType"), &Z_Registration_Info_UEnum_EPhysicsControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3620377434U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsControlComponent, UPhysicsControlComponent::StaticClass, TEXT("UPhysicsControlComponent"), &Z_Registration_Info_UClass_UPhysicsControlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsControlComponent), 2991958777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_434887225(TEXT("/Script/PhysicsControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
