// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/IKRigComponent.h"
#include "IKRigDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigComponent();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigComponent_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	DEFINE_FUNCTION(UIKRigComponent::execClearAllGoals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllGoals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoal)
	{
		P_GET_STRUCT_REF(FIKRigGoal,Z_Param_Out_Goal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIKRigGoal(Z_Param_Out_Goal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoalTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIKRigGoalTransform(Z_Param_GoalName,Z_Param_Transform,Z_Param_PositionAlpha,Z_Param_RotationAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoalPositionAndRotation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FQuat,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIKRigGoalPositionAndRotation(Z_Param_GoalName,Z_Param_Position,Z_Param_Rotation,Z_Param_PositionAlpha,Z_Param_RotationAlpha);
		P_NATIVE_END;
	}
	void UIKRigComponent::StaticRegisterNativesUIKRigComponent()
	{
		UClass* Class = UIKRigComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllGoals", &UIKRigComponent::execClearAllGoals },
			{ "SetIKRigGoal", &UIKRigComponent::execSetIKRigGoal },
			{ "SetIKRigGoalPositionAndRotation", &UIKRigComponent::execSetIKRigGoalPositionAndRotation },
			{ "SetIKRigGoalTransform", &UIKRigComponent::execSetIKRigGoalTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Remove all stored goals in this component. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Remove all stored goals in this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "ClearAllGoals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigComponent_ClearAllGoals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics
	{
		struct IKRigComponent_eventSetIKRigGoal_Parms
		{
			FIKRigGoal Goal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoal_Parms, Goal), Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal_MetaData)) }; // 1237806036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Apply a IKRigGoal and store it on this rig. Goal transform assumed in Component Space of Skeletal Mesh. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Apply a IKRigGoal and store it on this rig. Goal transform assumed in Component Space of Skeletal Mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::IKRigComponent_eventSetIKRigGoal_Parms), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics
	{
		struct IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms
		{
			FName GoalName;
			FVector Position;
			FQuat Rotation;
			float PositionAlpha;
			float RotationAlpha;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, PositionAlpha), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, RotationAlpha), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Set an IK Rig Goal position and rotation (assumed in Component Space of Skeletal Mesh) with separate alpha values. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Set an IK Rig Goal position and rotation (assumed in Component Space of Skeletal Mesh) with separate alpha values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoalPositionAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics
	{
		struct IKRigComponent_eventSetIKRigGoalTransform_Parms
		{
			FName GoalName;
			FTransform Transform;
			float PositionAlpha;
			float RotationAlpha;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, PositionAlpha), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, RotationAlpha), METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Set an IK Rig Goal transform (assumed in Component Space of Skeletal Mesh) with separate alpha values. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Set an IK Rig Goal transform (assumed in Component Space of Skeletal Mesh) with separate alpha values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::IKRigComponent_eventSetIKRigGoalTransform_Parms), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigComponent);
	UClass* Z_Construct_UClass_UIKRigComponent_NoRegister()
	{
		return UIKRigComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKRigComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRigComponent_ClearAllGoals, "ClearAllGoals" }, // 1864447034
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal, "SetIKRigGoal" }, // 145725150
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation, "SetIKRigGoalPositionAndRotation" }, // 3660683528
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform, "SetIKRigGoalTransform" }, // 3202314882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "IKRig" },
		{ "IncludePath", "ActorComponents/IKRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIKRigComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister, (int32)VTABLE_OFFSET(UIKRigComponent, IIKGoalCreatorInterface), false },  // 4091412036
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigComponent_Statics::ClassParams = {
		&UIKRigComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigComponent()
	{
		if (!Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton, Z_Construct_UClass_UIKRigComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigComponent>()
	{
		return UIKRigComponent::StaticClass();
	}
	UIKRigComponent::UIKRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigComponent);
	UIKRigComponent::~UIKRigComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigComponent, UIKRigComponent::StaticClass, TEXT("UIKRigComponent"), &Z_Registration_Info_UClass_UIKRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigComponent), 2048210682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_2919330260(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
