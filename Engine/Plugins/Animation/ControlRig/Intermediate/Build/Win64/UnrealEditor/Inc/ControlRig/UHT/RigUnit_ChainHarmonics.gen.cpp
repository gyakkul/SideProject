// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ChainHarmonics() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach;
class UScriptStruct* FRigUnit_ChainHarmonics_Reach::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonics_Reach"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonics_Reach>()
{
	return FRigUnit_ChainHarmonics_Reach::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReachTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReachAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReachEase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachEase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReachEase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonics_Reach>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_ChainHarmonics_Reach*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ChainHarmonics_Reach), &Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachTarget_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachTarget = { "ReachTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Reach, ReachTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachAxis = { "ReachAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Reach, ReachAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMinimum = { "ReachMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Reach, ReachMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMaximum = { "ReachMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Reach, ReachMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase = { "ReachEase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Reach, ReachEase), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase_MetaData)) }; // 3365060979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewProp_ReachEase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ChainHarmonics_Reach",
		sizeof(FRigUnit_ChainHarmonics_Reach),
		alignof(FRigUnit_ChainHarmonics_Reach),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave;
class UScriptStruct* FRigUnit_ChainHarmonics_Wave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonics_Wave"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonics_Wave>()
{
	return FRigUnit_ChainHarmonics_Wave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveNoise_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaveEase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveEase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveEase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonics_Wave>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_ChainHarmonics_Wave*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ChainHarmonics_Wave), &Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveFrequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveAmplitude_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveOffset = { "WaveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveNoise_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveNoise = { "WaveNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveNoise), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMinimum = { "WaveMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMaximum = { "WaveMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase = { "WaveEase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Wave, WaveEase), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase_MetaData)) }; // 3365060979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewProp_WaveEase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ChainHarmonics_Wave",
		sizeof(FRigUnit_ChainHarmonics_Wave),
		alignof(FRigUnit_ChainHarmonics_Wave),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum;
class UScriptStruct* FRigUnit_ChainHarmonics_Pendulum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonics_Pendulum"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonics_Pendulum>()
{
	return FRigUnit_ChainHarmonics_Pendulum::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendulumStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumGravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendulumGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendulumBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendulumDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendulumMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendulumMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PendulumEase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumEase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PendulumEase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwindAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnwindAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwindMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnwindMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwindMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnwindMaximum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonics_Pendulum>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_ChainHarmonics_Pendulum*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ChainHarmonics_Pendulum), &Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumStiffness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumStiffness = { "PendulumStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumGravity_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumGravity = { "PendulumGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumBlend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumBlend = { "PendulumBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumDrag_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumDrag = { "PendulumDrag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumDrag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMinimum = { "PendulumMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMaximum = { "PendulumMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase = { "PendulumEase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, PendulumEase), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindAxis = { "UnwindAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMinimum = { "UnwindMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, UnwindMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMaximum = { "UnwindMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_Pendulum, UnwindMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMaximum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_PendulumEase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewProp_UnwindMaximum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ChainHarmonics_Pendulum",
		sizeof(FRigUnit_ChainHarmonics_Pendulum),
		alignof(FRigUnit_ChainHarmonics_Pendulum),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData;
class UScriptStruct* FRigUnit_ChainHarmonics_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonics_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonics_WorkData>()
{
	return FRigUnit_ChainHarmonics_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTip_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTip_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalTip;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendulumTip_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumTip_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendulumTip;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendulumPosition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumPosition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendulumPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendulumVelocity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendulumVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendulumVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyLine_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyLine_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HierarchyLine;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityLines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityLines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VelocityLines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonics_WorkData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, Time), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items_MetaData)) }; // 861402166
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio_Inner = { "Ratio", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, Ratio), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip_Inner = { "LocalTip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip = { "LocalTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, LocalTip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip_Inner = { "PendulumTip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip = { "PendulumTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, PendulumTip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition_Inner = { "PendulumPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition = { "PendulumPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, PendulumPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity_Inner = { "PendulumVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity = { "PendulumVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine_Inner = { "HierarchyLine", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine = { "HierarchyLine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, HierarchyLine), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines_Inner = { "VelocityLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines = { "VelocityLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics_WorkData, VelocityLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_LocalTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_PendulumVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_HierarchyLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewProp_VelocityLines,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ChainHarmonics_WorkData",
		sizeof(FRigUnit_ChainHarmonics_WorkData),
		alignof(FRigUnit_ChainHarmonics_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ChainHarmonics>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ChainHarmonics cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics;
class UScriptStruct* FRigUnit_ChainHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonics"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ChainHarmonics_Execute;
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("ChainRoot"), TEXT("FName"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("Reach"), TEXT("FRigUnit_ChainHarmonics_Reach"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("Wave"), TEXT("FRigUnit_ChainHarmonics_Wave"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("WaveCurve"), TEXT("FRuntimeFloatCurve"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("Pendulum"), TEXT("FRigUnit_ChainHarmonics_Pendulum"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("DrawWorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_ChainHarmonics_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_ChainHarmonics_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ChainHarmonics::Execute"), &FRigUnit_ChainHarmonics::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.OuterSingleton, Arguments_FRigUnit_ChainHarmonics_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonics>()
{
	return FRigUnit_ChainHarmonics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainRoot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Wave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pendulum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pendulum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawWorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawWorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "ChainHarmonics" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_ChainRoot_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_ChainRoot = { "ChainRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, ChainRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_ChainRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_ChainRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, Reach), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Reach_MetaData)) }; // 556430129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Wave_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Wave = { "Wave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, Wave), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Wave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Wave_MetaData)) }; // 1801084155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WaveCurve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WaveCurve = { "WaveCurve", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, WaveCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WaveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WaveCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Pendulum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Pendulum = { "Pendulum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, Pendulum), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Pendulum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Pendulum_MetaData)) }; // 2593788399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigUnit_ChainHarmonics*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ChainHarmonics), &Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_DrawWorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_DrawWorldOffset = { "DrawWorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, DrawWorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_DrawWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_DrawWorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonics, WorkData), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WorkData_MetaData)) }; // 3917302722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_ChainRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Reach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Wave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WaveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_Pendulum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_DrawWorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ChainHarmonics",
		sizeof(FRigUnit_ChainHarmonics),
		alignof(FRigUnit_ChainHarmonics),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics.InnerSingleton;
	}

void FRigUnit_ChainHarmonics::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ChainHarmonics::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		ChainRoot,
		Speed,
		Reach,
		Wave,
		WaveCurve,
		Pendulum,
		bDrawDebug,
		DrawWorldOffset,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_ChainHarmonicsPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ChainHarmonicsPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem;
class UScriptStruct* FRigUnit_ChainHarmonicsPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ChainHarmonicsPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ChainHarmonicsPerItem_Execute;
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("ChainRoot"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("Reach"), TEXT("FRigUnit_ChainHarmonics_Reach"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("Wave"), TEXT("FRigUnit_ChainHarmonics_Wave"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("WaveCurve"), TEXT("FRuntimeFloatCurve"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("Pendulum"), TEXT("FRigUnit_ChainHarmonics_Pendulum"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("DrawWorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_ChainHarmonicsPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_ChainHarmonics_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ChainHarmonicsPerItem::Execute"), &FRigUnit_ChainHarmonicsPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.OuterSingleton, Arguments_FRigUnit_ChainHarmonicsPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ChainHarmonicsPerItem>()
{
	return FRigUnit_ChainHarmonicsPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainRoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wave_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Wave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pendulum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pendulum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawWorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawWorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n * Given a root will drive all items underneath in a chain based harmonics spectrum\n */" },
		{ "DisplayName", "Chain Harmonics" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
		{ "ToolTip", "Given a root will drive all items underneath in a chain based harmonics spectrum" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ChainHarmonicsPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_ChainRoot_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_ChainRoot = { "ChainRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, ChainRoot), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_ChainRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_ChainRoot_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, Reach), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Reach_MetaData)) }; // 556430129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Wave_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Wave = { "Wave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, Wave), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Wave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Wave_MetaData)) }; // 1801084155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WaveCurve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WaveCurve = { "WaveCurve", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, WaveCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WaveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WaveCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Pendulum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Pendulum = { "Pendulum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, Pendulum), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Pendulum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Pendulum_MetaData)) }; // 2593788399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigUnit_ChainHarmonicsPerItem*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ChainHarmonicsPerItem), &Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_DrawWorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_DrawWorldOffset = { "DrawWorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_DrawWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_DrawWorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ChainHarmonicsPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WorkData_MetaData)) }; // 3917302722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_ChainRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Reach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Wave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WaveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_Pendulum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_DrawWorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ChainHarmonicsPerItem",
		sizeof(FRigUnit_ChainHarmonicsPerItem),
		alignof(FRigUnit_ChainHarmonicsPerItem),
		Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem.InnerSingleton;
	}

void FRigUnit_ChainHarmonicsPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ChainHarmonicsPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		ChainRoot,
		Speed,
		Reach,
		Wave,
		WaveCurve,
		Pendulum,
		bDrawDebug,
		DrawWorldOffset,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ChainHarmonics_Reach::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonics_Reach"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Reach, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonics_Reach), 556430129U) },
		{ FRigUnit_ChainHarmonics_Wave::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonics_Wave"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Wave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonics_Wave), 1801084155U) },
		{ FRigUnit_ChainHarmonics_Pendulum::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonics_Pendulum"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_Pendulum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonics_Pendulum), 2593788399U) },
		{ FRigUnit_ChainHarmonics_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonics_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonics_WorkData), 3917302722U) },
		{ FRigUnit_ChainHarmonics::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonics"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonics), 984054164U) },
		{ FRigUnit_ChainHarmonicsPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::NewStructOps, TEXT("RigUnit_ChainHarmonicsPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_ChainHarmonicsPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ChainHarmonicsPerItem), 2725229829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_572769148(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
