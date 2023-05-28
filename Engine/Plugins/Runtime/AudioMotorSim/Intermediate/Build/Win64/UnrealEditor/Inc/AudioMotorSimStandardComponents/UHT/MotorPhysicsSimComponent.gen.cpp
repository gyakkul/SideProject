// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotorPhysicsSimComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotorPhysicsSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UMotorPhysicsSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UMotorPhysicsSimComponent_NoRegister();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics
	{
		struct _Script_AudioMotorSimStandardComponents_eventOnGearChanged_Parms
		{
			int32 NewGear;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMotorSimStandardComponents_eventOnGearChanged_Parms, NewGear), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::NewProp_NewGear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnGearChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::_Script_AudioMotorSimStandardComponents_eventOnGearChanged_Parms), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGearChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGearChanged, int32 NewGear)
{
	struct _Script_AudioMotorSimStandardComponents_eventOnGearChanged_Parms
	{
		int32 NewGear;
	};
	_Script_AudioMotorSimStandardComponents_eventOnGearChanged_Parms Parms;
	Parms.NewGear=NewGear;
	OnGearChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMotorPhysicsSimComponent::StaticRegisterNativesUMotorPhysicsSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotorPhysicsSimComponent);
	UClass* Z_Construct_UClass_UMotorPhysicsSimComponent_NoRegister()
	{
		return UMotorPhysicsSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotorPhysicsSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingHorsePower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingHorsePower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GearRatios_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearRatios_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GearRatios;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClutchedGearRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClutchedGearRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInfiniteGears_MetaData[];
#endif
		static void NewProp_bUseInfiniteGears_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInfiniteGears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDownshiftToZerothGear_MetaData[];
#endif
		static void NewProp_bAlwaysDownshiftToZerothGear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDownshiftToZerothGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGearRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfiniteGearRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpShiftMaxRpm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpShiftMaxRpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownShiftStartRpm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownShiftStartRpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClutchedForceModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClutchedForceModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineGearRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineGearRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindResistancePerVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindResistancePerVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleInterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleInterpolationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RpmInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RpmInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGearChangedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGearChangedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Uses throttle input to run a physics simulation to drive RPM and shift gears when needed\n" },
		{ "IncludePath", "MotorPhysicsSimComponent.h" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
		{ "ToolTip", "Uses throttle input to run a physics simulation to drive RPM and shift gears when needed" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, Weight), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineTorque_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineTorque = { "EngineTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, EngineTorque), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_BrakingHorsePower_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_BrakingHorsePower = { "BrakingHorsePower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, BrakingHorsePower), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_BrakingHorsePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_BrakingHorsePower_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios_Inner = { "GearRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios = { "GearRatios", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, GearRatios), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedGearRatio_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedGearRatio = { "ClutchedGearRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, ClutchedGearRatio), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedGearRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedGearRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears_SetBit(void* Obj)
	{
		((UMotorPhysicsSimComponent*)Obj)->bUseInfiniteGears = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears = { "bUseInfiniteGears", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotorPhysicsSimComponent), &Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear_SetBit(void* Obj)
	{
		((UMotorPhysicsSimComponent*)Obj)->bAlwaysDownshiftToZerothGear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear = { "bAlwaysDownshiftToZerothGear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotorPhysicsSimComponent), &Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_InfiniteGearRatio_MetaData[] = {
		{ "Category", "Gears" },
		{ "Comment", "// how much to scale gear ratio per gear past the max gear\n" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
		{ "ToolTip", "how much to scale gear ratio per gear past the max gear" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_InfiniteGearRatio = { "InfiniteGearRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, InfiniteGearRatio), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_InfiniteGearRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_InfiniteGearRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_UpShiftMaxRpm_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_UpShiftMaxRpm = { "UpShiftMaxRpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, UpShiftMaxRpm), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_UpShiftMaxRpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_UpShiftMaxRpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_DownShiftStartRpm_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_DownShiftStartRpm = { "DownShiftStartRpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, DownShiftStartRpm), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_DownShiftStartRpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_DownShiftStartRpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedForceModifier_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedForceModifier = { "ClutchedForceModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, ClutchedForceModifier), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedForceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedForceModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineGearRatio_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineGearRatio = { "EngineGearRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, EngineGearRatio), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineGearRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineGearRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineFriction_MetaData[] = {
		{ "Category", "Resistance" },
		{ "Comment", "// How much of the torque is loss due to engine friction\n" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
		{ "ToolTip", "How much of the torque is loss due to engine friction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineFriction = { "EngineFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, EngineFriction), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Resistance" },
		{ "Comment", "// Coefficient of Rolling Resistance\n" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
		{ "ToolTip", "Coefficient of Rolling Resistance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, GroundFriction), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GroundFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GroundFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_WindResistancePerVelocity_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_WindResistancePerVelocity = { "WindResistancePerVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, WindResistancePerVelocity), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_WindResistancePerVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_WindResistancePerVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ThrottleInterpolationTime_MetaData[] = {
		{ "Category", "PhysicsSim" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ThrottleInterpolationTime = { "ThrottleInterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, ThrottleInterpolationTime), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ThrottleInterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ThrottleInterpolationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_RpmInterpSpeed_MetaData[] = {
		{ "Category", "PhysicsSim" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_RpmInterpSpeed = { "RpmInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, RpmInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_RpmInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_RpmInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_OnGearChangedEvent_MetaData[] = {
		{ "Category", "PhysicsSim" },
		{ "ModuleRelativePath", "Public/MotorPhysicsSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_OnGearChangedEvent = { "OnGearChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotorPhysicsSimComponent, OnGearChangedEvent), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_OnGearChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_OnGearChangedEvent_MetaData)) }; // 1196427062
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_BrakingHorsePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GearRatios,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedGearRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bUseInfiniteGears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_bAlwaysDownshiftToZerothGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_InfiniteGearRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_UpShiftMaxRpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_DownShiftStartRpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ClutchedForceModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineGearRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_EngineFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_GroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_WindResistancePerVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_ThrottleInterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_RpmInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::NewProp_OnGearChangedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotorPhysicsSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::ClassParams = {
		&UMotorPhysicsSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotorPhysicsSimComponent()
	{
		if (!Z_Registration_Info_UClass_UMotorPhysicsSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotorPhysicsSimComponent.OuterSingleton, Z_Construct_UClass_UMotorPhysicsSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotorPhysicsSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UMotorPhysicsSimComponent>()
	{
		return UMotorPhysicsSimComponent::StaticClass();
	}
	UMotorPhysicsSimComponent::UMotorPhysicsSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotorPhysicsSimComponent);
	UMotorPhysicsSimComponent::~UMotorPhysicsSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_MotorPhysicsSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_MotorPhysicsSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotorPhysicsSimComponent, UMotorPhysicsSimComponent::StaticClass, TEXT("UMotorPhysicsSimComponent"), &Z_Registration_Info_UClass_UMotorPhysicsSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotorPhysicsSimComponent), 1612599077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_MotorPhysicsSimComponent_h_342862054(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_MotorPhysicsSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_MotorPhysicsSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
