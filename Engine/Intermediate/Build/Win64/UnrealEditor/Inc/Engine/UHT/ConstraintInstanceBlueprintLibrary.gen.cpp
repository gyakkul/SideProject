// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintInstanceBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UConstraintInstanceBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execCopyParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_SourceAccessor);
		P_GET_UBOOL(Z_Param_bKeepPosition);
		P_GET_UBOOL(Z_Param_bKeepRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::CopyParams(Z_Param_Out_Accessor,Z_Param_Out_SourceAccessor,Z_Param_bKeepPosition,Z_Param_bKeepRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularDriveParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPositionStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutVelocityStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularDriveParams(Z_Param_Out_Accessor,Z_Param_Out_OutPositionStrength,Z_Param_Out_OutVelocityStrength,Z_Param_Out_OutForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularDriveParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularDriveParams(Z_Param_Out_Accessor,Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularVelocityTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularVelocityTarget(Z_Param_Out_Accessor,Z_Param_Out_OutVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularVelocityTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularVelocityTarget(Z_Param_Out_Accessor,Z_Param_Out_InVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularOrientationTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularOrientationTarget(Z_Param_Out_Accessor,Z_Param_Out_OutPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularOrientationTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularOrientationTarget(Z_Param_Out_Accessor,Z_Param_Out_InPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularDriveMode)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutDriveMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularDriveMode(Z_Param_Out_Accessor,(TEnumAsByte<EAngularDriveMode::Type>&)(Z_Param_Out_OutDriveMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularDriveMode)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FByteProperty,Z_Param_DriveMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularDriveMode(Z_Param_Out_Accessor,EAngularDriveMode::Type(Z_Param_DriveMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveSLERP)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveSLERP(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveSLERP)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveSLERP(Z_Param_Out_Accessor,Z_Param_bEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveTwistAndSwing)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableTwistDrive);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveTwistAndSwing(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableTwistDrive,Z_Param_Out_bOutEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveTwistAndSwing)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveTwistAndSwing(Z_Param_Out_Accessor,Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetOrientationDriveSLERP)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetOrientationDriveSLERP(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetOrientationDriveSLERP)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableSLERP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetOrientationDriveSLERP(Z_Param_Out_Accessor,Z_Param_bEnableSLERP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetOrientationDriveTwistAndSwing)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableTwistDrive);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetOrientationDriveTwistAndSwing(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableTwistDrive,Z_Param_Out_bOutEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetOrientationDriveTwistAndSwing)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetOrientationDriveTwistAndSwing(Z_Param_Out_Accessor,Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearDriveParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPositionStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutVelocityStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearDriveParams(Z_Param_Out_Accessor,Z_Param_Out_OutPositionStrength,Z_Param_Out_OutVelocityStrength,Z_Param_Out_OutForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearDriveParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearDriveParams(Z_Param_Out_Accessor,Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearVelocityTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearVelocityTarget(Z_Param_Out_Accessor,Z_Param_Out_OutVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearVelocityTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearVelocityTarget(Z_Param_Out_Accessor,Z_Param_Out_InVelTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearPositionTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearPositionTarget(Z_Param_Out_Accessor,Z_Param_Out_OutPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearPositionTarget)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearPositionTarget(Z_Param_Out_Accessor,Z_Param_Out_InPosTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearVelocityDrive)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveX);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveY);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearVelocityDrive(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableDriveX,Z_Param_Out_bOutEnableDriveY,Z_Param_Out_bOutEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearVelocityDrive)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableDriveX);
		P_GET_UBOOL(Z_Param_bEnableDriveY);
		P_GET_UBOOL(Z_Param_bEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearVelocityDrive(Z_Param_Out_Accessor,Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearPositionDrive)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveX);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveY);
		P_GET_UBOOL_REF(Z_Param_Out_bOutEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearPositionDrive(Z_Param_Out_Accessor,Z_Param_Out_bOutEnableDriveX,Z_Param_Out_bOutEnableDriveY,Z_Param_Out_bOutEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearPositionDrive)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableDriveX);
		P_GET_UBOOL(Z_Param_bEnableDriveY);
		P_GET_UBOOL(Z_Param_bEnableDriveZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearPositionDrive(Z_Param_Out_Accessor,Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularPlasticity)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bAngularPlasticity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AngularPlasticityThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularPlasticity(Z_Param_Out_Accessor,Z_Param_Out_bAngularPlasticity,Z_Param_Out_AngularPlasticityThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularPlasticity)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bAngularPlasticity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularPlasticityThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularPlasticity(Z_Param_Out_Accessor,Z_Param_bAngularPlasticity,Z_Param_AngularPlasticityThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularBreakable)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bAngularBreakable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AngularBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularBreakable(Z_Param_Out_Accessor,Z_Param_Out_bAngularBreakable,Z_Param_Out_AngularBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularBreakable)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bAngularBreakable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularBreakable(Z_Param_Out_Accessor,Z_Param_bAngularBreakable,Z_Param_AngularBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularSoftTwistLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bSoftTwistLimit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimitStiffness);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimitDamping);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimitRestitution);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularSoftTwistLimitParams(Z_Param_Out_Accessor,Z_Param_Out_bSoftTwistLimit,Z_Param_Out_TwistLimitStiffness,Z_Param_Out_TwistLimitDamping,Z_Param_Out_TwistLimitRestitution,Z_Param_Out_TwistLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularSoftTwistLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bSoftTwistLimit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitRestitution);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularSoftTwistLimitParams(Z_Param_Out_Accessor,Z_Param_bSoftTwistLimit,Z_Param_TwistLimitStiffness,Z_Param_TwistLimitDamping,Z_Param_TwistLimitRestitution,Z_Param_TwistLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularSoftSwingLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bSoftSwingLimit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SwingLimitStiffness);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SwingLimitDamping);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SwingLimitRestitution);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SwingLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularSoftSwingLimitParams(Z_Param_Out_Accessor,Z_Param_Out_bSoftSwingLimit,Z_Param_Out_SwingLimitStiffness,Z_Param_Out_SwingLimitDamping,Z_Param_Out_SwingLimitRestitution,Z_Param_Out_SwingLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularSoftSwingLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bSoftSwingLimit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SwingLimitStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SwingLimitDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SwingLimitRestitution);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SwingLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularSoftSwingLimitParams(Z_Param_Out_Accessor,Z_Param_bSoftSwingLimit,Z_Param_SwingLimitStiffness,Z_Param_SwingLimitDamping,Z_Param_SwingLimitRestitution,Z_Param_SwingLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAngularLimits)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Swing1MotionType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing1LimitAngle);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Swing2MotionType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing2LimitAngle);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_TwistMotionType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAngularLimits(Z_Param_Out_Accessor,(TEnumAsByte<EAngularConstraintMotion>&)(Z_Param_Out_Swing1MotionType),Z_Param_Out_Swing1LimitAngle,(TEnumAsByte<EAngularConstraintMotion>&)(Z_Param_Out_Swing2MotionType),Z_Param_Out_Swing2LimitAngle,(TEnumAsByte<EAngularConstraintMotion>&)(Z_Param_Out_TwistMotionType),Z_Param_Out_TwistLimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetAngularLimits)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FByteProperty,Z_Param_Swing1MotionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing1LimitAngle);
		P_GET_PROPERTY(FByteProperty,Z_Param_Swing2MotionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing2LimitAngle);
		P_GET_PROPERTY(FByteProperty,Z_Param_TwistMotionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetAngularLimits(Z_Param_Out_Accessor,EAngularConstraintMotion(Z_Param_Swing1MotionType),Z_Param_Swing1LimitAngle,EAngularConstraintMotion(Z_Param_Swing2MotionType),Z_Param_Swing2LimitAngle,EAngularConstraintMotion(Z_Param_TwistMotionType),Z_Param_TwistLimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetContactTransferScale)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ContactTransferScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetContactTransferScale(Z_Param_Out_Accessor,Z_Param_ContactTransferScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetContactTransferScale)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ContactTransferScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetContactTransferScale(Z_Param_Out_Accessor,Z_Param_Out_ContactTransferScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearPlasticity)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bLinearPlasticity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearPlasticityThreshold);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_PlasticityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearPlasticity(Z_Param_Out_Accessor,Z_Param_Out_bLinearPlasticity,Z_Param_Out_LinearPlasticityThreshold,(TEnumAsByte<EConstraintPlasticityType>&)(Z_Param_Out_PlasticityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearPlasticity)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bLinearPlasticity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearPlasticityThreshold);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlasticityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearPlasticity(Z_Param_Out_Accessor,Z_Param_bLinearPlasticity,Z_Param_LinearPlasticityThreshold,EConstraintPlasticityType(Z_Param_PlasticityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearBreakable)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bLinearBreakable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearBreakable(Z_Param_Out_Accessor,Z_Param_Out_bLinearBreakable,Z_Param_Out_LinearBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearBreakable)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bLinearBreakable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearBreakable(Z_Param_Out_Accessor,Z_Param_bLinearBreakable,Z_Param_LinearBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearSoftLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bSoftLinearLimit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimitStiffness);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimitDamping);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimitRestitution);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearSoftLimitParams(Z_Param_Out_Accessor,Z_Param_Out_bSoftLinearLimit,Z_Param_Out_LinearLimitStiffness,Z_Param_Out_LinearLimitDamping,Z_Param_Out_LinearLimitRestitution,Z_Param_Out_LinearLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearSoftLimitParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bSoftLinearLimit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearLimitStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearLimitDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearLimitRestitution);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearLimitContactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearSoftLimitParams(Z_Param_Out_Accessor,Z_Param_bSoftLinearLimit,Z_Param_LinearLimitStiffness,Z_Param_LinearLimitDamping,Z_Param_LinearLimitRestitution,Z_Param_LinearLimitContactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetLinearLimits)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_XMotion);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_YMotion);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ZMotion);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetLinearLimits(Z_Param_Out_Accessor,(TEnumAsByte<ELinearConstraintMotion>&)(Z_Param_Out_XMotion),(TEnumAsByte<ELinearConstraintMotion>&)(Z_Param_Out_YMotion),(TEnumAsByte<ELinearConstraintMotion>&)(Z_Param_Out_ZMotion),Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetLinearLimits)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY(FByteProperty,Z_Param_XMotion);
		P_GET_PROPERTY(FByteProperty,Z_Param_YMotion);
		P_GET_PROPERTY(FByteProperty,Z_Param_ZMotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetLinearLimits(Z_Param_Out_Accessor,ELinearConstraintMotion(Z_Param_XMotion),ELinearConstraintMotion(Z_Param_YMotion),ELinearConstraintMotion(Z_Param_ZMotion),Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetMassConditioningEnabled)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintInstanceBlueprintLibrary::GetMassConditioningEnabled(Z_Param_Out_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetMassConditioningEnabled)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableMassConditioning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetMassConditioningEnabled(Z_Param_Out_Accessor,Z_Param_bEnableMassConditioning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetParentDominates)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintInstanceBlueprintLibrary::GetParentDominates(Z_Param_Out_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetParentDominates)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bParentDominates);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetParentDominates(Z_Param_Out_Accessor,Z_Param_bParentDominates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetProjectionParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL_REF(Z_Param_Out_bEnableProjection);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ProjectionLinearAlpha);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ProjectionAngularAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetProjectionParams(Z_Param_Out_Accessor,Z_Param_Out_bEnableProjection,Z_Param_Out_ProjectionLinearAlpha,Z_Param_Out_ProjectionAngularAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetProjectionParams)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bEnableProjection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionLinearAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionAngularAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetProjectionParams(Z_Param_Out_Accessor,Z_Param_bEnableProjection,Z_Param_ProjectionLinearAlpha,Z_Param_ProjectionAngularAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetDisableCollsion)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintInstanceBlueprintLibrary::GetDisableCollsion(Z_Param_Out_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execSetDisableCollision)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_UBOOL(Z_Param_bDisableCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::SetDisableCollision(Z_Param_Out_Accessor,Z_Param_bDisableCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintInstanceBlueprintLibrary::execGetAttachedBodyNames)
	{
		P_GET_STRUCT_REF(FConstraintInstanceAccessor,Z_Param_Out_Accessor);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParentBody);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ChildBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstraintInstanceBlueprintLibrary::GetAttachedBodyNames(Z_Param_Out_Accessor,Z_Param_Out_ParentBody,Z_Param_Out_ChildBody);
		P_NATIVE_END;
	}
	void UConstraintInstanceBlueprintLibrary::StaticRegisterNativesUConstraintInstanceBlueprintLibrary()
	{
		UClass* Class = UConstraintInstanceBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyParams", &UConstraintInstanceBlueprintLibrary::execCopyParams },
			{ "GetAngularBreakable", &UConstraintInstanceBlueprintLibrary::execGetAngularBreakable },
			{ "GetAngularDriveMode", &UConstraintInstanceBlueprintLibrary::execGetAngularDriveMode },
			{ "GetAngularDriveParams", &UConstraintInstanceBlueprintLibrary::execGetAngularDriveParams },
			{ "GetAngularLimits", &UConstraintInstanceBlueprintLibrary::execGetAngularLimits },
			{ "GetAngularOrientationTarget", &UConstraintInstanceBlueprintLibrary::execGetAngularOrientationTarget },
			{ "GetAngularPlasticity", &UConstraintInstanceBlueprintLibrary::execGetAngularPlasticity },
			{ "GetAngularSoftSwingLimitParams", &UConstraintInstanceBlueprintLibrary::execGetAngularSoftSwingLimitParams },
			{ "GetAngularSoftTwistLimitParams", &UConstraintInstanceBlueprintLibrary::execGetAngularSoftTwistLimitParams },
			{ "GetAngularVelocityDriveSLERP", &UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveSLERP },
			{ "GetAngularVelocityDriveTwistAndSwing", &UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveTwistAndSwing },
			{ "GetAngularVelocityTarget", &UConstraintInstanceBlueprintLibrary::execGetAngularVelocityTarget },
			{ "GetAttachedBodyNames", &UConstraintInstanceBlueprintLibrary::execGetAttachedBodyNames },
			{ "GetContactTransferScale", &UConstraintInstanceBlueprintLibrary::execGetContactTransferScale },
			{ "GetDisableCollsion", &UConstraintInstanceBlueprintLibrary::execGetDisableCollsion },
			{ "GetLinearBreakable", &UConstraintInstanceBlueprintLibrary::execGetLinearBreakable },
			{ "GetLinearDriveParams", &UConstraintInstanceBlueprintLibrary::execGetLinearDriveParams },
			{ "GetLinearLimits", &UConstraintInstanceBlueprintLibrary::execGetLinearLimits },
			{ "GetLinearPlasticity", &UConstraintInstanceBlueprintLibrary::execGetLinearPlasticity },
			{ "GetLinearPositionDrive", &UConstraintInstanceBlueprintLibrary::execGetLinearPositionDrive },
			{ "GetLinearPositionTarget", &UConstraintInstanceBlueprintLibrary::execGetLinearPositionTarget },
			{ "GetLinearSoftLimitParams", &UConstraintInstanceBlueprintLibrary::execGetLinearSoftLimitParams },
			{ "GetLinearVelocityDrive", &UConstraintInstanceBlueprintLibrary::execGetLinearVelocityDrive },
			{ "GetLinearVelocityTarget", &UConstraintInstanceBlueprintLibrary::execGetLinearVelocityTarget },
			{ "GetMassConditioningEnabled", &UConstraintInstanceBlueprintLibrary::execGetMassConditioningEnabled },
			{ "GetOrientationDriveSLERP", &UConstraintInstanceBlueprintLibrary::execGetOrientationDriveSLERP },
			{ "GetOrientationDriveTwistAndSwing", &UConstraintInstanceBlueprintLibrary::execGetOrientationDriveTwistAndSwing },
			{ "GetParentDominates", &UConstraintInstanceBlueprintLibrary::execGetParentDominates },
			{ "GetProjectionParams", &UConstraintInstanceBlueprintLibrary::execGetProjectionParams },
			{ "SetAngularBreakable", &UConstraintInstanceBlueprintLibrary::execSetAngularBreakable },
			{ "SetAngularDriveMode", &UConstraintInstanceBlueprintLibrary::execSetAngularDriveMode },
			{ "SetAngularDriveParams", &UConstraintInstanceBlueprintLibrary::execSetAngularDriveParams },
			{ "SetAngularLimits", &UConstraintInstanceBlueprintLibrary::execSetAngularLimits },
			{ "SetAngularOrientationTarget", &UConstraintInstanceBlueprintLibrary::execSetAngularOrientationTarget },
			{ "SetAngularPlasticity", &UConstraintInstanceBlueprintLibrary::execSetAngularPlasticity },
			{ "SetAngularSoftSwingLimitParams", &UConstraintInstanceBlueprintLibrary::execSetAngularSoftSwingLimitParams },
			{ "SetAngularSoftTwistLimitParams", &UConstraintInstanceBlueprintLibrary::execSetAngularSoftTwistLimitParams },
			{ "SetAngularVelocityDriveSLERP", &UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveSLERP },
			{ "SetAngularVelocityDriveTwistAndSwing", &UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveTwistAndSwing },
			{ "SetAngularVelocityTarget", &UConstraintInstanceBlueprintLibrary::execSetAngularVelocityTarget },
			{ "SetContactTransferScale", &UConstraintInstanceBlueprintLibrary::execSetContactTransferScale },
			{ "SetDisableCollision", &UConstraintInstanceBlueprintLibrary::execSetDisableCollision },
			{ "SetLinearBreakable", &UConstraintInstanceBlueprintLibrary::execSetLinearBreakable },
			{ "SetLinearDriveParams", &UConstraintInstanceBlueprintLibrary::execSetLinearDriveParams },
			{ "SetLinearLimits", &UConstraintInstanceBlueprintLibrary::execSetLinearLimits },
			{ "SetLinearPlasticity", &UConstraintInstanceBlueprintLibrary::execSetLinearPlasticity },
			{ "SetLinearPositionDrive", &UConstraintInstanceBlueprintLibrary::execSetLinearPositionDrive },
			{ "SetLinearPositionTarget", &UConstraintInstanceBlueprintLibrary::execSetLinearPositionTarget },
			{ "SetLinearSoftLimitParams", &UConstraintInstanceBlueprintLibrary::execSetLinearSoftLimitParams },
			{ "SetLinearVelocityDrive", &UConstraintInstanceBlueprintLibrary::execSetLinearVelocityDrive },
			{ "SetLinearVelocityTarget", &UConstraintInstanceBlueprintLibrary::execSetLinearVelocityTarget },
			{ "SetMassConditioningEnabled", &UConstraintInstanceBlueprintLibrary::execSetMassConditioningEnabled },
			{ "SetOrientationDriveSLERP", &UConstraintInstanceBlueprintLibrary::execSetOrientationDriveSLERP },
			{ "SetOrientationDriveTwistAndSwing", &UConstraintInstanceBlueprintLibrary::execSetOrientationDriveTwistAndSwing },
			{ "SetParentDominates", &UConstraintInstanceBlueprintLibrary::execSetParentDominates },
			{ "SetProjectionParams", &UConstraintInstanceBlueprintLibrary::execSetProjectionParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FConstraintInstanceAccessor SourceAccessor;
			bool bKeepPosition;
			bool bKeepRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAccessor;
		static void NewProp_bKeepPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPosition;
		static void NewProp_bKeepRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_SourceAccessor = { "SourceAccessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms, SourceAccessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepPosition_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms*)Obj)->bKeepPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepPosition = { "bKeepPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepRotation_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms*)Obj)->bKeepRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepRotation = { "bKeepRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_SourceAccessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::NewProp_bKeepRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Copies all properties from one constraint to another\n\x09* @param Accessor\x09""Constraint accessor to write to\n\x09* @param SourceAccessor Constraint accessor to read from\n\x09* @param bKeepPosition\x09Whether to keep original constraint positions\n\x09* @param bKeepRotation\x09Whether to keep original constraint rotations\n\x09*/" },
		{ "CPP_Default_bKeepPosition", "true" },
		{ "CPP_Default_bKeepRotation", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Copies all properties from one constraint to another\n@param Accessor       Constraint accessor to write to\n@param SourceAccessor Constraint accessor to read from\n@param bKeepPosition  Whether to keep original constraint positions\n@param bKeepRotation  Whether to keep original constraint rotations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "CopyParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::ConstraintInstanceBlueprintLibrary_eventCopyParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bAngularBreakable;
			float AngularBreakThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_bAngularBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::NewProp_AngularBreakThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Angular Breakable properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bAngularBreakable\x09\x09Whether it is possible to break the joint with angular force\n\x09*\x09@param AngularBreakThreshold\x09Torque needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Angular Breakable properties\n     @param Accessor                                 Constraint accessor to query\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularBreakable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularBreakable_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularDriveMode_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<EAngularDriveMode::Type> OutDriveMode;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutDriveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveMode_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::NewProp_OutDriveMode = { "OutDriveMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveMode_Parms, OutDriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(nullptr, 0) }; // 315531254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::NewProp_OutDriveMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the angular drive mode ( SLERP or Twist And Swing)\n\x09*\x09@param Accessor\x09\x09""Constraint accessor to query\n\x09*\x09@param OutDriveMode\x09The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the angular drive mode ( SLERP or Twist And Swing)\n     @param Accessor         Constraint accessor to query\n     @param OutDriveMode     The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularDriveMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularDriveMode_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float OutPositionStrength;
			float OutVelocityStrength;
			float OutForceLimit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPositionStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutVelocityStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutForceLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutPositionStrength = { "OutPositionStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms, OutPositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutVelocityStrength = { "OutVelocityStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms, OutVelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutForceLimit = { "OutForceLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms, OutForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutPositionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutVelocityStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::NewProp_OutForceLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the drive params for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutPositionStrength\x09Positional strength for the drive (stiffness)\n\x09*\x09@param OutVelocityStrength \x09Velocity strength of the drive (damping)\n\x09*\x09@param OutForceLimit\x09\x09Max force applied by the drive\n\x09*/" },
		{ "Keywords", "motor target orientation velocity strength max force" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the drive params for the angular drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutPositionStrength      Positional strength for the drive (stiffness)\n     @param OutVelocityStrength      Velocity strength of the drive (damping)\n     @param OutForceLimit            Max force applied by the drive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularDriveParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularDriveParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<EAngularConstraintMotion> Swing1MotionType;
			float Swing1LimitAngle;
			TEnumAsByte<EAngularConstraintMotion> Swing2MotionType;
			float Swing2LimitAngle;
			TEnumAsByte<EAngularConstraintMotion> TwistMotionType;
			float TwistLimitAngle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Swing1MotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Swing2MotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistMotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing1MotionType = { "Swing1MotionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, Swing1MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing2MotionType = { "Swing2MotionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, Swing2MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_TwistMotionType = { "TwistMotionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, TwistMotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing1MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing2MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_Swing2LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_TwistMotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::NewProp_TwistLimitAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Angular Motion Ranges\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param Swing1MotionType\x09\x09Type of swing motion ( first axis )\n\x09*\x09@param Swing1LimitAngle\x09\x09Size of limit in degrees in [0, 180] range\n\x09*   @param Swing2MotionType\x09\x09Type of swing motion ( second axis )\n\x09*\x09@param Swing2LimitAngle\x09\x09Size of limit in degrees in [0, 180] range\n\x09*   @param TwistMotionType\x09\x09Type of twist motion\n\x09*\x09@param TwistLimitAngle\x09\x09Size of limit in degrees in [0, 180] range\n\x09*/" },
		{ "Keywords", "swing twist motion free limited locked" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Angular Motion Ranges\n     @param Accessor                         Constraint accessor to query\n     @param Swing1MotionType         Type of swing motion ( first axis )\n     @param Swing1LimitAngle         Size of limit in degrees in [0, 180] range\n @param Swing2MotionType             Type of swing motion ( second axis )\n     @param Swing2LimitAngle         Size of limit in degrees in [0, 180] range\n @param TwistMotionType              Type of twist motion\n     @param TwistLimitAngle          Size of limit in degrees in [0, 180] range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularLimits_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularOrientationTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FRotator OutPosTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularOrientationTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::NewProp_OutPosTarget = { "OutPosTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularOrientationTarget_Parms, OutPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::NewProp_OutPosTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the target orientation for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutPosTarget\x09\x09\x09Target orientation\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the target orientation for the angular drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutPosTarget                     Target orientation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularOrientationTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularOrientationTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bAngularPlasticity;
			float AngularPlasticityThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bAngularPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularPlasticity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularPlasticityThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms*)Obj)->bAngularPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_bAngularPlasticity = { "bAngularPlasticity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold = { "AngularPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms, AngularPlasticityThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_bAngularPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Angular Plasticity properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bAngularPlasticity\x09\x09\x09Whether it is possible to reset the target angle from the angular displacement\n\x09*\x09@param AngularPlasticityThreshold\x09""Degrees needed to reset the rest state of the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Angular Plasticity properties\n     @param Accessor                                         Constraint accessor to query\n     @param bAngularPlasticity                       Whether it is possible to reset the target angle from the angular displacement\n     @param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularPlasticity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularPlasticity_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftSwingLimit;
			float SwingLimitStiffness;
			float SwingLimitDamping;
			float SwingLimitRestitution;
			float SwingLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftSwingLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftSwingLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms*)Obj)->bSoftSwingLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit = { "bSoftSwingLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms, SwingLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms, SwingLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitRestitution = { "SwingLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms, SwingLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitContactDistance = { "SwingLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms, SwingLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Angular Soft Swing Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09* *\x09@param bSoftSwingLimit\x09\x09\x09\x09True is the swing limit is soft\n\x09*\x09@param SwingLimitStiffness\x09\x09\x09Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param SwingLimitDamping\x09\x09\x09""Damping of the soft swing limit. Only used when Soft limit is on ( positive value )\n\x09*   @param SwingLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param SwingLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Angular Soft Swing Limit parameters\n     @param Accessor                                         Constraint accessor to query\n*     @param bSoftSwingLimit                          True is the swing limit is soft\n     @param SwingLimitStiffness                      Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )\n     @param SwingLimitDamping                        Damping of the soft swing limit. Only used when Soft limit is on ( positive value )\n @param SwingLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param SwingLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularSoftSwingLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularSoftSwingLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftTwistLimit;
			float TwistLimitStiffness;
			float TwistLimitDamping;
			float TwistLimitRestitution;
			float TwistLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftTwistLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftTwistLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms*)Obj)->bSoftTwistLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit = { "bSoftTwistLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms, TwistLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms, TwistLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitRestitution = { "TwistLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms, TwistLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitContactDistance = { "TwistLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms, TwistLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Angular Soft Twist Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09* *\x09@param bSoftTwistLimit\x09\x09\x09\x09True is the Twist limit is soft\n\x09*\x09@param TwistLimitStiffness\x09\x09\x09Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param TwistLimitDamping\x09\x09\x09""Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )\n\x09*   @param TwistLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param TwistLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Angular Soft Twist Limit parameters\n     @param Accessor                                         Constraint accessor to query\n*     @param bSoftTwistLimit                          True is the Twist limit is soft\n     @param TwistLimitStiffness                      Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )\n     @param TwistLimitDamping                        Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )\n @param TwistLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param TwistLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularSoftTwistLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularSoftTwistLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveSLERP_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableSLERP;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableSLERP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableSLERP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveSLERP_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_bOutEnableSLERP_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveSLERP_Parms*)Obj)->bOutEnableSLERP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_bOutEnableSLERP = { "bOutEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveSLERP_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_bOutEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::NewProp_bOutEnableSLERP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether the angular velocity slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableSLERP\x09\x09Indicates whether the SLERP drive is enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether the angular velocity slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableSLERP          Indicates whether the SLERP drive is enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularVelocityDriveSLERP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveSLERP_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableTwistDrive;
			bool bOutEnableSwingDrive;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableTwistDrive;
		static void NewProp_bOutEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableSwingDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bOutEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive = { "bOutEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bOutEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive = { "bOutEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether angular velocity twist and swing drive is enabled or not. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*   @param bOutEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether angular velocity twist and swing drive is enabled or not. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableTwistDrive     Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n @param bOutEnableSwingDrive Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularVelocityDriveTwistAndSwing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityDriveTwistAndSwing_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector OutVelTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVelTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::NewProp_OutVelTarget = { "OutVelTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityTarget_Parms, OutVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::NewProp_OutVelTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the target velocity for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutVelTarget\x09\x09\x09Target velocity\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the target velocity for the angular drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutVelTarget                     Target velocity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAngularVelocityTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::ConstraintInstanceBlueprintLibrary_eventGetAngularVelocityTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetAttachedBodyNames_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FName ParentBody;
			FName ChildBody;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBody;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAttachedBodyNames_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_ParentBody = { "ParentBody", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAttachedBodyNames_Parms, ParentBody), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_ChildBody = { "ChildBody", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetAttachedBodyNames_Parms, ChildBody), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_ParentBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::NewProp_ChildBody,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Attached body names \n\x09*\x09@param Accessor\x09\x09""Constraint accessor to query\n\x09*\x09@param ParentBody\x09Parent body name of the constraint\n\x09*\x09@param ChildBody\x09""Child body name of the constraint\n\x09*/" },
		{ "Keywords", "rigid body name name parent child" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Attached body names\n     @param Accessor         Constraint accessor to query\n     @param ParentBody       Parent body name of the constraint\n     @param ChildBody        Child body name of the constraint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetAttachedBodyNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::ConstraintInstanceBlueprintLibrary_eventGetAttachedBodyNames_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetContactTransferScale_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float ContactTransferScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactTransferScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetContactTransferScale_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetContactTransferScale_Parms, ContactTransferScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::NewProp_ContactTransferScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Contact Transfer Scale properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param ContactTransferScale\x09\x09\x09Scale for transfer of child energy to parent.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Contact Transfer Scale properties\n     @param Accessor                                         Constraint accessor to query\n     @param ContactTransferScale                     Scale for transfer of child energy to parent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetContactTransferScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::ConstraintInstanceBlueprintLibrary_eventGetContactTransferScale_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetDisableCollsion_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetDisableCollsion_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetDisableCollsion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetDisableCollsion_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether bodies attched to the constraint can collide or not\n\x09*\x09@param Accessor\x09\x09""Constraint accessor to query\n\x09*/" },
		{ "Keywords", "disable enable collision" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether bodies attched to the constraint can collide or not\n     @param Accessor         Constraint accessor to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetDisableCollsion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::ConstraintInstanceBlueprintLibrary_eventGetDisableCollsion_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bLinearBreakable;
			float LinearBreakThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_bLinearBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::NewProp_LinearBreakThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Linear Breakable properties\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bLinearBreakable\x09\x09Whether it is possible to break the joint with linear force\n\x09*\x09@param LinearBreakThreshold\x09""Force needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Linear Breakable properties\n     @param Accessor                         Constraint accessor to query\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearBreakable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearBreakable_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float OutPositionStrength;
			float OutVelocityStrength;
			float OutForceLimit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPositionStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutVelocityStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutForceLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutPositionStrength = { "OutPositionStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms, OutPositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutVelocityStrength = { "OutVelocityStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms, OutVelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutForceLimit = { "OutForceLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms, OutForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutPositionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutVelocityStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::NewProp_OutForceLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the drive params for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutPositionStrength\x09Positional strength for the drive (stiffness)\n\x09*\x09@param OutVelocityStrength\x09Velocity strength of the drive (damping)\n\x09*\x09@param OutForceLimit\x09\x09Max force applied by the drive\n\x09*/" },
		{ "Keywords", "motor position velocity target strength max force" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the drive params for the linear drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutPositionStrength      Positional strength for the drive (stiffness)\n     @param OutVelocityStrength      Velocity strength of the drive (damping)\n     @param OutForceLimit            Max force applied by the drive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearDriveParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearDriveParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<ELinearConstraintMotion> XMotion;
			TEnumAsByte<ELinearConstraintMotion> YMotion;
			TEnumAsByte<ELinearConstraintMotion> ZMotion;
			float Limit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_XMotion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_YMotion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZMotion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_XMotion = { "XMotion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms, XMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_YMotion = { "YMotion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms, YMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_ZMotion = { "ZMotion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms, ZMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_XMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_YMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_ZMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Linear Motion Ranges\n\x09*\x09@param Accessor\x09""Constraint accessor to query\n\x09*\x09@param XMotion\x09Type of motion along the X axis\n\x09*\x09@param YMotion\x09Type of motion along the Y axis\n\x09*\x09@param ZMotion\x09Type of motion along the Z axis\n\x09*\x09@param Limit\x09linear limit applied to all axis\n\x09*/" },
		{ "Keywords", "motion free limited locked linear angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Linear Motion Ranges\n     @param Accessor Constraint accessor to query\n     @param XMotion  Type of motion along the X axis\n     @param YMotion  Type of motion along the Y axis\n     @param ZMotion  Type of motion along the Z axis\n     @param Limit    linear limit applied to all axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearLimits_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bLinearPlasticity;
			float LinearPlasticityThreshold;
			TEnumAsByte<EConstraintPlasticityType> PlasticityType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bLinearPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPlasticity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearPlasticityThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlasticityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms*)Obj)->bLinearPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_bLinearPlasticity = { "bLinearPlasticity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold = { "LinearPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms, LinearPlasticityThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_PlasticityType = { "PlasticityType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms, PlasticityType), Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType, METADATA_PARAMS(nullptr, 0) }; // 3233059018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_bLinearPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::NewProp_PlasticityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Linear Plasticity properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bAngularPlasticity\x09\x09\x09Whether it is possible to reset the target position from the linear displacement\n\x09*\x09@param AngularPlasticityThreshold\x09""Delta from target needed to reset the target joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Linear Plasticity properties\n     @param Accessor                                         Constraint accessor to query\n     @param bAngularPlasticity                       Whether it is possible to reset the target position from the linear displacement\n     @param AngularPlasticityThreshold       Delta from target needed to reset the target joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearPlasticity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearPlasticity_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableDriveX;
			bool bOutEnableDriveY;
			bool bOutEnableDriveZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableDriveX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveX;
		static void NewProp_bOutEnableDriveY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveY;
		static void NewProp_bOutEnableDriveZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveX_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms*)Obj)->bOutEnableDriveX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveX = { "bOutEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveY_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms*)Obj)->bOutEnableDriveY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveY = { "bOutEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveZ_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms*)Obj)->bOutEnableDriveZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveZ = { "bOutEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::NewProp_bOutEnableDriveZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether linear position drive is enabled or not\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableDriveX\x09\x09Indicates whether the drive for the X-Axis is enabled\n\x09*\x09@param bOutEnableDriveY\x09\x09Indicates whether the drive for the Y-Axis is enabled\n\x09*\x09@param bOutEnableDriveZ\x09\x09Indicates whether the drive for the Z-Axis is enabled\n\x09*/" },
		{ "Keywords", "motor position target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether linear position drive is enabled or not\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableDriveX         Indicates whether the drive for the X-Axis is enabled\n     @param bOutEnableDriveY         Indicates whether the drive for the Y-Axis is enabled\n     @param bOutEnableDriveZ         Indicates whether the drive for the Z-Axis is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearPositionDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearPositionDrive_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearPositionTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector OutPosTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::NewProp_OutPosTarget = { "OutPosTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearPositionTarget_Parms, OutPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::NewProp_OutPosTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the target position for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutPosTarget\x09\x09\x09Target position\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the target position for the linear drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutPosTarget                     Target position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearPositionTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearPositionTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftLinearLimit;
			float LinearLimitStiffness;
			float LinearLimitDamping;
			float LinearLimitRestitution;
			float LinearLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftLinearLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms*)Obj)->bSoftLinearLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit = { "bSoftLinearLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms, LinearLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms, LinearLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitRestitution = { "LinearLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms, LinearLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitContactDistance = { "LinearLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms, LinearLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::NewProp_LinearLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets Constraint Linear Soft Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09* *\x09@param bSoftLinearLimit\x09\x09\x09\x09True is the Linear limit is soft\n\x09*\x09@param LinearLimitStiffness\x09\x09\x09Stiffness of the soft Linear limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param LinearLimitDamping\x09\x09\x09""Damping of the soft Linear limit. Only used when Soft limit is on ( positive value )\n\x09*   @param LinearLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param LinearLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets Constraint Linear Soft Limit parameters\n     @param Accessor                                         Constraint accessor to query\n*     @param bSoftLinearLimit                         True is the Linear limit is soft\n     @param LinearLimitStiffness                     Stiffness of the soft Linear limit. Only used when Soft limit is on ( positive value )\n     @param LinearLimitDamping                       Damping of the soft Linear limit. Only used when Soft limit is on ( positive value )\n @param LinearLimitRestitution               Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param LinearLimitContactDistance       Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearSoftLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearSoftLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableDriveX;
			bool bOutEnableDriveY;
			bool bOutEnableDriveZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableDriveX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveX;
		static void NewProp_bOutEnableDriveY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveY;
		static void NewProp_bOutEnableDriveZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableDriveZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveX_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms*)Obj)->bOutEnableDriveX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveX = { "bOutEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveY_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms*)Obj)->bOutEnableDriveY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveY = { "bOutEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveZ_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms*)Obj)->bOutEnableDriveZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveZ = { "bOutEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::NewProp_bOutEnableDriveZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether linear velocity drive is enabled or not\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableDriveX\x09\x09Indicates whether the drive for the X-Axis is enabled\n\x09*\x09@param bOutEnableDriveY\x09\x09Indicates whether the drive for the Y-Axis is enabled\n\x09*\x09@param bOutEnableDriveZ\x09\x09Indicates whether the drive for the Z-Axis is enabled\n\x09*/" },
		{ "Keywords", "motor velocity target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether linear velocity drive is enabled or not\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableDriveX         Indicates whether the drive for the X-Axis is enabled\n     @param bOutEnableDriveY         Indicates whether the drive for the Y-Axis is enabled\n     @param bOutEnableDriveZ         Indicates whether the drive for the Z-Axis is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearVelocityDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityDrive_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector OutVelTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVelTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::NewProp_OutVelTarget = { "OutVelTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityTarget_Parms, OutVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::NewProp_OutVelTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets the target velocity for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param OutVelTarget\x09\x09\x09Target velocity\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets the target velocity for the linear drive.\n     @param Accessor                         Constraint accessor to query\n     @param OutVelTarget                     Target velocity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetLinearVelocityTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::ConstraintInstanceBlueprintLibrary_eventGetLinearVelocityTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetMassConditioningEnabled_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetMassConditioningEnabled_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetMassConditioningEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetMassConditioningEnabled_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/**\n\x09 * @brief Gets whether mass conditioning is enabled for the constraint.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "@brief Gets whether mass conditioning is enabled for the constraint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetMassConditioningEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::ConstraintInstanceBlueprintLibrary_eventGetMassConditioningEnabled_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveSLERP_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableSLERP;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableSLERP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableSLERP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveSLERP_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_bOutEnableSLERP_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveSLERP_Parms*)Obj)->bOutEnableSLERP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_bOutEnableSLERP = { "bOutEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveSLERP_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_bOutEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::NewProp_bOutEnableSLERP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether the angular orientation slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableSLERP\x09\x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether the angular orientation slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableSLERP          Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetOrientationDriveSLERP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveSLERP_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bOutEnableTwistDrive;
			bool bOutEnableSwingDrive;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bOutEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableTwistDrive;
		static void NewProp_bOutEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutEnableSwingDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms*)Obj)->bOutEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive = { "bOutEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms*)Obj)->bOutEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive = { "bOutEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::NewProp_bOutEnableSwingDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether angular orientation drive are enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bOutEnableTwistDrive\x09Indicates whether the drive for the twist axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bOutEnableSwingDrive\x09Indicates whether the drive for the swing axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether angular orientation drive are enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param Accessor                         Constraint accessor to query\n     @param bOutEnableTwistDrive     Indicates whether the drive for the twist axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bOutEnableSwingDrive     Indicates whether the drive for the swing axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetOrientationDriveTwistAndSwing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::ConstraintInstanceBlueprintLibrary_eventGetOrientationDriveTwistAndSwing_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetParentDominates_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetParentDominates_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetParentDominates_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetParentDominates_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets whether the parent body is not affected by it's child motion\n\x09*\x09@param Accessor Constraint accessor to query\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether the parent body is not affected by it's child motion\n     @param Accessor Constraint accessor to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetParentDominates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::ConstraintInstanceBlueprintLibrary_eventGetParentDominates_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableProjection;
			float ProjectionLinearAlpha;
			float ProjectionAngularAlpha;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms*)Obj)->bEnableProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_ProjectionLinearAlpha = { "ProjectionLinearAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms, ProjectionLinearAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_ProjectionAngularAlpha = { "ProjectionAngularAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms, ProjectionAngularAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_bEnableProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_ProjectionLinearAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::NewProp_ProjectionAngularAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets projection parameters of the constraint\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09""Constraint accessor to query\n\x09*\x09@param bEnableProjection\x09\x09true to enable projection\n\x09*\x09@param ProjectionLinearAlpha\x09how much linear projection to apply in [0,1] range\n\x09*\x09@param ProjectionAngularAlpha\x09how much angular projection to apply in [0,1] range\n\x09*/" },
		{ "Keywords", "enable linear angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Gets projection parameters of the constraint\n     @param Accessor                                 Constraint accessor to query\n     @param bEnableProjection                true to enable projection\n     @param ProjectionLinearAlpha    how much linear projection to apply in [0,1] range\n     @param ProjectionAngularAlpha   how much angular projection to apply in [0,1] range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "GetProjectionParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::ConstraintInstanceBlueprintLibrary_eventGetProjectionParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bAngularBreakable;
			float AngularBreakThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_bAngularBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Angular Breakable properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bAngularBreakable\x09\x09Whether it is possible to break the joint with angular force\n\x09*\x09@param AngularBreakThreshold\x09Torque needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Angular Breakable properties\n     @param Accessor                                 Constraint accessor to change\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularBreakable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularBreakable_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularDriveMode_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<EAngularDriveMode::Type> DriveMode;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DriveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveMode_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::NewProp_DriveMode = { "DriveMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveMode_Parms, DriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(nullptr, 0) }; // 315531254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::NewProp_DriveMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Switches the angular drive mode between SLERP and Twist And Swing\n\x09*\x09@param Accessor\x09\x09""Constraint accessor to change\n\x09*\x09@param DriveMode\x09The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Switches the angular drive mode between SLERP and Twist And Swing\n     @param Accessor         Constraint accessor to change\n     @param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularDriveMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularDriveMode_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_PositionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_VelocityStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::NewProp_InForceLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the drive params for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09*\x09@param VelocityStrength \x09Velocity strength of the drive (damping)\n\x09*\x09@param InForceLimit\x09\x09\x09Max force applied by the drive\n\x09*/" },
		{ "Keywords", "motor target orientation velocity strength max force" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the drive params for the angular drive.\n     @param Accessor                         Constraint accessor to change\n     @param PositionStrength         Positional strength for the drive (stiffness)\n     @param VelocityStrength         Velocity strength of the drive (damping)\n     @param InForceLimit                     Max force applied by the drive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularDriveParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularDriveParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<EAngularConstraintMotion> Swing1MotionType;
			float Swing1LimitAngle;
			TEnumAsByte<EAngularConstraintMotion> Swing2MotionType;
			float Swing2LimitAngle;
			TEnumAsByte<EAngularConstraintMotion> TwistMotionType;
			float TwistLimitAngle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Swing1MotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Swing2MotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistMotionType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing1MotionType = { "Swing1MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, Swing1MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing2MotionType = { "Swing2MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, Swing2MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_TwistMotionType = { "TwistMotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, TwistMotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 2540577704
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing1MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing2MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_Swing2LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_TwistMotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::NewProp_TwistLimitAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets COnstraint Angular Motion Ranges\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param Swing1MotionType\x09\x09Type of swing motion ( first axis )\n\x09*\x09@param Swing1LimitAngle\x09\x09Size of limit in degrees in [0, 180] range\n\x09*   @param Swing2MotionType\x09\x09Type of swing motion ( second axis )\n\x09*\x09@param Swing2LimitAngle\x09\x09Size of limit in degrees in [0, 180] range\n\x09*   @param TwistMotionType\x09\x09Type of twist motion\n\x09*\x09@param TwistLimitAngle\x09\x09Size of limit in degrees in [0, 180] range\x09\n\x09*/" },
		{ "Keywords", "swing twist motion free limited locked" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets COnstraint Angular Motion Ranges\n     @param Accessor                         Constraint accessor to change\n     @param Swing1MotionType         Type of swing motion ( first axis )\n     @param Swing1LimitAngle         Size of limit in degrees in [0, 180] range\n @param Swing2MotionType             Type of swing motion ( second axis )\n     @param Swing2LimitAngle         Size of limit in degrees in [0, 180] range\n @param TwistMotionType              Type of twist motion\n     @param TwistLimitAngle          Size of limit in degrees in [0, 180] range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularLimits_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularOrientationTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FRotator InPosTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularOrientationTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularOrientationTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the target orientation for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param InPosTarget\x09\x09\x09Target orientation\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the target orientation for the angular drive.\n     @param Accessor                         Constraint accessor to change\n     @param InPosTarget                      Target orientation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularOrientationTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularOrientationTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bAngularPlasticity;
			float AngularPlasticityThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bAngularPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularPlasticity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularPlasticityThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms*)Obj)->bAngularPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity = { "bAngularPlasticity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold = { "AngularPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms, AngularPlasticityThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Angular Plasticity properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bAngularPlasticity\x09\x09\x09Whether it is possible to reset the target angle from the angular displacement\n\x09*\x09@param AngularPlasticityThreshold\x09""Degrees needed to reset the rest state of the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Angular Plasticity properties\n     @param Accessor                                         Constraint accessor to change\n     @param bAngularPlasticity                       Whether it is possible to reset the target angle from the angular displacement\n     @param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularPlasticity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularPlasticity_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftSwingLimit;
			float SwingLimitStiffness;
			float SwingLimitDamping;
			float SwingLimitRestitution;
			float SwingLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftSwingLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftSwingLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms*)Obj)->bSoftSwingLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit = { "bSoftSwingLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms, SwingLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms, SwingLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitRestitution = { "SwingLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms, SwingLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitContactDistance = { "SwingLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms, SwingLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_bSoftSwingLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::NewProp_SwingLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Angular Soft Swing Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09* *\x09@param bSoftSwingLimit\x09\x09\x09\x09True is the swing limit is soft\n\x09*\x09@param SwingLimitStiffness\x09\x09\x09Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param SwingLimitDamping\x09\x09\x09""Damping of the soft swing limit. Only used when Soft limit is on ( positive value )\n\x09*   @param SwingLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param SwingLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Angular Soft Swing Limit parameters\n     @param Accessor                                         Constraint accessor to change\n*     @param bSoftSwingLimit                          True is the swing limit is soft\n     @param SwingLimitStiffness                      Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )\n     @param SwingLimitDamping                        Damping of the soft swing limit. Only used when Soft limit is on ( positive value )\n @param SwingLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param SwingLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularSoftSwingLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularSoftSwingLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftTwistLimit;
			float TwistLimitStiffness;
			float TwistLimitDamping;
			float TwistLimitRestitution;
			float TwistLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftTwistLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftTwistLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms*)Obj)->bSoftTwistLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit = { "bSoftTwistLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms, TwistLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms, TwistLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitRestitution = { "TwistLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms, TwistLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitContactDistance = { "TwistLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms, TwistLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_bSoftTwistLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::NewProp_TwistLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Angular Soft Twist Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09* *\x09@param bSoftTwistLimit\x09\x09\x09\x09True is the twist limit is soft\n\x09*\x09@param TwistLimitStiffness\x09\x09\x09Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param TwistLimitDamping\x09\x09\x09""Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )\n\x09*   @param TwistLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param TwistLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Angular Soft Twist Limit parameters\n     @param Accessor                                         Constraint accessor to change\n*     @param bSoftTwistLimit                          True is the twist limit is soft\n     @param TwistLimitStiffness                      Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )\n     @param TwistLimitDamping                        Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )\n @param TwistLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param TwistLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularSoftTwistLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularSoftTwistLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveSLERP_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableSLERP;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveSLERP_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveSLERP_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableSLERP\x09\x09\x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n     @param Accessor                         Constraint accessor to change\n     @param bEnableSLERP                     Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularVelocityDriveSLERP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveSLERP_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param Accessor                         Constraint accessor to change\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularVelocityDriveTwistAndSwing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityDriveTwistAndSwing_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector InVelTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the target velocity for the angular drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param InVelTarget\x09\x09\x09Target velocity\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the target velocity for the angular drive.\n     @param Accessor                         Constraint accessor to change\n     @param InVelTarget                      Target velocity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetAngularVelocityTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::ConstraintInstanceBlueprintLibrary_eventSetAngularVelocityTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetContactTransferScale_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float ContactTransferScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactTransferScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetContactTransferScale_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetContactTransferScale_Parms, ContactTransferScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::NewProp_ContactTransferScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Set Contact Transfer Scale\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param ContactTransferScale\x09\x09\x09Set Contact Transfer Scale onto joints parent\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Set Contact Transfer Scale\n     @param Accessor                                         Constraint accessor to change\n     @param ContactTransferScale                     Set Contact Transfer Scale onto joints parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetContactTransferScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::ConstraintInstanceBlueprintLibrary_eventSetContactTransferScale_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetDisableCollision_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bDisableCollision;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetDisableCollision_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetDisableCollision_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::NewProp_bDisableCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets whether bodies attched to the constraint can collide or not\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bDisableCollision\x09true to disable collision between constrained bodies\n\x09*/" },
		{ "Keywords", "disable enable collision" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets whether bodies attched to the constraint can collide or not\n     @param Accessor                         Constraint accessor to change\n     @param bDisableCollision        true to disable collision between constrained bodies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetDisableCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::ConstraintInstanceBlueprintLibrary_eventSetDisableCollision_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bLinearBreakable;
			float LinearBreakThreshold;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_bLinearBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the Linear Breakable properties\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bLinearBreakable\x09\x09Whether it is possible to break the joint with linear force\n\x09*\x09@param LinearBreakThreshold\x09""Force needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Linear Breakable properties\n     @param Accessor                         Constraint accessor to change\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearBreakable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearBreakable_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_PositionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_VelocityStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::NewProp_InForceLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the drive params for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09*\x09@param VelocityStrength\x09\x09Velocity strength of the drive (damping)\n\x09*\x09@param InForceLimit\x09\x09\x09Max force applied by the drive\n\x09*/" },
		{ "Keywords", "motor position velocity target strength max force" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the drive params for the linear drive.\n     @param Accessor                         Constraint accessor to change\n     @param PositionStrength         Positional strength for the drive (stiffness)\n     @param VelocityStrength         Velocity strength of the drive (damping)\n     @param InForceLimit                     Max force applied by the drive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearDriveParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearDriveParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms
		{
			FConstraintInstanceAccessor Accessor;
			TEnumAsByte<ELinearConstraintMotion> XMotion;
			TEnumAsByte<ELinearConstraintMotion> YMotion;
			TEnumAsByte<ELinearConstraintMotion> ZMotion;
			float Limit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_XMotion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_YMotion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZMotion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_XMotion = { "XMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms, XMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_YMotion = { "YMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms, YMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_ZMotion = { "ZMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms, ZMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) }; // 266339221
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_XMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_YMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_ZMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Linear Motion Ranges\n\x09*\x09@param Accessor\x09""Constraint accessor to change\n\x09*\x09@param XMotion\x09Type of motion along the X axis\n\x09*\x09@param YMotion\x09Type of motion along the Y axis\n\x09*\x09@param ZMotion\x09Type of motion along the Z axis\n\x09*\x09@param Limit\x09linear limit to apply to all axis\n\x09*/" },
		{ "Keywords", "motion free limited locked linear angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Linear Motion Ranges\n     @param Accessor Constraint accessor to change\n     @param XMotion  Type of motion along the X axis\n     @param YMotion  Type of motion along the Y axis\n     @param ZMotion  Type of motion along the Z axis\n     @param Limit    linear limit to apply to all axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearLimits_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bLinearPlasticity;
			float LinearPlasticityThreshold;
			TEnumAsByte<EConstraintPlasticityType> PlasticityType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bLinearPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPlasticity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearPlasticityThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlasticityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms*)Obj)->bLinearPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity = { "bLinearPlasticity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold = { "LinearPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms, LinearPlasticityThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_PlasticityType = { "PlasticityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms, PlasticityType), Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType, METADATA_PARAMS(nullptr, 0) }; // 3233059018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::NewProp_PlasticityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Linear Plasticity properties\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bLinearPlasticity\x09\x09\x09Whether it is possible to reset the target position from the linear displacement\n\x09*\x09@param LinearPlasticityThreshold\x09""Delta from target needed to reset the target joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Linear Plasticity properties\n     @param Accessor                                         Constraint accessor to change\n     @param bLinearPlasticity                        Whether it is possible to reset the target position from the linear displacement\n     @param LinearPlasticityThreshold        Delta from target needed to reset the target joint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearPlasticity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearPlasticity_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables linear position drive\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableDriveX\x09\x09Indicates whether the drive for the X-Axis should be enabled\n\x09*\x09@param bEnableDriveY\x09\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09*\x09@param bEnableDriveZ\x09\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09*/" },
		{ "Keywords", "motor position target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n     @param Accessor                         Constraint accessor to change\n     @param bEnableDriveX            Indicates whether the drive for the X-Axis should be enabled\n     @param bEnableDriveY            Indicates whether the drive for the Y-Axis should be enabled\n     @param bEnableDriveZ            Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearPositionDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearPositionDrive_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearPositionTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector InPosTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearPositionTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the target position for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param InPosTarget\x09\x09\x09Target position\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the target position for the linear drive.\n     @param Accessor                         Constraint accessor to change\n     @param InPosTarget                      Target position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearPositionTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearPositionTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bSoftLinearLimit;
			float LinearLimitStiffness;
			float LinearLimitDamping;
			float LinearLimitRestitution;
			float LinearLimitContactDistance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bSoftLinearLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitRestitution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitContactDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms*)Obj)->bSoftLinearLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit = { "bSoftLinearLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms, LinearLimitStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms, LinearLimitDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitRestitution = { "LinearLimitRestitution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms, LinearLimitRestitution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitContactDistance = { "LinearLimitContactDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms, LinearLimitContactDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_bSoftLinearLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitRestitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::NewProp_LinearLimitContactDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets Constraint Linear Soft Limit parameters\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09* *\x09@param bSoftLinearLimit\x09\x09\x09\x09True is the linear limit is soft\n\x09*\x09@param LinearLimitStiffness\x09\x09\x09Stiffness of the soft linear limit. Only used when Soft limit is on ( positive value )\n\x09*\x09@param LinearLimitDamping\x09\x09\x09""Damping of the soft linear limit. Only used when Soft limit is on ( positive value )\n\x09*   @param LinearLimitRestitution\x09\x09""Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n\x09*\x09@param LinearLimitContactDistance\x09""Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.\n\x09*/" },
		{ "Keywords", "soft stiffness damping restitution contact distance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets Constraint Linear Soft Limit parameters\n     @param Accessor                                         Constraint accessor to change\n*     @param bSoftLinearLimit                         True is the linear limit is soft\n     @param LinearLimitStiffness                     Stiffness of the soft linear limit. Only used when Soft limit is on ( positive value )\n     @param LinearLimitDamping                       Damping of the soft linear limit. Only used when Soft limit is on ( positive value )\n @param LinearLimitRestitution               Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.\n     @param LinearLimitContactDistance       Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearSoftLimitParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearSoftLimitParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables linear velocity drive\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableDriveX\x09\x09Indicates whether the drive for the X-Axis should be enabled\n\x09*\x09@param bEnableDriveY\x09\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09*\x09@param bEnableDriveZ\x09\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09*/" },
		{ "Keywords", "motor velocity target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables linear velocity drive\n     @param Accessor                         Constraint accessor to change\n     @param bEnableDriveX            Indicates whether the drive for the X-Axis should be enabled\n     @param bEnableDriveY            Indicates whether the drive for the Y-Axis should be enabled\n     @param bEnableDriveZ            Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearVelocityDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityDrive_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityTarget_Parms
		{
			FConstraintInstanceAccessor Accessor;
			FVector InVelTarget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityTarget_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets the target velocity for the linear drive.\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param InVelTarget\x09\x09\x09Target velocity\n\x09*/" },
		{ "Keywords", "motor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets the target velocity for the linear drive.\n     @param Accessor                         Constraint accessor to change\n     @param InVelTarget                      Target velocity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetLinearVelocityTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::ConstraintInstanceBlueprintLibrary_eventSetLinearVelocityTarget_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetMassConditioningEnabled_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableMassConditioning;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableMassConditioning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMassConditioning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetMassConditioningEnabled_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_bEnableMassConditioning_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetMassConditioningEnabled_Parms*)Obj)->bEnableMassConditioning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_bEnableMassConditioning = { "bEnableMassConditioning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetMassConditioningEnabled_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_bEnableMassConditioning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::NewProp_bEnableMassConditioning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/**\n\x09 * @brief Enable or disable mass conditioning for the constraint.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "@brief Enable or disable mass conditioning for the constraint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetMassConditioningEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::ConstraintInstanceBlueprintLibrary_eventSetMassConditioningEnabled_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveSLERP_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableSLERP;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveSLERP_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveSLERP_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableSLERP\x09\x09\x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n     @param Accessor                         Constraint accessor to change\n     @param bEnableSLERP                     Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetOrientationDriveSLERP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveSLERP_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "Keywords", "motor target" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param Accessor                         Constraint accessor to change\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetOrientationDriveTwistAndSwing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::ConstraintInstanceBlueprintLibrary_eventSetOrientationDriveTwistAndSwing_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetParentDominates_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bParentDominates;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bParentDominates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentDominates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetParentDominates_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_bParentDominates_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetParentDominates_Parms*)Obj)->bParentDominates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_bParentDominates = { "bParentDominates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetParentDominates_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_bParentDominates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::NewProp_bParentDominates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets whether the parent body is not affected by it's child motion \n\x09*\x09@param Accessor\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bParentDominates\x09\x09true to avoid the parent being affected by its child motion\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets whether the parent body is not affected by it's child motion\n     @param Accessor                         Constraint accessor to change\n     @param bParentDominates         true to avoid the parent being affected by its child motion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetParentDominates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::ConstraintInstanceBlueprintLibrary_eventSetParentDominates_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics
	{
		struct ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms
		{
			FConstraintInstanceAccessor Accessor;
			bool bEnableProjection;
			float ProjectionLinearAlpha;
			float ProjectionAngularAlpha;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessor;
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms, Accessor), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	void Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms*)Obj)->bEnableProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms), &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_ProjectionLinearAlpha = { "ProjectionLinearAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms, ProjectionLinearAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_ProjectionAngularAlpha = { "ProjectionAngularAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms, ProjectionAngularAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_bEnableProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_ProjectionLinearAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::NewProp_ProjectionAngularAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Sets projection parameters of the constraint\n\x09*\x09@param Accessor\x09\x09\x09\x09\x09""Constraint accessor to change\n\x09*\x09@param bEnableProjection\x09\x09true to enable projection\n\x09*\x09@param ProjectionLinearAlpha\x09how much linear projection to apply in [0,1] range\n\x09*\x09@param ProjectionAngularAlpha\x09how much angular projection to apply in [0,1] range\n\x09*/" },
		{ "Keywords", "enable linear angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ToolTip", "Sets projection parameters of the constraint\n     @param Accessor                                 Constraint accessor to change\n     @param bEnableProjection                true to enable projection\n     @param ProjectionLinearAlpha    how much linear projection to apply in [0,1] range\n     @param ProjectionAngularAlpha   how much angular projection to apply in [0,1] range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, nullptr, "SetProjectionParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::ConstraintInstanceBlueprintLibrary_eventSetProjectionParams_Parms), Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintInstanceBlueprintLibrary);
	UClass* Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_NoRegister()
	{
		return UConstraintInstanceBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_CopyParams, "CopyParams" }, // 327735393
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularBreakable, "GetAngularBreakable" }, // 4090957605
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveMode, "GetAngularDriveMode" }, // 1150173053
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularDriveParams, "GetAngularDriveParams" }, // 2722346476
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularLimits, "GetAngularLimits" }, // 2294930989
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularOrientationTarget, "GetAngularOrientationTarget" }, // 3566995276
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularPlasticity, "GetAngularPlasticity" }, // 2320879338
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftSwingLimitParams, "GetAngularSoftSwingLimitParams" }, // 2166588573
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularSoftTwistLimitParams, "GetAngularSoftTwistLimitParams" }, // 1176933791
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveSLERP, "GetAngularVelocityDriveSLERP" }, // 2925890135
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityDriveTwistAndSwing, "GetAngularVelocityDriveTwistAndSwing" }, // 1984821680
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAngularVelocityTarget, "GetAngularVelocityTarget" }, // 3700436104
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetAttachedBodyNames, "GetAttachedBodyNames" }, // 1321719698
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetContactTransferScale, "GetContactTransferScale" }, // 926408344
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetDisableCollsion, "GetDisableCollsion" }, // 982625089
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearBreakable, "GetLinearBreakable" }, // 2433075546
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearDriveParams, "GetLinearDriveParams" }, // 2073373719
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearLimits, "GetLinearLimits" }, // 1496542241
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPlasticity, "GetLinearPlasticity" }, // 2504939566
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionDrive, "GetLinearPositionDrive" }, // 2997979101
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearPositionTarget, "GetLinearPositionTarget" }, // 4186306936
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearSoftLimitParams, "GetLinearSoftLimitParams" }, // 2849340617
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityDrive, "GetLinearVelocityDrive" }, // 1273572460
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetLinearVelocityTarget, "GetLinearVelocityTarget" }, // 48434500
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetMassConditioningEnabled, "GetMassConditioningEnabled" }, // 490627455
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveSLERP, "GetOrientationDriveSLERP" }, // 1290911977
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetOrientationDriveTwistAndSwing, "GetOrientationDriveTwistAndSwing" }, // 3132062426
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetParentDominates, "GetParentDominates" }, // 275467388
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_GetProjectionParams, "GetProjectionParams" }, // 369170556
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularBreakable, "SetAngularBreakable" }, // 2011965038
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveMode, "SetAngularDriveMode" }, // 598977948
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularDriveParams, "SetAngularDriveParams" }, // 580262585
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularLimits, "SetAngularLimits" }, // 3225681638
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularOrientationTarget, "SetAngularOrientationTarget" }, // 651504165
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularPlasticity, "SetAngularPlasticity" }, // 1247302766
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftSwingLimitParams, "SetAngularSoftSwingLimitParams" }, // 3025477672
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularSoftTwistLimitParams, "SetAngularSoftTwistLimitParams" }, // 1787391753
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveSLERP, "SetAngularVelocityDriveSLERP" }, // 2466622802
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityDriveTwistAndSwing, "SetAngularVelocityDriveTwistAndSwing" }, // 988915620
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetAngularVelocityTarget, "SetAngularVelocityTarget" }, // 490536068
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetContactTransferScale, "SetContactTransferScale" }, // 2260943135
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetDisableCollision, "SetDisableCollision" }, // 151409892
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearBreakable, "SetLinearBreakable" }, // 3255579342
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearDriveParams, "SetLinearDriveParams" }, // 4192210818
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearLimits, "SetLinearLimits" }, // 2121794558
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPlasticity, "SetLinearPlasticity" }, // 4155022836
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionDrive, "SetLinearPositionDrive" }, // 3372383634
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearPositionTarget, "SetLinearPositionTarget" }, // 2957832158
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearSoftLimitParams, "SetLinearSoftLimitParams" }, // 1897471503
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityDrive, "SetLinearVelocityDrive" }, // 3800986918
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetLinearVelocityTarget, "SetLinearVelocityTarget" }, // 895563382
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetMassConditioningEnabled, "SetMassConditioningEnabled" }, // 1955071078
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveSLERP, "SetOrientationDriveSLERP" }, // 3988246161
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetOrientationDriveTwistAndSwing, "SetOrientationDriveTwistAndSwing" }, // 494617959
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetParentDominates, "SetParentDominates" }, // 2892359316
		{ &Z_Construct_UFunction_UConstraintInstanceBlueprintLibrary_SetProjectionParams, "SetProjectionParams" }, // 2151936177
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstanceBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintInstanceBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::ClassParams = {
		&UConstraintInstanceBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstraintInstanceBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UConstraintInstanceBlueprintLibrary>()
	{
		return UConstraintInstanceBlueprintLibrary::StaticClass();
	}
	UConstraintInstanceBlueprintLibrary::UConstraintInstanceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintInstanceBlueprintLibrary);
	UConstraintInstanceBlueprintLibrary::~UConstraintInstanceBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstraintInstanceBlueprintLibrary, UConstraintInstanceBlueprintLibrary::StaticClass, TEXT("UConstraintInstanceBlueprintLibrary"), &Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintInstanceBlueprintLibrary), 115416491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_2035410585(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
