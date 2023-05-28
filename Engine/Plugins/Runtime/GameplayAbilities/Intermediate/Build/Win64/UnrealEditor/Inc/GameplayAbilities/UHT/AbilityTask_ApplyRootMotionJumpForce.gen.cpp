// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotionJumpForce() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ApplyRootMotionJumpForceDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FApplyRootMotionJumpForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionJumpForceDelegate)
{
	ApplyRootMotionJumpForceDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionJumpForce::execApplyRootMotionJumpForce)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumLandedTriggerTime);
		P_GET_UBOOL(Z_Param_bFinishOnLanded);
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
		P_GET_OBJECT(UCurveVector,Z_Param_PathOffsetCurve);
		P_GET_OBJECT(UCurveFloat,Z_Param_TimeMappingCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_ApplyRootMotionJumpForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Rotation,Z_Param_Distance,Z_Param_Height,Z_Param_Duration,Z_Param_MinimumLandedTriggerTime,Z_Param_bFinishOnLanded,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish,Z_Param_PathOffsetCurve,Z_Param_TimeMappingCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionJumpForce::execOnLandedCallback)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLandedCallback(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionJumpForce::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	void UAbilityTask_ApplyRootMotionJumpForce::StaticRegisterNativesUAbilityTask_ApplyRootMotionJumpForce()
	{
		UClass* Class = UAbilityTask_ApplyRootMotionJumpForce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRootMotionJumpForce", &UAbilityTask_ApplyRootMotionJumpForce::execApplyRootMotionJumpForce },
			{ "Finish", &UAbilityTask_ApplyRootMotionJumpForce::execFinish },
			{ "OnLandedCallback", &UAbilityTask_ApplyRootMotionJumpForce::execOnLandedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics
	{
		struct AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			FRotator Rotation;
			float Distance;
			float Height;
			float Duration;
			float MinimumLandedTriggerTime;
			bool bFinishOnLanded;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			UCurveVector* PathOffsetCurve;
			UCurveFloat* TimeMappingCurve;
			UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLandedTriggerTime;
		static void NewProp_bFinishOnLanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishOnLanded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime = { "MinimumLandedTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, MinimumLandedTriggerTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms*)Obj)->bFinishOnLanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded = { "bFinishOnLanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(nullptr, 0) }; // 2218287550
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_VelocityOnFinishMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_SetVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Apply force to character's movement */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
		{ "ToolTip", "Apply force to character's movement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce, nullptr, "ApplyRootMotionJumpForce", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::AbilityTask_ApplyRootMotionJumpForce_eventApplyRootMotionJumpForce_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics
	{
		struct AbilityTask_ApplyRootMotionJumpForce_eventOnLandedCallback_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionJumpForce_eventOnLandedCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce, nullptr, "OnLandedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::AbilityTask_ApplyRootMotionJumpForce_eventOnLandedCallback_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotionJumpForce);
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister()
	{
		return UAbilityTask_ApplyRootMotionJumpForce::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLanded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLandedTriggerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLandedTriggerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinishOnLanded_MetaData[];
#endif
		static void NewProp_bFinishOnLanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishOnLanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PathOffsetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TimeMappingCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce, "ApplyRootMotionJumpForce" }, // 1214063043
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_Finish, "Finish" }, // 1330927386
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback, "OnLandedCallback" }, // 1078573611
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Applies force to character's movement\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
		{ "ToolTip", "Applies force to character's movement" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, OnFinish), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnFinish_MetaData)) }; // 125326671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnLanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnLanded = { "OnLanded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, OnLanded), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionJumpForceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnLanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnLanded_MetaData)) }; // 125326671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, Distance), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, Height), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, Duration), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime = { "MinimumLandedTriggerTime", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, MinimumLandedTriggerTime), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionJumpForce*)Obj)->bFinishOnLanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded = { "bFinishOnLanded", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionJumpForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Maps real time to movement fraction curve to affect the speed of the\n\x09 *  movement through the path\n\x09 *  Curve X is 0 to 1 normalized real time (a fraction of the duration)\n\x09 *  Curve Y is 0 to 1 is what percent of the move should be at a given X\n\x09 *  Default if unset is a 1:1 correspondence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h" },
		{ "ToolTip", "Maps real time to movement fraction curve to affect the speed of the\nmovement through the path\nCurve X is 0 to 1 normalized real time (a fraction of the duration)\nCurve Y is 0 to 1 is what percent of the move should be at a given X\nDefault if unset is a 1:1 correspondence" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_OnLanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_MinimumLandedTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_bFinishOnLanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_PathOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::NewProp_TimeMappingCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotionJumpForce>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::ClassParams = {
		&UAbilityTask_ApplyRootMotionJumpForce::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionJumpForce.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionJumpForce.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionJumpForce.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotionJumpForce>()
	{
		return UAbilityTask_ApplyRootMotionJumpForce::StaticClass();
	}

	void UAbilityTask_ApplyRootMotionJumpForce::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Rotation(TEXT("Rotation"));
		static const FName Name_Distance(TEXT("Distance"));
		static const FName Name_Height(TEXT("Height"));
		static const FName Name_Duration(TEXT("Duration"));
		static const FName Name_MinimumLandedTriggerTime(TEXT("MinimumLandedTriggerTime"));
		static const FName Name_bFinishOnLanded(TEXT("bFinishOnLanded"));
		static const FName Name_PathOffsetCurve(TEXT("PathOffsetCurve"));
		static const FName Name_TimeMappingCurve(TEXT("TimeMappingCurve"));

		const bool bIsValid = true
			&& Name_Rotation == ClassReps[(int32)ENetFields_Private::Rotation].Property->GetFName()
			&& Name_Distance == ClassReps[(int32)ENetFields_Private::Distance].Property->GetFName()
			&& Name_Height == ClassReps[(int32)ENetFields_Private::Height].Property->GetFName()
			&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
			&& Name_MinimumLandedTriggerTime == ClassReps[(int32)ENetFields_Private::MinimumLandedTriggerTime].Property->GetFName()
			&& Name_bFinishOnLanded == ClassReps[(int32)ENetFields_Private::bFinishOnLanded].Property->GetFName()
			&& Name_PathOffsetCurve == ClassReps[(int32)ENetFields_Private::PathOffsetCurve].Property->GetFName()
			&& Name_TimeMappingCurve == ClassReps[(int32)ENetFields_Private::TimeMappingCurve].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotionJumpForce"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotionJumpForce);
	UAbilityTask_ApplyRootMotionJumpForce::~UAbilityTask_ApplyRootMotionJumpForce() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce, UAbilityTask_ApplyRootMotionJumpForce::StaticClass, TEXT("UAbilityTask_ApplyRootMotionJumpForce"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionJumpForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotionJumpForce), 1461500776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_924852461(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
