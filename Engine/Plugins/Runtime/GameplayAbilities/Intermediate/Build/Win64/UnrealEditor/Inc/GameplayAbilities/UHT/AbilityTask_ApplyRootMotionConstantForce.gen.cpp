// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotionConstantForce() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ApplyRootMotionConstantForceDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FApplyRootMotionConstantForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionConstantForceDelegate)
{
	ApplyRootMotionConstantForceDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionConstantForce::execApplyRootMotionConstantForce)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bIsAdditive);
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthOverTime);
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
		P_GET_UBOOL(Z_Param_bEnableGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_ApplyRootMotionConstantForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_WorldDirection,Z_Param_Strength,Z_Param_Duration,Z_Param_bIsAdditive,Z_Param_StrengthOverTime,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish,Z_Param_bEnableGravity);
		P_NATIVE_END;
	}
	void UAbilityTask_ApplyRootMotionConstantForce::StaticRegisterNativesUAbilityTask_ApplyRootMotionConstantForce()
	{
		UClass* Class = UAbilityTask_ApplyRootMotionConstantForce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRootMotionConstantForce", &UAbilityTask_ApplyRootMotionConstantForce::execApplyRootMotionConstantForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics
	{
		struct AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			FVector WorldDirection;
			float Strength;
			float Duration;
			bool bIsAdditive;
			UCurveFloat* StrengthOverTime;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			bool bEnableGravity;
			UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms*)Obj)->bIsAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(nullptr, 0) }; // 2218287550
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Apply force to character's movement */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
		{ "ToolTip", "Apply force to character's movement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce, nullptr, "ApplyRootMotionConstantForce", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::AbilityTask_ApplyRootMotionConstantForce_eventApplyRootMotionConstantForce_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotionConstantForce);
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister()
	{
		return UAbilityTask_ApplyRootMotionConstantForce::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[];
#endif
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrengthOverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[];
#endif
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce, "ApplyRootMotionConstantForce" }, // 1389464518
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Applies force to character's movement\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
		{ "ToolTip", "Applies force to character's movement" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionConstantForce, OnFinish), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionConstantForceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_OnFinish_MetaData)) }; // 1173126249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Strength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionConstantForce, Strength), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionConstantForce, Duration), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionConstantForce*)Obj)->bIsAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionConstantForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Strength of the force over time\n\x09 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply\n\x09 *  Curve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or\n\x09 *          is in units of seconds if this force has unlimited duration (Duration < 0)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
		{ "ToolTip", "Strength of the force over time\nCurve Y is 0 to 1 which is percent of full Strength parameter to apply\nCurve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or\n        is in units of seconds if this force has unlimited duration (Duration < 0)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionConstantForce*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionConstantForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_OnFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::NewProp_bEnableGravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotionConstantForce>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::ClassParams = {
		&UAbilityTask_ApplyRootMotionConstantForce::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionConstantForce.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionConstantForce.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionConstantForce.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotionConstantForce>()
	{
		return UAbilityTask_ApplyRootMotionConstantForce::StaticClass();
	}

	void UAbilityTask_ApplyRootMotionConstantForce::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WorldDirection(TEXT("WorldDirection"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Duration(TEXT("Duration"));
		static const FName Name_bIsAdditive(TEXT("bIsAdditive"));
		static const FName Name_StrengthOverTime(TEXT("StrengthOverTime"));
		static const FName Name_bEnableGravity(TEXT("bEnableGravity"));

		const bool bIsValid = true
			&& Name_WorldDirection == ClassReps[(int32)ENetFields_Private::WorldDirection].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
			&& Name_bIsAdditive == ClassReps[(int32)ENetFields_Private::bIsAdditive].Property->GetFName()
			&& Name_StrengthOverTime == ClassReps[(int32)ENetFields_Private::StrengthOverTime].Property->GetFName()
			&& Name_bEnableGravity == ClassReps[(int32)ENetFields_Private::bEnableGravity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotionConstantForce"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotionConstantForce);
	UAbilityTask_ApplyRootMotionConstantForce::~UAbilityTask_ApplyRootMotionConstantForce() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce, UAbilityTask_ApplyRootMotionConstantForce::StaticClass, TEXT("UAbilityTask_ApplyRootMotionConstantForce"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotionConstantForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotionConstantForce), 3758750260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_788929477(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
