// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics
	{
		struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "OnProjectileBounceDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UProjectileMovementComponent::FOnProjectileBounceDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileBounceDelegate, FHitResult const& ImpactResult, FVector const& ImpactVelocity)
{
	struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms
	{
		FHitResult ImpactResult;
		FVector ImpactVelocity;
	};
	ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.ImpactVelocity=ImpactVelocity;
	OnProjectileBounceDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics
	{
		struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms
		{
			FHitResult ImpactResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "OnProjectileStopDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UProjectileMovementComponent::FOnProjectileStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileStopDelegate, FHitResult const& ImpactResult)
{
	struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms
	{
		FHitResult ImpactResult;
	};
	ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	OnProjectileStopDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UProjectileMovementComponent::execLimitVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->LimitVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execIsInterpolationComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterpolationComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execResetInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execMoveInterpolationTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveInterpolationTarget(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execSetInterpolatedComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolatedComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execStopSimulating)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSimulating(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execSetVelocityInLocalSpace)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocityInLocalSpace(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileMovementComponent::execIsVelocityUnderSimulationThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVelocityUnderSimulationThreshold();
		P_NATIVE_END;
	}
	void UProjectileMovementComponent::StaticRegisterNativesUProjectileMovementComponent()
	{
		UClass* Class = UProjectileMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInterpolationComplete", &UProjectileMovementComponent::execIsInterpolationComplete },
			{ "IsVelocityUnderSimulationThreshold", &UProjectileMovementComponent::execIsVelocityUnderSimulationThreshold },
			{ "LimitVelocity", &UProjectileMovementComponent::execLimitVelocity },
			{ "MoveInterpolationTarget", &UProjectileMovementComponent::execMoveInterpolationTarget },
			{ "ResetInterpolation", &UProjectileMovementComponent::execResetInterpolation },
			{ "SetInterpolatedComponent", &UProjectileMovementComponent::execSetInterpolatedComponent },
			{ "SetVelocityInLocalSpace", &UProjectileMovementComponent::execSetVelocityInLocalSpace },
			{ "StopSimulating", &UProjectileMovementComponent::execStopSimulating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics
	{
		struct ProjectileMovementComponent_eventIsInterpolationComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectileMovementComponent_eventIsInterpolationComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectileMovementComponent_eventIsInterpolationComplete_Parms), &Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement|Interpolation" },
		{ "Comment", "/**\n\x09 * Returns whether interpolation is complete because the target has been reached. True when interpolation is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Returns whether interpolation is complete because the target has been reached. True when interpolation is disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "IsInterpolationComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::ProjectileMovementComponent_eventIsInterpolationComplete_Parms), Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics
	{
		struct ProjectileMovementComponent_eventIsVelocityUnderSimulationThreshold_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectileMovementComponent_eventIsVelocityUnderSimulationThreshold_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectileMovementComponent_eventIsVelocityUnderSimulationThreshold_Parms), &Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement" },
		{ "Comment", "/**\n\x09 * Returns true if velocity magnitude is less than BounceVelocityStopSimulatingThreshold.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Returns true if velocity magnitude is less than BounceVelocityStopSimulatingThreshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "IsVelocityUnderSimulationThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::ProjectileMovementComponent_eventIsVelocityUnderSimulationThreshold_Parms), Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics
	{
		struct ProjectileMovementComponent_eventLimitVelocity_Parms
		{
			FVector NewVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventLimitVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventLimitVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::NewProp_NewVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement" },
		{ "Comment", "/** Don't allow velocity magnitude to exceed MaxSpeed, if MaxSpeed is non-zero. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Don't allow velocity magnitude to exceed MaxSpeed, if MaxSpeed is non-zero." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "LimitVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::ProjectileMovementComponent_eventLimitVelocity_Parms), Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics
	{
		struct ProjectileMovementComponent_eventMoveInterpolationTarget_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventMoveInterpolationTarget_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventMoveInterpolationTarget_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement|Interpolation" },
		{ "Comment", "/**\n\x09 * Moves the UpdatedComponent, which is also the interpolation target for the interpolated component. If there is not interpolated component, this simply moves UpdatedComponent.\n\x09 * Use this typically from PostNetReceiveLocationAndRotation() or similar from an Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Moves the UpdatedComponent, which is also the interpolation target for the interpolated component. If there is not interpolated component, this simply moves UpdatedComponent.\nUse this typically from PostNetReceiveLocationAndRotation() or similar from an Actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "MoveInterpolationTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::ProjectileMovementComponent_eventMoveInterpolationTarget_Parms), Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement|Interpolation" },
		{ "Comment", "/**\n\x09 * Resets interpolation so that interpolated component snaps back to the initial location/rotation without any additional offsets.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Resets interpolation so that interpolated component snaps back to the initial location/rotation without any additional offsets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "ResetInterpolation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics
	{
		struct ProjectileMovementComponent_eventSetInterpolatedComponent_Parms
		{
			USceneComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventSetInterpolatedComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement|Interpolation" },
		{ "Comment", "/**\n\x09 * Assigns the component that will be used for network interpolation/smoothing. It is expected that this is a component attached somewhere below the UpdatedComponent.\n\x09 * When network updates use MoveInterpolationTarget() to move the UpdatedComponent, the interpolated component's relative offset will be maintained and smoothed over\n\x09 * the course of future component ticks. The current relative location and rotation of the component is saved as the target offset for future interpolation.\n\x09 * @see MoveInterpolationTarget(), bInterpMovement, bInterpRotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Assigns the component that will be used for network interpolation/smoothing. It is expected that this is a component attached somewhere below the UpdatedComponent.\nWhen network updates use MoveInterpolationTarget() to move the UpdatedComponent, the interpolated component's relative offset will be maintained and smoothed over\nthe course of future component ticks. The current relative location and rotation of the component is saved as the target offset for future interpolation.\n@see MoveInterpolationTarget(), bInterpMovement, bInterpRotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "SetInterpolatedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::ProjectileMovementComponent_eventSetInterpolatedComponent_Parms), Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics
	{
		struct ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms
		{
			FVector NewVelocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement" },
		{ "Comment", "/** Sets the velocity to the new value, rotated into Actor space. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Sets the velocity to the new value, rotated into Actor space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "SetVelocityInLocalSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms), Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics
	{
		struct ProjectileMovementComponent_eventStopSimulating_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventStopSimulating_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ProjectileMovement" },
		{ "Comment", "/** Clears the reference to UpdatedComponent, fires stop event (OnProjectileStop), and stops ticking (if bAutoUpdateTickRegistration is true). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Clears the reference to UpdatedComponent, fires stop event (OnProjectileStop), and stops ticking (if bAutoUpdateTickRegistration is true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, nullptr, "StopSimulating", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::ProjectileMovementComponent_eventStopSimulating_Parms), Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileMovementComponent);
	UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister()
	{
		return UProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationFollowsVelocity_MetaData[];
#endif
		static void NewProp_bRotationFollowsVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationFollowsVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationRemainsVertical_MetaData[];
#endif
		static void NewProp_bRotationRemainsVertical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationRemainsVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBounce_MetaData[];
#endif
		static void NewProp_bShouldBounce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBounce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialVelocityInLocalSpace_MetaData[];
#endif
		static void NewProp_bInitialVelocityInLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialVelocityInLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[];
#endif
		static void NewProp_bForceSubStepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulationEnabled_MetaData[];
#endif
		static void NewProp_bSimulationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSweepCollision_MetaData[];
#endif
		static void NewProp_bSweepCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweepCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHomingProjectile_MetaData[];
#endif
		static void NewProp_bIsHomingProjectile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHomingProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBounceAngleAffectsFriction_MetaData[];
#endif
		static void NewProp_bBounceAngleAffectsFriction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBounceAngleAffectsFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSliding_MetaData[];
#endif
		static void NewProp_bIsSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpMovement_MetaData[];
#endif
		static void NewProp_bInterpMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpRotation_MetaData[];
#endif
		static void NewProp_bInterpRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousHitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousHitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousHitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buoyancy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buoyancy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounciness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bounciness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceVelocityStopSimulatingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceVelocityStopSimulatingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFrictionFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFrictionFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileBounce_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileBounce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomingAccelerationMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HomingAccelerationMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomingTargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HomingTargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimulationIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceAdditionalIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BounceAdditionalIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpLocationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpLocationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpRotationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpRotationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpLocationMaxLagDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpLocationMaxLagDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpLocationSnapToTargetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpLocationSnapToTargetDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileMovementComponent_IsInterpolationComplete, "IsInterpolationComplete" }, // 3198252431
		{ &Z_Construct_UFunction_UProjectileMovementComponent_IsVelocityUnderSimulationThreshold, "IsVelocityUnderSimulationThreshold" }, // 1443437418
		{ &Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity, "LimitVelocity" }, // 1571006649
		{ &Z_Construct_UFunction_UProjectileMovementComponent_MoveInterpolationTarget, "MoveInterpolationTarget" }, // 1440471690
		{ &Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature, "OnProjectileBounceDelegate__DelegateSignature" }, // 936971946
		{ &Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature, "OnProjectileStopDelegate__DelegateSignature" }, // 3845817847
		{ &Z_Construct_UFunction_UProjectileMovementComponent_ResetInterpolation, "ResetInterpolation" }, // 1053139653
		{ &Z_Construct_UFunction_UProjectileMovementComponent_SetInterpolatedComponent, "SetInterpolatedComponent" }, // 576519159
		{ &Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace, "SetVelocityInLocalSpace" }, // 1888962402
		{ &Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating, "StopSimulating" }, // 2905199009
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * ProjectileMovementComponent updates the position of another component during its tick.\n *\n * Behavior such as bouncing after impacts and homing toward a target are supported.\n *\n * Normally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\n * If the updated component is simulating physics, only the initial launch parameters (when initial velocity is non-zero)\n * will affect the projectile, and the physics sim will take over from there.\n *\n * @see UMovementComponent\n */" },
		{ "IncludePath", "GameFramework/ProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "ProjectileMovementComponent updates the position of another component during its tick.\n\nBehavior such as bouncing after impacts and homing toward a target are supported.\n\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nIf the updated component is simulating physics, only the initial launch parameters (when initial velocity is non-zero)\nwill affect the projectile, and the physics sim will take over from there.\n\n@see UMovementComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Initial speed of projectile. If greater than zero, this will override the initial Velocity value and instead treat Velocity as a direction. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Initial speed of projectile. If greater than zero, this will override the initial Velocity value and instead treat Velocity as a direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InitialSpeed), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InitialSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InitialSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Limit on speed of projectile (0 means no limit). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Limit on speed of projectile (0 means no limit)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** If true, this projectile will have its rotation updated each frame to match the direction of its velocity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, this projectile will have its rotation updated each frame to match the direction of its velocity." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bRotationFollowsVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity = { "bRotationFollowsVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** If true, this projectile will have its rotation updated each frame to maintain the rotations Yaw only. (bRotationFollowsVelocity is required to be true) */" },
		{ "EditCondition", "bRotationFollowsVelocity" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, this projectile will have its rotation updated each frame to maintain the rotations Yaw only. (bRotationFollowsVelocity is required to be true)" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bRotationRemainsVertical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical = { "bRotationRemainsVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/** If true, simple bounces will be simulated. Set this to false to stop simulating on contact. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, simple bounces will be simulated. Set this to false to stop simulating on contact." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bShouldBounce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce = { "bShouldBounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/**\n\x09 * If true, the initial Velocity is interpreted as being in local space upon startup.\n\x09 * @see SetVelocityInLocalSpace()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, the initial Velocity is interpreted as being in local space upon startup.\n@see SetVelocityInLocalSpace()" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bInitialVelocityInLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace = { "bInitialVelocityInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "Comment", "/**\n\x09 * If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\n\x09 * Objects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\n\x09 * Sub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n\x09 * @see MaxSimulationTimeStep, MaxSimulationIterations\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\nObjects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\nSub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n@see MaxSimulationTimeStep, MaxSimulationIterations" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bForceSubStepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping = { "bForceSubStepping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "Comment", "/**\n\x09 * If true, does normal simulation ticking and update. If false, simulation is halted, but component will still tick (allowing interpolation to run).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, does normal simulation ticking and update. If false, simulation is halted, but component will still tick (allowing interpolation to run)." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bSimulationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled = { "bSimulationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "Comment", "/**\n\x09 * If true, movement uses swept collision checks.\n\x09 * If false, collision effectively teleports to the destination. Note that when this is disabled, movement will never generate blocking collision hits (though overlaps will be updated).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, movement uses swept collision checks.\nIf false, collision effectively teleports to the destination. Note that when this is disabled, movement will never generate blocking collision hits (though overlaps will be updated)." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bSweepCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision = { "bSweepCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile_MetaData[] = {
		{ "Category", "Homing" },
		{ "Comment", "/**\n\x09 * If true, we will accelerate toward our homing target. HomingTargetComponent must be set after the projectile is spawned.\n\x09 * @see HomingTargetComponent, HomingAccelerationMagnitude\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, we will accelerate toward our homing target. HomingTargetComponent must be set after the projectile is spawned.\n@see HomingTargetComponent, HomingAccelerationMagnitude" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bIsHomingProjectile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile = { "bIsHomingProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/**\n\x09 * Controls the effects of friction on velocity parallel to the impact surface when bouncing.\n\x09 * If true, friction will be modified based on the angle of impact, making friction higher for perpendicular impacts and lower for glancing impacts.\n\x09 * If false, a bounce will retain a proportion of tangential velocity equal to (1.0 - Friction), acting as a \"horizontal restitution\".\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Controls the effects of friction on velocity parallel to the impact surface when bouncing.\nIf true, friction will be modified based on the angle of impact, making friction higher for perpendicular impacts and lower for glancing impacts.\nIf false, a bounce will retain a proportion of tangential velocity equal to (1.0 - Friction), acting as a \"horizontal restitution\"." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bBounceAngleAffectsFriction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction = { "bBounceAngleAffectsFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/**\n\x09 * If true, projectile is sliding / rolling along a surface.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true, projectile is sliding / rolling along a surface." },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bIsSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding = { "bIsSliding", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "Comment", "/**\n\x09 * If true and there is an interpolated component set, location (and optionally rotation) interpolation is enabled which allows the interpolated object to smooth uneven updates\n\x09 * of the UpdatedComponent's location (usually to smooth network updates). This requires using SetInterpolatedComponent() to indicate the visual component that lags behind the collision,\n\x09 * and using MoveInterpolationTarget() when the new target location/rotation is received (usually on a net update).\n\x09 * @see SetInterpolatedComponent(), MoveInterpolationTarget()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true and there is an interpolated component set, location (and optionally rotation) interpolation is enabled which allows the interpolated object to smooth uneven updates\nof the UpdatedComponent's location (usually to smooth network updates). This requires using SetInterpolatedComponent() to indicate the visual component that lags behind the collision,\nand using MoveInterpolationTarget() when the new target location/rotation is received (usually on a net update).\n@see SetInterpolatedComponent(), MoveInterpolationTarget()" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bInterpMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement = { "bInterpMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "Comment", "/**\n\x09 * If true and there is an interpolated component set, rotation interpolation is enabled which allows the interpolated object to smooth uneven updates\n\x09 * of the UpdatedComponent's rotation (usually to smooth network updates).\n\x09 * Rotation interpolation is *only* applied if bInterpMovement is also enabled.\n\x09 * @see SetInterpolatedComponent(), MoveInterpolationTarget()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If true and there is an interpolated component set, rotation interpolation is enabled which allows the interpolated object to smooth uneven updates\nof the UpdatedComponent's rotation (usually to smooth network updates).\nRotation interpolation is *only* applied if bInterpMovement is also enabled.\n@see SetInterpolatedComponent(), MoveInterpolationTarget()" },
	};
#endif
	void Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation_SetBit(void* Obj)
	{
		((UProjectileMovementComponent*)Obj)->bInterpRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation = { "bInterpRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UProjectileMovementComponent), &Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitTime_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/** Saved HitResult Time (0 to 1) from previous simulation step. Equal to 1.0 when there was no impact. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Saved HitResult Time (0 to 1) from previous simulation step. Equal to 1.0 when there was no impact." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitTime = { "PreviousHitTime", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, PreviousHitTime), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitNormal_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/** Saved HitResult Normal from previous simulation step that resulted in an impact. If PreviousHitTime is 1.0, then the hit was not in the last step. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Saved HitResult Normal from previous simulation step that resulted in an impact. If PreviousHitTime is 1.0, then the hit was not in the last step." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitNormal = { "PreviousHitNormal", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, PreviousHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_ProjectileGravityScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Custom gravity scale for this projectile. Set to 0 for no gravity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Custom gravity scale for this projectile. Set to 0 for no gravity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_ProjectileGravityScale = { "ProjectileGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, ProjectileGravityScale), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_ProjectileGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_ProjectileGravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Buoyancy_MetaData[] = {
		{ "Comment", "/** Buoyancy of UpdatedComponent in fluid. 0.0=sinks as fast as in air, 1.0=neutral buoyancy */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Buoyancy of UpdatedComponent in fluid. 0.0=sinks as fast as in air, 1.0=neutral buoyancy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Buoyancy = { "Buoyancy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Buoyancy), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Buoyancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Buoyancy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Bounciness_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Percentage of velocity maintained after the bounce in the direction of the normal of impact (coefficient of restitution).\n\x09 * 1.0 = no velocity lost, 0.0 = no bounce. Ignored if bShouldBounce is false.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Percentage of velocity maintained after the bounce in the direction of the normal of impact (coefficient of restitution).\n1.0 = no velocity lost, 0.0 = no bounce. Ignored if bShouldBounce is false." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Bounciness = { "Bounciness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Bounciness), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Bounciness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Bounciness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Coefficient of friction, affecting the resistance to sliding along a surface.\n\x09 * Normal range is [0,1] : 0.0 = no friction, 1.0+ = very high friction.\n\x09 * Also affects the percentage of velocity maintained after the bounce in the direction tangent to the normal of impact.\n\x09 * Ignored if bShouldBounce is false.\n\x09 * @see bBounceAngleAffectsFriction\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Coefficient of friction, affecting the resistance to sliding along a surface.\nNormal range is [0,1] : 0.0 = no friction, 1.0+ = very high friction.\nAlso affects the percentage of velocity maintained after the bounce in the direction tangent to the normal of impact.\nIgnored if bShouldBounce is false.\n@see bBounceAngleAffectsFriction" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Friction), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceVelocityStopSimulatingThreshold_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "Comment", "/**\n\x09 * If velocity is below this threshold after a bounce, stops simulating and triggers the OnProjectileStop event.\n\x09 * Ignored if bShouldBounce is false, in which case the projectile stops simulating on the first impact.\n\x09 * @see StopSimulating(), OnProjectileStop\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "If velocity is below this threshold after a bounce, stops simulating and triggers the OnProjectileStop event.\nIgnored if bShouldBounce is false, in which case the projectile stops simulating on the first impact.\n@see StopSimulating(), OnProjectileStop" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceVelocityStopSimulatingThreshold = { "BounceVelocityStopSimulatingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, BounceVelocityStopSimulatingThreshold), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceVelocityStopSimulatingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceVelocityStopSimulatingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MinFrictionFraction_MetaData[] = {
		{ "Category", "ProjectileBounces" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When bounce angle affects friction, apply at least this fraction of normal friction.\n\x09 * Helps consistently slow objects sliding or rolling along surfaces or in valleys when the usual friction amount would take a very long time to settle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "When bounce angle affects friction, apply at least this fraction of normal friction.\nHelps consistently slow objects sliding or rolling along surfaces or in valleys when the usual friction amount would take a very long time to settle." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MinFrictionFraction = { "MinFrictionFraction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MinFrictionFraction), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MinFrictionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MinFrictionFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileBounce_MetaData[] = {
		{ "Comment", "/** Called when projectile impacts something and bounces are enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Called when projectile impacts something and bounces are enabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileBounce = { "OnProjectileBounce", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, OnProjectileBounce), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileBounce_MetaData)) }; // 936971946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileStop_MetaData[] = {
		{ "Comment", "/** Called when projectile has come to a stop (velocity is below simulation threshold, bounces are disabled, or it is forcibly stopped). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Called when projectile has come to a stop (velocity is below simulation threshold, bounces are disabled, or it is forcibly stopped)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileStop = { "OnProjectileStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, OnProjectileStop), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileStop_MetaData)) }; // 3845817847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingAccelerationMagnitude_MetaData[] = {
		{ "Category", "Homing" },
		{ "Comment", "/** The magnitude of our acceleration towards the homing target. Overall velocity magnitude will still be limited by MaxSpeed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "The magnitude of our acceleration towards the homing target. Overall velocity magnitude will still be limited by MaxSpeed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingAccelerationMagnitude = { "HomingAccelerationMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, HomingAccelerationMagnitude), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingAccelerationMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingAccelerationMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingTargetComponent_MetaData[] = {
		{ "Category", "Homing" },
		{ "Comment", "/**\n\x09 * The current target we are homing towards. Can only be set at runtime (when projectile is spawned or updating).\n\x09 * @see bIsHomingProjectile\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "The current target we are homing towards. Can only be set at runtime (when projectile is spawned or updating).\n@see bIsHomingProjectile" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingTargetComponent = { "HomingTargetComponent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, HomingTargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingTargetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "ClampMax", "0.50" },
		{ "ClampMin", "0.0166" },
		{ "Comment", "/**\n\x09 * Max time delta for each discrete simulation step.\n\x09 * Lowering this value can address precision issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationIterations, bForceSubStepping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Max time delta for each discrete simulation step.\nLowering this value can address precision issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationIterations, bForceSubStepping" },
		{ "UIMax", "0.50" },
		{ "UIMin", "0.0166" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationTimeStep = { "MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSimulationTimeStep), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationIterations_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Max number of iterations used for each discrete simulation step.\n\x09 * Increasing this value can address precision issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationTimeStep, bForceSubStepping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Max number of iterations used for each discrete simulation step.\nIncreasing this value can address precision issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationTimeStep, bForceSubStepping" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationIterations = { "MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSimulationIterations), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceAdditionalIterations_MetaData[] = {
		{ "Category", "ProjectileSimulation" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * On the first few bounces (up to this amount), allow extra iterations over MaxSimulationIterations if necessary.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "On the first few bounces (up to this amount), allow extra iterations over MaxSimulationIterations if necessary." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceAdditionalIterations = { "BounceAdditionalIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, BounceAdditionalIterations), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceAdditionalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceAdditionalIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationTime_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * \"Time\" over which most of the location interpolation occurs, when the UpdatedComponent (target) moves ahead of the interpolated component.\n\x09 * Since the implementation uses exponential lagged smoothing, this is a rough time value and experimentation should inform a final result.\n\x09 * A value of zero is effectively instantaneous interpolation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "\"Time\" over which most of the location interpolation occurs, when the UpdatedComponent (target) moves ahead of the interpolated component.\nSince the implementation uses exponential lagged smoothing, this is a rough time value and experimentation should inform a final result.\nA value of zero is effectively instantaneous interpolation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationTime = { "InterpLocationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InterpLocationTime), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpRotationTime_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * \"Time\" over which most of the rotation interpolation occurs, when the UpdatedComponent (target) moves ahead of the interpolated component.\n\x09 * Since the implementation uses exponential lagged smoothing, this is a rough time value and experimentation should inform a final result.\n\x09 * A value of zero is effectively instantaneous interpolation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "\"Time\" over which most of the rotation interpolation occurs, when the UpdatedComponent (target) moves ahead of the interpolated component.\nSince the implementation uses exponential lagged smoothing, this is a rough time value and experimentation should inform a final result.\nA value of zero is effectively instantaneous interpolation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpRotationTime = { "InterpRotationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InterpRotationTime), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpRotationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpRotationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationMaxLagDistance_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Max distance behind UpdatedComponent which the interpolated component is allowed to lag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Max distance behind UpdatedComponent which the interpolated component is allowed to lag." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationMaxLagDistance = { "InterpLocationMaxLagDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InterpLocationMaxLagDistance), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationMaxLagDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationMaxLagDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationSnapToTargetDistance_MetaData[] = {
		{ "Category", "ProjectileInterpolation" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Max distance behind UpdatedComponent beyond which the interpolated component is snapped to the target location instead.\n\x09 * For instance if the target teleports this far beyond the interpolated component, the interpolation is snapped to match the target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
		{ "ToolTip", "Max distance behind UpdatedComponent beyond which the interpolated component is snapped to the target location instead.\nFor instance if the target teleports this far beyond the interpolated component, the interpolation is snapped to match the target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationSnapToTargetDistance = { "InterpLocationSnapToTargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InterpLocationSnapToTargetDistance), METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationSnapToTargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationSnapToTargetDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationFollowsVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bRotationRemainsVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bShouldBounce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInitialVelocityInLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bForceSubStepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSimulationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bSweepCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsHomingProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bBounceAngleAffectsFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bIsSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_bInterpRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_PreviousHitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_ProjectileGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Buoyancy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Bounciness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceVelocityStopSimulatingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MinFrictionFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileBounce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_OnProjectileStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingAccelerationMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_HomingTargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_MaxSimulationIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_BounceAdditionalIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpRotationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationMaxLagDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileMovementComponent_Statics::NewProp_InterpLocationSnapToTargetDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileMovementComponent_Statics::ClassParams = {
		&UProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectileMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UProjectileMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileMovementComponent.OuterSingleton, Z_Construct_UClass_UProjectileMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileMovementComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UProjectileMovementComponent>()
	{
		return UProjectileMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileMovementComponent);
	UProjectileMovementComponent::~UProjectileMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileMovementComponent, UProjectileMovementComponent::StaticClass, TEXT("UProjectileMovementComponent"), &Z_Registration_Info_UClass_UProjectileMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileMovementComponent), 2139339487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_2232104081(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
